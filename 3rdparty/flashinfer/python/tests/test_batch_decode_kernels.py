"""
Copyright (c) 2023 by FlashInfer team.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
"""

import numpy
import pytest
import torch

import flashinfer


@pytest.mark.parametrize("batch_size", [12, 17])
@pytest.mark.parametrize("kv_len", [54, 97])
@pytest.mark.parametrize("page_size", [1, 8, 16])
@pytest.mark.parametrize("num_kv_heads", [4])
@pytest.mark.parametrize("num_qo_heads", [4, 32])
@pytest.mark.parametrize("head_dim", [128, 256])
@pytest.mark.parametrize("kv_layout", ["HND", "NHD"])
@pytest.mark.parametrize("pos_encoding_mode", ["NONE", "ROPE_LLAMA", "ALIBI"])
@pytest.mark.parametrize(
    "dtype", [torch.float16, torch.float8_e4m3fn, torch.float8_e5m2]
)
def test_batch_decode_with_paged_kv_cache(
    batch_size,
    kv_len,
    page_size,
    num_kv_heads,
    num_qo_heads,
    head_dim,
    kv_layout,
    pos_encoding_mode,
    dtype,
):
    q = torch.randn(batch_size, num_qo_heads, head_dim).to(0).to(dtype)
    num_pages_per_seq = (kv_len + page_size - 1) // page_size
    total_num_pages = num_pages_per_seq * batch_size
    kv_data = (
        torch.randn(total_num_pages, 2, num_kv_heads, page_size, head_dim).to(0)
        if kv_layout == "HND"
        else torch.randn(total_num_pages, 2, page_size, num_kv_heads, head_dim).to(0)
    )
    kv_indptr = torch.arange(0, batch_size + 1).to(0).int() * num_pages_per_seq
    kv_indices = torch.arange(0, total_num_pages).to(0).int()
    kv_last_page_len = torch.full(
        (batch_size,), (kv_len - 1) % page_size + 1, dtype=torch.int32
    ).to(0)

    workspace_buffer = torch.empty(32 * 1024 * 1024, dtype=torch.int8).to(0)
    wrapper = flashinfer.BatchDecodeWithPagedKVCacheWrapper(workspace_buffer, kv_layout)
    wrapper.begin_forward(
        kv_indptr,
        kv_indices,
        kv_last_page_len,
        num_qo_heads,
        num_kv_heads,
        head_dim,
        page_size,
        "NONE",
        dtype,
    )
    o = wrapper.forward(q, kv_data.to(dtype), pos_encoding_mode=pos_encoding_mode)

    for i in range(batch_size):
        perm_dims = [0, 2, 1, 3] if kv_layout == "HND" else [0, 1, 2, 3]
        perm_dims_last = [1, 0, 2] if kv_layout == "HND" else [0, 1, 2]
        qi = q[i]
        ki = torch.cat(
            [
                kv_data[kv_indptr[i] : kv_indptr[i + 1] - 1, 0]
                .permute(*perm_dims)
                .reshape(-1, num_kv_heads, head_dim),
                (
                    kv_data[kv_indptr[i + 1] - 1, 0, :, : kv_last_page_len[i]]
                    if kv_layout == "HND"
                    else kv_data[kv_indptr[i + 1] - 1, 0, : kv_last_page_len[i], :]
                )
                .permute(*perm_dims_last)
                .reshape(-1, num_kv_heads, head_dim),
            ],
            dim=0,
        ).to(dtype)
        vi = torch.cat(
            [
                kv_data[kv_indptr[i] : kv_indptr[i + 1] - 1, 1]
                .permute(*perm_dims)
                .reshape(-1, num_kv_heads, head_dim),
                (
                    kv_data[kv_indptr[i + 1] - 1, 1, :, : kv_last_page_len[i]]
                    if kv_layout == "HND"
                    else kv_data[kv_indptr[i + 1] - 1, 1, : kv_last_page_len[i], :]
                )
                .permute(*perm_dims_last)
                .reshape(-1, num_kv_heads, head_dim),
            ],
            dim=0,
        ).to(dtype)
        o_ref_i = flashinfer.single_decode_with_kv_cache(
            qi, ki, vi, pos_encoding_mode=pos_encoding_mode
        )
        o_i_np = o[i].cpu().numpy()
        o_ref_i_np = o_ref_i.cpu().numpy()
        numpy.testing.assert_allclose(o_i_np, o_ref_i_np, rtol=1e-3, atol=1e-3)


@pytest.mark.parametrize("batch_size", [12, 17])
@pytest.mark.parametrize("kv_len", [54, 97])
@pytest.mark.parametrize("page_size", [1, 8, 16])
@pytest.mark.parametrize("num_kv_heads", [4])
@pytest.mark.parametrize("num_qo_heads", [4, 32])
@pytest.mark.parametrize("head_dim", [128, 256])
@pytest.mark.parametrize("kv_layout", ["HND", "NHD"])
@pytest.mark.parametrize("pos_encoding_mode", ["NONE", "ROPE_LLAMA", "ALIBI"])
@pytest.mark.parametrize(
    "dtype", [torch.float16, torch.float8_e4m3fn, torch.float8_e5m2]
)
def test_cuda_graph_batch_decode_with_paged_kv_cache(
    batch_size,
    kv_len,
    page_size,
    num_kv_heads,
    num_qo_heads,
    head_dim,
    kv_layout,
    pos_encoding_mode,
    dtype,
):
    q = torch.randn(batch_size, num_qo_heads, head_dim).to(0).to(dtype)
    num_pages_per_seq = (kv_len + page_size - 1) // page_size
    total_num_pages = num_pages_per_seq * batch_size
    kv_data = (
        torch.randn(total_num_pages, 2, num_kv_heads, page_size, head_dim).to(0)
        if kv_layout == "HND"
        else torch.randn(total_num_pages, 2, page_size, num_kv_heads, head_dim).to(0)
    )
    kv_indptr_host_warmup = torch.arange(0, batch_size + 1).int()
    kv_indices_host_warmup = torch.arange(0, batch_size).int()
    kv_last_page_len_host_warmup = torch.full(
        (batch_size,), page_size, dtype=torch.int32
    )

    kv_indptr_host = torch.arange(0, batch_size + 1).int() * num_pages_per_seq
    kv_indices_host = torch.arange(0, total_num_pages).int()
    kv_last_page_len_host = torch.full(
        (batch_size,), (kv_len - 1) % page_size + 1, dtype=torch.int32
    )

    kv_indptr_device_buffer = torch.empty(batch_size + 1).int().to(0)
    kv_indices_device_buffer = torch.empty(total_num_pages).int().to(0)
    kv_last_page_device_buffer = torch.empty(batch_size).int().to(0)

    workspace_buffer = torch.empty(128 * 1024 * 1024, dtype=torch.int8).to(0)
    wrapper = flashinfer.CUDAGraphBatchDecodeWithPagedKVCacheWrapper(
        workspace_buffer,
        kv_indptr_device_buffer,
        kv_indices_device_buffer,
        kv_last_page_device_buffer,
        kv_layout,
    )
    wrapper.begin_forward(
        kv_indptr_host_warmup,
        kv_indices_host_warmup,
        kv_last_page_len_host_warmup,
        num_qo_heads,
        num_kv_heads,
        head_dim,
        page_size,
        "NONE",
        dtype,
    )
    # warmup
    s = torch.cuda.Stream()
    s.wait_stream(torch.cuda.current_stream())
    with torch.cuda.stream(s):
        for _ in range(3):
            o = wrapper.forward(
                q, kv_data.to(dtype), pos_encoding_mode=pos_encoding_mode
            )
    torch.cuda.current_stream().wait_stream(s)
    # capture
    g = torch.cuda.CUDAGraph()
    with torch.cuda.graph(g):
        o = wrapper.forward(q, kv_data.to(dtype), pos_encoding_mode=pos_encoding_mode)

    wrapper.begin_forward(
        kv_indptr_host,
        kv_indices_host,
        kv_last_page_len_host,
        num_qo_heads,
        num_kv_heads,
        head_dim,
        page_size,
        "NONE",
        dtype,
    )
    g.replay()

    # compute ground truth and compare
    kv_indptr = kv_indptr_host.to(0)
    kv_indices = kv_indices_host.to(0)
    kv_last_page_len = kv_last_page_len_host.to(0)
    for i in range(batch_size):
        perm_dims = [0, 2, 1, 3] if kv_layout == "HND" else [0, 1, 2, 3]
        perm_dims_last = [1, 0, 2] if kv_layout == "HND" else [0, 1, 2]
        qi = q[i]
        ki = torch.cat(
            [
                kv_data[kv_indptr[i] : kv_indptr[i + 1] - 1, 0]
                .permute(*perm_dims)
                .reshape(-1, num_kv_heads, head_dim),
                (
                    kv_data[kv_indptr[i + 1] - 1, 0, :, : kv_last_page_len[i]]
                    if kv_layout == "HND"
                    else kv_data[kv_indptr[i + 1] - 1, 0, : kv_last_page_len[i], :]
                )
                .permute(*perm_dims_last)
                .reshape(-1, num_kv_heads, head_dim),
            ],
            dim=0,
        ).to(dtype)
        vi = torch.cat(
            [
                kv_data[kv_indptr[i] : kv_indptr[i + 1] - 1, 1]
                .permute(*perm_dims)
                .reshape(-1, num_kv_heads, head_dim),
                (
                    kv_data[kv_indptr[i + 1] - 1, 1, :, : kv_last_page_len[i]]
                    if kv_layout == "HND"
                    else kv_data[kv_indptr[i + 1] - 1, 1, : kv_last_page_len[i], :]
                )
                .permute(*perm_dims_last)
                .reshape(-1, num_kv_heads, head_dim),
            ],
            dim=0,
        ).to(dtype)
        o_ref_i = flashinfer.single_decode_with_kv_cache(
            qi, ki, vi, pos_encoding_mode=pos_encoding_mode
        )
        o_i_np = o[i].cpu().numpy()
        o_ref_i_np = o_ref_i.cpu().numpy()
        numpy.testing.assert_allclose(o_i_np, o_ref_i_np, rtol=1e-3, atol=1e-3)


if __name__ == "__main__":
    test_batch_decode_with_paged_kv_cache(
        12, 54, 8, 8, 8, 128, "HND", "NONE", torch.float16
    )
    test_batch_decode_with_paged_kv_cache(
        12, 54, 1, 8, 8, 128, "HND", "NONE", torch.float8_e5m2
    )
    test_cuda_graph_batch_decode_with_paged_kv_cache(
        12, 54, 8, 8, 8, 128, "HND", "NONE", torch.float16
    )

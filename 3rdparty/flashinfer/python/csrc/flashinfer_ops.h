/*
 * Copyright (c) 2023 by FlashInfer team.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once
#include <torch/extension.h>

#include <flashinfer/attention/handler.cuh>
#include <flashinfer/layout.cuh>
#include <memory>

// namespace flashinfer {
// class BatchPrefillHandler;
// class BatchDecodeHandler;
// }  // namespace flashinfer

torch::Tensor single_decode_with_kv_cache(torch::Tensor q, torch::Tensor k, torch::Tensor v,
                                          torch::Tensor tmp, unsigned int pos_encoding_mode,
                                          unsigned int layout, float sm_scale, float rope_scale,
                                          float rope_theta);

std::vector<torch::Tensor> single_prefill_with_kv_cache(
    torch::Tensor q, torch::Tensor k, torch::Tensor v, torch::Tensor tmp, bool causal,
    unsigned int layout, unsigned int pos_encoding_mode, bool allow_fp16_qk_reduction,
    float sm_scale, float rope_scale, float rope_theta, bool return_lse);

void append_paged_kv_cache(torch::Tensor append_key, torch::Tensor append_value,
                           torch::Tensor append_indptr, torch::Tensor kv_data,
                           torch::Tensor kv_indices, torch::Tensor kv_indptr,
                           torch::Tensor kv_last_page_len, unsigned int layout);

std::vector<torch::Tensor> merge_state(torch::Tensor v_a, torch::Tensor s_a, torch::Tensor v_b,
                                       torch::Tensor s_b);

void merge_state_in_place(torch::Tensor v, torch::Tensor s, torch::Tensor v_other,
                          torch::Tensor s_other);

std::vector<torch::Tensor> merge_states(torch::Tensor v, torch::Tensor s);

std::vector<torch::Tensor> batch_decode_with_padded_kv_cache(
    torch::Tensor q, torch::Tensor k_padded, torch::Tensor v_padded, unsigned int layout,
    unsigned int pos_encoding_mode, float sm_scale, float rope_scale, float rope_theta,
    bool return_lse);

torch::Tensor sampling_from_probs(torch::Tensor probs, torch::Tensor uniform_samples);

std::vector<torch::Tensor> top_p_sampling_from_probs(torch::Tensor probs,
                                                     torch::Tensor uniform_samples, double top_p);

std::vector<torch::Tensor> top_k_sampling_from_probs(torch::Tensor probs,
                                                     torch::Tensor uniform_samples,
                                                     unsigned int top_k);

torch::Tensor rmsnorm(torch::Tensor x, torch::Tensor w, double eps);

class BatchDecodeWithPagedKVCachePyTorchWrapper {
 public:
  void BeginForward(torch::Tensor workspace_buffer, torch::Tensor indptr,
                    torch::Tensor last_page_len, unsigned int batch_size, unsigned int num_qo_heads,
                    unsigned int num_kv_heads, unsigned int head_dim, unsigned int page_size,
                    unsigned int pos_encoding_mode, torch::Tensor empty_data);
  void EndForward();
  void UpdatePageLockedBufferSize(uint32_t max_workspace_size_in_bytes);
  std::vector<torch::Tensor> Forward(torch::Tensor q, torch::Tensor paged_kv_data,
                                     torch::Tensor paged_kv_indptr, torch::Tensor paged_kv_indices,
                                     torch::Tensor paged_kv_last_page_len,
                                     unsigned int pos_encoding_mode, float sm_scale,
                                     float rope_scale, float rope_theta, bool return_lse);
  BatchDecodeWithPagedKVCachePyTorchWrapper(
      std::shared_ptr<flashinfer::BatchDecodeHandler> handler_ptr, flashinfer::QKVLayout kv_layout)
      : handler_(handler_ptr), kv_layout_(kv_layout) {}
  BatchDecodeWithPagedKVCachePyTorchWrapper(unsigned int layout,
                                            unsigned int max_workspace_size_in_bytes)
      : kv_layout_(flashinfer::QKVLayout(layout)),
        handler_(
            std::make_shared<flashinfer::BatchDecodeHandler>(max_workspace_size_in_bytes)) {}

 protected:
  std::shared_ptr<flashinfer::BatchDecodeHandler> handler_;
  flashinfer::QKVLayout kv_layout_;
};

class CUDAGraphBatchDecodeWithPagedKVCachePyTorchWrapper
    : public BatchDecodeWithPagedKVCachePyTorchWrapper {
 public:
  CUDAGraphBatchDecodeWithPagedKVCachePyTorchWrapper(unsigned int layout,
                                                     unsigned int max_batch_size)
      : BatchDecodeWithPagedKVCachePyTorchWrapper(
            std::make_shared<flashinfer::CUDAGraphBatchDecodeHandler>(max_batch_size),
            flashinfer::QKVLayout(layout)) {}
};

class BatchPrefillWithPagedKVCachePyTorchWrapper {
 public:
  void BeginForward(torch::Tensor workspace_buffer, torch::Tensor qo_indptr,
                    unsigned int batch_size, unsigned int num_qo_heads, unsigned int num_kv_heads,
                    unsigned int head_dim);
  void EndForward();
  void UpdatePageLockedBufferSize(uint32_t max_workspace_size_in_bytes);
  std::vector<torch::Tensor> Forward(torch::Tensor q, torch::Tensor qo_indptr,
                                     torch::Tensor paged_kv_data, torch::Tensor paged_kv_indptr,
                                     torch::Tensor paged_kv_indices,
                                     torch::Tensor paged_kv_last_page_len, bool causal,
                                     unsigned int pos_encoding_mode, bool allow_fp16_qk_reduction,
                                     float sm_scale, float rope_scale, float rope_theta,
                                     bool return_lse);
  BatchPrefillWithPagedKVCachePyTorchWrapper(unsigned int layout,
                                             unsigned int max_workspace_size_in_bytes)
      : kv_layout_(flashinfer::QKVLayout(layout)),
        handler_(std::make_shared<flashinfer::BatchPrefillHandler>(max_workspace_size_in_bytes)) {}

 private:
  std::shared_ptr<flashinfer::BatchPrefillHandler> handler_;
  flashinfer::QKVLayout kv_layout_;
};

class BatchPrefillWithRaggedKVCachePyTorchWrapper {
 public:
  void BeginForward(torch::Tensor workspace_buffer, torch::Tensor qo_indptr,
                    unsigned int batch_size, unsigned int num_qo_heads, unsigned int num_kv_heads,
                    unsigned int head_dim);
  void EndForward();
  void UpdatePageLockedBufferSize(uint32_t max_workspace_size_in_bytes);
  std::vector<torch::Tensor> Forward(torch::Tensor q, torch::Tensor qo_indptr, torch::Tensor k,
                                     torch::Tensor v, torch::Tensor kv_indptr, bool causal,
                                     unsigned int pos_encoding_mode, bool allow_fp16_qk_reduction,
                                     float sm_scale, float rope_scale, float rope_theta,
                                     bool return_lse);
  BatchPrefillWithRaggedKVCachePyTorchWrapper(unsigned int layout,
                                              unsigned int max_workspace_size_in_bytes)
      : kv_layout_(flashinfer::QKVLayout(layout)),
        handler_(std::make_shared<flashinfer::BatchPrefillHandler>(max_workspace_size_in_bytes)) {}

 private:
  std::shared_ptr<flashinfer::BatchPrefillHandler> handler_;
  flashinfer::QKVLayout kv_layout_;
};

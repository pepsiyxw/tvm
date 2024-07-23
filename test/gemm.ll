; ModuleID = 'TVMMod'
source_filename = "TVMMod"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

%0 = type { double }

@__tvm_module_ctx = linkonce dllexport local_unnamed_addr global i8* null, align 8
@__TVMFuncCall = linkonce dllexport local_unnamed_addr global i32 (i8*, %0*, i32*, i32, %0*, i32*)* null, align 8
@__TVMBackendGetFuncFromEnv = linkonce dllexport local_unnamed_addr global i32 (i8*, i8*, i8**)* null, align 8
@__TVMAPISetLastError = linkonce dllexport local_unnamed_addr global void (i8*)* null, align 8
@.str = private constant [55 x i8] c"Assert fail: num_args == 3, gemm: num_args should be 3\00", align 1
@.str.1 = private constant [73 x i8] c"Assert fail: not T.isnullptr(args), gemm: TVMValue* arg pointer was NULL\00", align 1
@.str.2 = private constant [75 x i8] c"Assert fail: not T.isnullptr(arg_type_ids), gemm: int* type_codes was NULL\00", align 1
@.str.3 = private constant [118 x i8] c"Assert fail: data_code == 3 or data_code == 13 or data_code == 7 or data_code == 4, gemm: Expect arg[0] to be pointer\00", align 1
@.str.4 = private constant [126 x i8] c"Assert fail: weight_code == 3 or weight_code == 13 or weight_code == 7 or weight_code == 4, gemm: Expect arg[1] to be pointer\00", align 1
@.str.5 = private constant [114 x i8] c"Assert fail: res_code == 3 or res_code == 13 or res_code == 7 or res_code == 4, gemm: Expect arg[2] to be pointer\00", align 1
@.str.6 = private constant [93 x i8] c"Assert fail: not T.isnullptr(data), gemm.data is expected to have non-NULL DLTensor* pointer\00", align 1
@.str.7 = private constant [95 x i8] c"Assert fail: 4 == T.tvm_struct_get(data, 0, 4, \22int32\22), gemm.data.ndim is expected to equal 4\00", align 1
@.str.8 = private constant [97 x i8] c"Assert fail: not T.isnullptr(weight), gemm.weight is expected to have non-NULL DLTensor* pointer\00", align 1
@.str.9 = private constant [99 x i8] c"Assert fail: 4 == T.tvm_struct_get(weight, 0, 4, \22int32\22), gemm.weight.ndim is expected to equal 4\00", align 1
@.str.10 = private constant [91 x i8] c"Assert fail: not T.isnullptr(res), gemm.res is expected to have non-NULL DLTensor* pointer\00", align 1
@.str.11 = private constant [93 x i8] c"Assert fail: 4 == T.tvm_struct_get(res, 0, 4, \22int32\22), gemm.res.ndim is expected to equal 4\00", align 1
@.str.12 = private constant [221 x i8] c"Assert fail: T.tvm_struct_get(data, 0, 5, \22uint8\22) == T.uint8(0) and T.tvm_struct_get(data, 0, 6, \22uint8\22) == T.uint8(16) and T.tvm_struct_get(data, 0, 7, \22uint16\22) == T.uint16(1), gemm.data.dtype is expected to be int16\00", align 1
@.str.13 = private constant [157 x i8] c"Assert fail: T.Cast(\22int32\22, gemm_data_shape[0]) == 64, Argument gemm.data.shape[0] has an unsatisfied constraint: 64 == T.Cast(\22int32\22, gemm_data_shape[0])\00", align 1
@.str.14 = private constant [155 x i8] c"Assert fail: T.Cast(\22int32\22, gemm_data_shape[1]) == 4, Argument gemm.data.shape[1] has an unsatisfied constraint: 4 == T.Cast(\22int32\22, gemm_data_shape[1])\00", align 1
@.str.15 = private constant [155 x i8] c"Assert fail: T.Cast(\22int32\22, gemm_data_shape[2]) == 1, Argument gemm.data.shape[2] has an unsatisfied constraint: 1 == T.Cast(\22int32\22, gemm_data_shape[2])\00", align 1
@.str.16 = private constant [157 x i8] c"Assert fail: T.Cast(\22int32\22, gemm_data_shape[3]) == 16, Argument gemm.data.shape[3] has an unsatisfied constraint: 16 == T.Cast(\22int32\22, gemm_data_shape[3])\00", align 1
@.str.17 = private constant [201 x i8] c"Assert fail: 1 == T.Cast(\22int32\22, gemm_data_strides[3]) and 16 == T.Cast(\22int32\22, gemm_data_strides[1]) and 64 == T.Cast(\22int32\22, gemm_data_strides[0]), gemm.data.strides: expected to be compact array\00", align 1
@.str.18 = private constant [184 x i8] c"Assert fail: T.uint64(0) == T.tvm_struct_get(data, 0, 8, \22uint64\22), Argument gemm.data.byte_offset has an unsatisfied constraint: T.uint64(0) == T.tvm_struct_get(data, 0, 8, \22uint64\22)\00", align 1
@.str.19 = private constant [166 x i8] c"Assert fail: T.tvm_struct_get(data, 0, 10, \22int32\22) == 12, Argument gemm.data.device_type has an unsatisfied constraint: 12 == T.tvm_struct_get(data, 0, 10, \22int32\22)\00", align 1
@.str.20 = private constant [88 x i8] c"Assert fail: not T.isnullptr(data), gemm.data is expected to have non-NULL data pointer\00", align 1
@.str.21 = private constant [229 x i8] c"Assert fail: T.tvm_struct_get(weight, 0, 5, \22uint8\22) == T.uint8(0) and T.tvm_struct_get(weight, 0, 6, \22uint8\22) == T.uint8(16) and T.tvm_struct_get(weight, 0, 7, \22uint16\22) == T.uint16(1), gemm.weight.dtype is expected to be int16\00", align 1
@.str.22 = private constant [161 x i8] c"Assert fail: T.Cast(\22int32\22, gemm_weight_shape[0]) == 4, Argument gemm.weight.shape[0] has an unsatisfied constraint: 4 == T.Cast(\22int32\22, gemm_weight_shape[0])\00", align 1
@.str.23 = private constant [161 x i8] c"Assert fail: T.Cast(\22int32\22, gemm_weight_shape[1]) == 4, Argument gemm.weight.shape[1] has an unsatisfied constraint: 4 == T.Cast(\22int32\22, gemm_weight_shape[1])\00", align 1
@.str.24 = private constant [163 x i8] c"Assert fail: T.Cast(\22int32\22, gemm_weight_shape[2]) == 16, Argument gemm.weight.shape[2] has an unsatisfied constraint: 16 == T.Cast(\22int32\22, gemm_weight_shape[2])\00", align 1
@.str.25 = private constant [163 x i8] c"Assert fail: T.Cast(\22int32\22, gemm_weight_shape[3]) == 16, Argument gemm.weight.shape[3] has an unsatisfied constraint: 16 == T.Cast(\22int32\22, gemm_weight_shape[3])\00", align 1
@.str.26 = private constant [262 x i8] c"Assert fail: 1 == T.Cast(\22int32\22, gemm_weight_strides[3]) and 16 == T.Cast(\22int32\22, gemm_weight_strides[2]) and 256 == T.Cast(\22int32\22, gemm_weight_strides[1]) and 1024 == T.Cast(\22int32\22, gemm_weight_strides[0]), gemm.weight.strides: expected to be compact array\00", align 1
@.str.27 = private constant [190 x i8] c"Assert fail: T.uint64(0) == T.tvm_struct_get(weight, 0, 8, \22uint64\22), Argument gemm.weight.byte_offset has an unsatisfied constraint: T.uint64(0) == T.tvm_struct_get(weight, 0, 8, \22uint64\22)\00", align 1
@.str.28 = private constant [172 x i8] c"Assert fail: T.tvm_struct_get(weight, 0, 10, \22int32\22) == 12, Argument gemm.weight.device_type has an unsatisfied constraint: 12 == T.tvm_struct_get(weight, 0, 10, \22int32\22)\00", align 1
@.str.29 = private constant [176 x i8] c"Assert fail: dev_id == T.tvm_struct_get(weight, 0, 9, \22int32\22), Argument gemm.weight.device_id has an unsatisfied constraint: dev_id == T.tvm_struct_get(weight, 0, 9, \22int32\22)\00", align 1
@.str.30 = private constant [92 x i8] c"Assert fail: not T.isnullptr(weight), gemm.weight is expected to have non-NULL data pointer\00", align 1
@.str.31 = private constant [217 x i8] c"Assert fail: T.tvm_struct_get(res, 0, 5, \22uint8\22) == T.uint8(0) and T.tvm_struct_get(res, 0, 6, \22uint8\22) == T.uint8(16) and T.tvm_struct_get(res, 0, 7, \22uint16\22) == T.uint16(1), gemm.res.dtype is expected to be int16\00", align 1
@.str.32 = private constant [154 x i8] c"Assert fail: T.Cast(\22int32\22, gemm_res_shape[0]) == 64, Argument gemm.res.shape[0] has an unsatisfied constraint: 64 == T.Cast(\22int32\22, gemm_res_shape[0])\00", align 1
@.str.33 = private constant [152 x i8] c"Assert fail: T.Cast(\22int32\22, gemm_res_shape[1]) == 4, Argument gemm.res.shape[1] has an unsatisfied constraint: 4 == T.Cast(\22int32\22, gemm_res_shape[1])\00", align 1
@.str.34 = private constant [152 x i8] c"Assert fail: T.Cast(\22int32\22, gemm_res_shape[2]) == 1, Argument gemm.res.shape[2] has an unsatisfied constraint: 1 == T.Cast(\22int32\22, gemm_res_shape[2])\00", align 1
@.str.35 = private constant [154 x i8] c"Assert fail: T.Cast(\22int32\22, gemm_res_shape[3]) == 16, Argument gemm.res.shape[3] has an unsatisfied constraint: 16 == T.Cast(\22int32\22, gemm_res_shape[3])\00", align 1
@.str.36 = private constant [197 x i8] c"Assert fail: 1 == T.Cast(\22int32\22, gemm_res_strides[3]) and 16 == T.Cast(\22int32\22, gemm_res_strides[1]) and 64 == T.Cast(\22int32\22, gemm_res_strides[0]), gemm.res.strides: expected to be compact array\00", align 1
@.str.37 = private constant [181 x i8] c"Assert fail: T.uint64(0) == T.tvm_struct_get(res, 0, 8, \22uint64\22), Argument gemm.res.byte_offset has an unsatisfied constraint: T.uint64(0) == T.tvm_struct_get(res, 0, 8, \22uint64\22)\00", align 1
@.str.38 = private constant [163 x i8] c"Assert fail: T.tvm_struct_get(res, 0, 10, \22int32\22) == 12, Argument gemm.res.device_type has an unsatisfied constraint: 12 == T.tvm_struct_get(res, 0, 10, \22int32\22)\00", align 1
@.str.39 = private constant [167 x i8] c"Assert fail: dev_id == T.tvm_struct_get(res, 0, 9, \22int32\22), Argument gemm.res.device_id has an unsatisfied constraint: dev_id == T.tvm_struct_get(res, 0, 9, \22int32\22)\00", align 1
@.str.40 = private constant [86 x i8] c"Assert fail: not T.isnullptr(res), gemm.res is expected to have non-NULL data pointer\00", align 1
@.tvm_func.__tvm_set_device = internal unnamed_addr global i8* null, align 8
@.str.41 = private constant [17 x i8] c"__tvm_set_device\00", align 1
@__tvm_static_handle = private global i8* null, align 8
@__tvm_static_handle.43 = private global i8* null, align 8
@__tvm_static_handle.45 = private global i8* null, align 8
@__tvm_static_handle.47 = private global i8* null, align 8
@__tvm_static_handle.49 = private global i8* null, align 8
@__tvm_main__ = weak dllexport local_unnamed_addr constant [5 x i8] c"gemm\00", align 1
@llvm.global_ctors = appending global [0 x { i32, void ()*, i8* }] zeroinitializer

define dllexport i32 @gemm(i8* noalias readonly %args, i32* noalias readonly %arg_type_ids, i32 %num_args, i8* noalias nocapture readnone %out_ret_value, i32* noalias nocapture readnone %out_ret_tcode, i8* noalias nocapture readnone %resource_handle) local_unnamed_addr #0 !dbg !6 {
entry:
  call void @llvm.dbg.value(metadata i8* %args, metadata !13, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.value(metadata i32* %arg_type_ids, metadata !14, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.value(metadata i32 %num_args, metadata !15, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.value(metadata i8* %out_ret_value, metadata !16, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.value(metadata i32* %out_ret_tcode, metadata !17, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.value(metadata i8* %resource_handle, metadata !18, metadata !DIExpression()), !dbg !19
  %0 = alloca i8*, align 8, !dbg !19
  %stack_value_void_ptr106 = alloca [3 x %0], align 8, !dbg !19
  %stack_tcode107 = alloca [3 x i32], align 4, !dbg !19
  %stack_tcode107.sub = getelementptr inbounds [3 x i32], [3 x i32]* %stack_tcode107, i64 0, i64 0
  %stack_value_void_ptr106.sub = getelementptr inbounds [3 x %0], [3 x %0]* %stack_value_void_ptr106, i64 0, i64 0
  %ctx_cache_ = tail call i8* @VTATLSCommandHandle(), !dbg !19
  call void @llvm.dbg.declare(metadata i8* %ctx_cache_, metadata !20, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i8* %ctx_cache_, metadata !20, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i32* %stack_tcode107.sub, metadata !21, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i32* %stack_tcode107.sub, metadata !21, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata [3 x %0]* %stack_value_void_ptr106, metadata !22, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata [3 x %0]* %stack_value_void_ptr106, metadata !22, metadata !DIExpression()), !dbg !19
  %1 = icmp eq i32 %num_args, 3, !dbg !19
  br i1 %1, label %assert_end, label %assert_fail, !dbg !19, !prof !23

assert_fail:                                      ; preds = %entry
  %2 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %2(i8* getelementptr inbounds ([55 x i8], [55 x i8]* @.str, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end:                                       ; preds = %entry
  %3 = icmp eq i8* %args, null, !dbg !19
  br i1 %3, label %assert_fail1, label %assert_end2, !dbg !19, !prof !27

assert_fail1:                                     ; preds = %assert_end
  %4 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %4(i8* getelementptr inbounds ([73 x i8], [73 x i8]* @.str.1, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end2:                                      ; preds = %assert_end
  %5 = icmp eq i32* %arg_type_ids, null, !dbg !19
  br i1 %5, label %assert_fail3, label %assert_end4, !dbg !19, !prof !27

assert_fail3:                                     ; preds = %assert_end2
  %6 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %6(i8* getelementptr inbounds ([75 x i8], [75 x i8]* @.str.2, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end4:                                      ; preds = %assert_end2
  %data.code = load i32, i32* %arg_type_ids, align 4, !dbg !19, !tbaa !28
  call void @llvm.dbg.declare(metadata i32 %data.code, metadata !39, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i32 %data.code, metadata !39, metadata !DIExpression()), !dbg !19
  switch i32 %data.code, label %assert_fail5 [
    i32 13, label %assert_end6
    i32 7, label %assert_end6
    i32 4, label %assert_end6
    i32 3, label %assert_end6
  ], !dbg !19

assert_fail5:                                     ; preds = %assert_end4
  %7 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %7(i8* getelementptr inbounds ([118 x i8], [118 x i8]* @.str.3, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end6:                                      ; preds = %assert_end4, %assert_end4, %assert_end4, %assert_end4
  %8 = getelementptr inbounds i32, i32* %arg_type_ids, i64 1, !dbg !19
  %weight.code = load i32, i32* %8, align 4, !dbg !19, !tbaa !40
  call void @llvm.dbg.declare(metadata i32 %weight.code, metadata !42, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i32 %weight.code, metadata !42, metadata !DIExpression()), !dbg !19
  switch i32 %weight.code, label %assert_fail7 [
    i32 13, label %assert_end8
    i32 7, label %assert_end8
    i32 4, label %assert_end8
    i32 3, label %assert_end8
  ], !dbg !19

assert_fail7:                                     ; preds = %assert_end6
  %9 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %9(i8* getelementptr inbounds ([126 x i8], [126 x i8]* @.str.4, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end8:                                      ; preds = %assert_end6, %assert_end6, %assert_end6, %assert_end6
  %10 = getelementptr inbounds i32, i32* %arg_type_ids, i64 2, !dbg !19
  %res.code = load i32, i32* %10, align 4, !dbg !19, !tbaa !43
  call void @llvm.dbg.declare(metadata i32 %res.code, metadata !46, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i32 %res.code, metadata !46, metadata !DIExpression()), !dbg !19
  switch i32 %res.code, label %assert_fail9 [
    i32 13, label %assert_end10
    i32 7, label %assert_end10
    i32 4, label %assert_end10
    i32 3, label %assert_end10
  ], !dbg !19

assert_fail9:                                     ; preds = %assert_end8
  %11 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %11(i8* getelementptr inbounds ([114 x i8], [114 x i8]* @.str.5, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end10:                                     ; preds = %assert_end8, %assert_end8, %assert_end8, %assert_end8
  %12 = bitcast i8* %args to i8**, !dbg !19
  %data = load i8*, i8** %12, align 8, !dbg !19
  call void @llvm.dbg.declare(metadata i8* %data, metadata !47, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i8* %data, metadata !47, metadata !DIExpression()), !dbg !19
  %13 = getelementptr inbounds i8, i8* %args, i64 8, !dbg !19
  %14 = bitcast i8* %13 to i8**, !dbg !19
  %weight = load i8*, i8** %14, align 8, !dbg !19
  call void @llvm.dbg.declare(metadata i8* %weight, metadata !48, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i8* %weight, metadata !48, metadata !DIExpression()), !dbg !19
  %15 = getelementptr inbounds i8, i8* %args, i64 16, !dbg !19
  %16 = bitcast i8* %15 to i8**, !dbg !19
  %res = load i8*, i8** %16, align 8, !dbg !19
  call void @llvm.dbg.declare(metadata i8* %res, metadata !49, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i8* %res, metadata !49, metadata !DIExpression()), !dbg !19
  %17 = icmp eq i8* %data, null, !dbg !19
  br i1 %17, label %assert_fail11, label %assert_end12, !dbg !19, !prof !27

assert_fail11:                                    ; preds = %assert_end10
  %18 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %18(i8* getelementptr inbounds ([93 x i8], [93 x i8]* @.str.6, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end12:                                     ; preds = %assert_end10
  %19 = getelementptr inbounds i8, i8* %data, i64 16, !dbg !19
  %20 = bitcast i8* %19 to i32*, !dbg !19
  %21 = load i32, i32* %20, align 4, !dbg !19
  %22 = icmp eq i32 %21, 4, !dbg !19
  br i1 %22, label %assert_end14, label %assert_fail13, !dbg !19, !prof !23

assert_fail13:                                    ; preds = %assert_end12
  %23 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %23(i8* getelementptr inbounds ([95 x i8], [95 x i8]* @.str.7, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end14:                                     ; preds = %assert_end12
  %24 = getelementptr inbounds i8, i8* %data, i64 24, !dbg !19
  %25 = bitcast i8* %24 to i64**, !dbg !19
  %gemm.data.shape = load i64*, i64** %25, align 8, !dbg !19
  call void @llvm.dbg.declare(metadata i64* %gemm.data.shape, metadata !50, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i64* %gemm.data.shape, metadata !50, metadata !DIExpression()), !dbg !19
  %26 = getelementptr inbounds i8, i8* %data, i64 32, !dbg !19
  %27 = bitcast i8* %26 to i64**, !dbg !19
  %gemm.data.strides = load i64*, i64** %27, align 8, !dbg !19
  call void @llvm.dbg.declare(metadata i64* %gemm.data.strides, metadata !53, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i64* %gemm.data.strides, metadata !53, metadata !DIExpression()), !dbg !19
  %28 = getelementptr inbounds i8, i8* %data, i64 12, !dbg !19
  %29 = bitcast i8* %28 to i32*, !dbg !19
  %dev_id = load i32, i32* %29, align 4, !dbg !19
  call void @llvm.dbg.declare(metadata i32 %dev_id, metadata !54, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i32 %dev_id, metadata !54, metadata !DIExpression()), !dbg !19
  %30 = bitcast i8* %data to i16**, !dbg !19
  %data_void_ptr108 = load i16*, i16** %30, align 8, !dbg !19
  call void @llvm.dbg.declare(metadata i16* %data_void_ptr108, metadata !55, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i16* %data_void_ptr108, metadata !55, metadata !DIExpression()), !dbg !19
  %ptrint = ptrtoint i16* %data_void_ptr108 to i64, !dbg !19
  %maskedptr = and i64 %ptrint, 63, !dbg !19
  %maskcond = icmp eq i64 %maskedptr, 0, !dbg !19
  tail call void @llvm.assume(i1 %maskcond), !dbg !19
  %31 = icmp eq i8* %weight, null, !dbg !19
  br i1 %31, label %assert_fail17, label %assert_end18, !dbg !19, !prof !27

assert_fail17:                                    ; preds = %assert_end14
  %32 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %32(i8* getelementptr inbounds ([97 x i8], [97 x i8]* @.str.8, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end18:                                     ; preds = %assert_end14
  %33 = getelementptr inbounds i8, i8* %weight, i64 16, !dbg !19
  %34 = bitcast i8* %33 to i32*, !dbg !19
  %35 = load i32, i32* %34, align 4, !dbg !19
  %36 = icmp eq i32 %35, 4, !dbg !19
  br i1 %36, label %assert_end20, label %assert_fail19, !dbg !19, !prof !23

assert_fail19:                                    ; preds = %assert_end18
  %37 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %37(i8* getelementptr inbounds ([99 x i8], [99 x i8]* @.str.9, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end20:                                     ; preds = %assert_end18
  %38 = getelementptr inbounds i8, i8* %weight, i64 24, !dbg !19
  %39 = bitcast i8* %38 to i64**, !dbg !19
  %gemm.weight.shape = load i64*, i64** %39, align 8, !dbg !19
  call void @llvm.dbg.declare(metadata i64* %gemm.weight.shape, metadata !58, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i64* %gemm.weight.shape, metadata !58, metadata !DIExpression()), !dbg !19
  %40 = getelementptr inbounds i8, i8* %weight, i64 32, !dbg !19
  %41 = bitcast i8* %40 to i64**, !dbg !19
  %gemm.weight.strides = load i64*, i64** %41, align 8, !dbg !19
  call void @llvm.dbg.declare(metadata i64* %gemm.weight.strides, metadata !59, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i64* %gemm.weight.strides, metadata !59, metadata !DIExpression()), !dbg !19
  %42 = bitcast i8* %weight to i16**, !dbg !19
  %weight_void_ptr109 = load i16*, i16** %42, align 8, !dbg !19
  call void @llvm.dbg.declare(metadata i16* %weight_void_ptr109, metadata !60, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i16* %weight_void_ptr109, metadata !60, metadata !DIExpression()), !dbg !19
  %ptrint23 = ptrtoint i16* %weight_void_ptr109 to i64, !dbg !19
  %maskedptr24 = and i64 %ptrint23, 63, !dbg !19
  %maskcond25 = icmp eq i64 %maskedptr24, 0, !dbg !19
  tail call void @llvm.assume(i1 %maskcond25), !dbg !19
  %43 = icmp eq i8* %res, null, !dbg !19
  br i1 %43, label %assert_fail26, label %assert_end27, !dbg !19, !prof !27

assert_fail26:                                    ; preds = %assert_end20
  %44 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %44(i8* getelementptr inbounds ([91 x i8], [91 x i8]* @.str.10, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end27:                                     ; preds = %assert_end20
  %45 = getelementptr inbounds i8, i8* %res, i64 16, !dbg !19
  %46 = bitcast i8* %45 to i32*, !dbg !19
  %47 = load i32, i32* %46, align 4, !dbg !19
  %48 = icmp eq i32 %47, 4, !dbg !19
  br i1 %48, label %assert_end29, label %assert_fail28, !dbg !19, !prof !23

assert_fail28:                                    ; preds = %assert_end27
  %49 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %49(i8* getelementptr inbounds ([93 x i8], [93 x i8]* @.str.11, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end29:                                     ; preds = %assert_end27
  %50 = getelementptr inbounds i8, i8* %res, i64 24, !dbg !19
  %51 = bitcast i8* %50 to i64**, !dbg !19
  %gemm.res.shape = load i64*, i64** %51, align 8, !dbg !19
  call void @llvm.dbg.declare(metadata i64* %gemm.res.shape, metadata !61, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i64* %gemm.res.shape, metadata !61, metadata !DIExpression()), !dbg !19
  %52 = getelementptr inbounds i8, i8* %res, i64 32, !dbg !19
  %53 = bitcast i8* %52 to i64**, !dbg !19
  %gemm.res.strides = load i64*, i64** %53, align 8, !dbg !19
  call void @llvm.dbg.declare(metadata i64* %gemm.res.strides, metadata !62, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i64* %gemm.res.strides, metadata !62, metadata !DIExpression()), !dbg !19
  %54 = bitcast i8* %res to i16**, !dbg !19
  %res_void_ptr110 = load i16*, i16** %54, align 8, !dbg !19
  call void @llvm.dbg.declare(metadata i16* %res_void_ptr110, metadata !63, metadata !DIExpression()), !dbg !19
  call void @llvm.dbg.declare(metadata i16* %res_void_ptr110, metadata !63, metadata !DIExpression()), !dbg !19
  %ptrint32 = ptrtoint i16* %res_void_ptr110 to i64, !dbg !19
  %maskedptr33 = and i64 %ptrint32, 63, !dbg !19
  %maskcond34 = icmp eq i64 %maskedptr33, 0, !dbg !19
  tail call void @llvm.assume(i1 %maskcond34), !dbg !19
  %55 = getelementptr inbounds i8, i8* %data, i64 22, !dbg !19
  %56 = bitcast i8* %55 to i16*, !dbg !19
  %57 = load i16, i16* %56, align 2, !dbg !19
  %58 = icmp eq i16 %57, 1, !dbg !19
  %59 = getelementptr inbounds i8, i8* %data, i64 21, !dbg !19
  %60 = load i8, i8* %59, align 1, !dbg !19
  %61 = icmp eq i8 %60, 16, !dbg !19
  %62 = getelementptr inbounds i8, i8* %data, i64 20, !dbg !19
  %63 = load i8, i8* %62, align 1, !dbg !19
  %64 = icmp eq i8 %63, 0, !dbg !19
  %65 = and i1 %61, %64, !dbg !19
  %66 = and i1 %58, %65, !dbg !19
  br i1 %66, label %assert_end36, label %assert_fail35, !dbg !19, !prof !23

assert_fail35:                                    ; preds = %assert_end29
  %67 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %67(i8* getelementptr inbounds ([221 x i8], [221 x i8]* @.str.12, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end36:                                     ; preds = %assert_end29
  %68 = load i64, i64* %gemm.data.shape, align 8, !dbg !19, !tbaa !64
  %69 = trunc i64 %68 to i32, !dbg !19
  %70 = icmp eq i32 %69, 64, !dbg !19
  br i1 %70, label %assert_end38, label %assert_fail37, !dbg !19, !prof !23

assert_fail37:                                    ; preds = %assert_end36
  %71 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %71(i8* getelementptr inbounds ([157 x i8], [157 x i8]* @.str.13, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end38:                                     ; preds = %assert_end36
  %72 = getelementptr inbounds i64, i64* %gemm.data.shape, i64 1, !dbg !19
  %73 = load i64, i64* %72, align 8, !dbg !19, !tbaa !74
  %74 = trunc i64 %73 to i32, !dbg !19
  %75 = icmp eq i32 %74, 4, !dbg !19
  br i1 %75, label %assert_end40, label %assert_fail39, !dbg !19, !prof !23

assert_fail39:                                    ; preds = %assert_end38
  %76 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %76(i8* getelementptr inbounds ([155 x i8], [155 x i8]* @.str.14, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end40:                                     ; preds = %assert_end38
  %77 = getelementptr inbounds i64, i64* %gemm.data.shape, i64 2, !dbg !19
  %78 = load i64, i64* %77, align 8, !dbg !19, !tbaa !76
  %79 = trunc i64 %78 to i32, !dbg !19
  %80 = icmp eq i32 %79, 1, !dbg !19
  br i1 %80, label %assert_end42, label %assert_fail41, !dbg !19, !prof !23

assert_fail41:                                    ; preds = %assert_end40
  %81 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %81(i8* getelementptr inbounds ([155 x i8], [155 x i8]* @.str.15, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end42:                                     ; preds = %assert_end40
  %82 = getelementptr inbounds i64, i64* %gemm.data.shape, i64 3, !dbg !19
  %83 = load i64, i64* %82, align 8, !dbg !19, !tbaa !79
  %84 = trunc i64 %83 to i32, !dbg !19
  %85 = icmp eq i32 %84, 16, !dbg !19
  br i1 %85, label %assert_end44, label %assert_fail43, !dbg !19, !prof !23

assert_fail43:                                    ; preds = %assert_end42
  %86 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %86(i8* getelementptr inbounds ([157 x i8], [157 x i8]* @.str.16, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end44:                                     ; preds = %assert_end42
  %87 = icmp eq i64* %gemm.data.strides, null, !dbg !19
  br i1 %87, label %if_end, label %if_then, !dbg !19, !prof !27

if_then:                                          ; preds = %assert_end44
  %88 = load i64, i64* %gemm.data.strides, align 8, !dbg !19, !tbaa !81
  %89 = trunc i64 %88 to i32, !dbg !19
  %90 = icmp eq i32 %89, 64, !dbg !19
  %91 = getelementptr inbounds i64, i64* %gemm.data.strides, i64 1, !dbg !19
  %92 = load i64, i64* %91, align 8, !dbg !19, !tbaa !91
  %93 = trunc i64 %92 to i32, !dbg !19
  %94 = icmp eq i32 %93, 16, !dbg !19
  %95 = getelementptr inbounds i64, i64* %gemm.data.strides, i64 3, !dbg !19
  %96 = load i64, i64* %95, align 8, !dbg !19, !tbaa !93
  %97 = trunc i64 %96 to i32, !dbg !19
  %98 = icmp eq i32 %97, 1, !dbg !19
  %99 = and i1 %94, %98, !dbg !19
  %100 = and i1 %90, %99, !dbg !19
  br i1 %100, label %if_end, label %assert_fail45, !dbg !19, !prof !23

if_end:                                           ; preds = %assert_end44, %if_then
  %101 = getelementptr inbounds i8, i8* %data, i64 40, !dbg !19
  %102 = bitcast i8* %101 to i64*, !dbg !19
  %103 = load i64, i64* %102, align 8, !dbg !19
  %104 = icmp eq i64 %103, 0, !dbg !19
  br i1 %104, label %assert_end48, label %assert_fail47, !dbg !19, !prof !23

assert_fail45:                                    ; preds = %if_then
  %105 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %105(i8* getelementptr inbounds ([201 x i8], [201 x i8]* @.str.17, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_fail47:                                    ; preds = %if_end
  %106 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %106(i8* getelementptr inbounds ([184 x i8], [184 x i8]* @.str.18, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end48:                                     ; preds = %if_end
  %107 = getelementptr inbounds i8, i8* %data, i64 8, !dbg !19
  %108 = bitcast i8* %107 to i32*, !dbg !19
  %109 = load i32, i32* %108, align 4, !dbg !19
  %110 = icmp eq i32 %109, 12, !dbg !19
  br i1 %110, label %assert_end50, label %assert_fail49, !dbg !19, !prof !23

assert_fail49:                                    ; preds = %assert_end48
  %111 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %111(i8* getelementptr inbounds ([166 x i8], [166 x i8]* @.str.19, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end50:                                     ; preds = %assert_end48
  %112 = icmp eq i16* %data_void_ptr108, null, !dbg !19
  br i1 %112, label %assert_fail51, label %assert_end52, !dbg !19, !prof !27

assert_fail51:                                    ; preds = %assert_end50
  %113 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %113(i8* getelementptr inbounds ([88 x i8], [88 x i8]* @.str.20, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end52:                                     ; preds = %assert_end50
  %114 = getelementptr inbounds i8, i8* %weight, i64 22, !dbg !19
  %115 = bitcast i8* %114 to i16*, !dbg !19
  %116 = load i16, i16* %115, align 2, !dbg !19
  %117 = icmp eq i16 %116, 1, !dbg !19
  %118 = getelementptr inbounds i8, i8* %weight, i64 21, !dbg !19
  %119 = load i8, i8* %118, align 1, !dbg !19
  %120 = icmp eq i8 %119, 16, !dbg !19
  %121 = getelementptr inbounds i8, i8* %weight, i64 20, !dbg !19
  %122 = load i8, i8* %121, align 1, !dbg !19
  %123 = icmp eq i8 %122, 0, !dbg !19
  %124 = and i1 %120, %123, !dbg !19
  %125 = and i1 %117, %124, !dbg !19
  br i1 %125, label %assert_end54, label %assert_fail53, !dbg !19, !prof !23

assert_fail53:                                    ; preds = %assert_end52
  %126 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %126(i8* getelementptr inbounds ([229 x i8], [229 x i8]* @.str.21, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end54:                                     ; preds = %assert_end52
  %127 = load i64, i64* %gemm.weight.shape, align 8, !dbg !19, !tbaa !96
  %128 = trunc i64 %127 to i32, !dbg !19
  %129 = icmp eq i32 %128, 4, !dbg !19
  br i1 %129, label %assert_end56, label %assert_fail55, !dbg !19, !prof !23

assert_fail55:                                    ; preds = %assert_end54
  %130 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %130(i8* getelementptr inbounds ([161 x i8], [161 x i8]* @.str.22, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end56:                                     ; preds = %assert_end54
  %131 = getelementptr inbounds i64, i64* %gemm.weight.shape, i64 1, !dbg !19
  %132 = load i64, i64* %131, align 8, !dbg !19, !tbaa !106
  %133 = trunc i64 %132 to i32, !dbg !19
  %134 = icmp eq i32 %133, 4, !dbg !19
  br i1 %134, label %assert_end58, label %assert_fail57, !dbg !19, !prof !23

assert_fail57:                                    ; preds = %assert_end56
  %135 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %135(i8* getelementptr inbounds ([161 x i8], [161 x i8]* @.str.23, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end58:                                     ; preds = %assert_end56
  %136 = getelementptr inbounds i64, i64* %gemm.weight.shape, i64 2, !dbg !19
  %137 = load i64, i64* %136, align 8, !dbg !19, !tbaa !108
  %138 = trunc i64 %137 to i32, !dbg !19
  %139 = icmp eq i32 %138, 16, !dbg !19
  br i1 %139, label %assert_end60, label %assert_fail59, !dbg !19, !prof !23

assert_fail59:                                    ; preds = %assert_end58
  %140 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %140(i8* getelementptr inbounds ([163 x i8], [163 x i8]* @.str.24, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end60:                                     ; preds = %assert_end58
  %141 = getelementptr inbounds i64, i64* %gemm.weight.shape, i64 3, !dbg !19
  %142 = load i64, i64* %141, align 8, !dbg !19, !tbaa !111
  %143 = trunc i64 %142 to i32, !dbg !19
  %144 = icmp eq i32 %143, 16, !dbg !19
  br i1 %144, label %assert_end62, label %assert_fail61, !dbg !19, !prof !23

assert_fail61:                                    ; preds = %assert_end60
  %145 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %145(i8* getelementptr inbounds ([163 x i8], [163 x i8]* @.str.25, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end62:                                     ; preds = %assert_end60
  %146 = icmp eq i64* %gemm.weight.strides, null, !dbg !19
  br i1 %146, label %if_end64, label %if_then63, !dbg !19, !prof !27

if_then63:                                        ; preds = %assert_end62
  %147 = bitcast i64* %gemm.weight.strides to <4 x i64>*, !dbg !19
  %148 = load <4 x i64>, <4 x i64>* %147, align 8, !dbg !19, !tbaa !113
  %149 = trunc <4 x i64> %148 to <4 x i32>, !dbg !19
  %150 = icmp eq <4 x i32> %149, <i32 1024, i32 256, i32 16, i32 1>, !dbg !19
  %rdx.shuf = shufflevector <4 x i1> %150, <4 x i1> undef, <4 x i32> <i32 2, i32 3, i32 undef, i32 undef>, !dbg !19
  %bin.rdx = and <4 x i1> %150, %rdx.shuf, !dbg !19
  %rdx.shuf111 = shufflevector <4 x i1> %bin.rdx, <4 x i1> undef, <4 x i32> <i32 1, i32 undef, i32 undef, i32 undef>, !dbg !19
  %bin.rdx112 = and <4 x i1> %bin.rdx, %rdx.shuf111, !dbg !19
  %151 = extractelement <4 x i1> %bin.rdx112, i32 0, !dbg !19
  br i1 %151, label %if_end64, label %assert_fail65, !dbg !19, !prof !23

if_end64:                                         ; preds = %assert_end62, %if_then63
  %152 = getelementptr inbounds i8, i8* %weight, i64 40, !dbg !19
  %153 = bitcast i8* %152 to i64*, !dbg !19
  %154 = load i64, i64* %153, align 8, !dbg !19
  %155 = icmp eq i64 %154, 0, !dbg !19
  br i1 %155, label %assert_end68, label %assert_fail67, !dbg !19, !prof !23

assert_fail65:                                    ; preds = %if_then63
  %156 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %156(i8* getelementptr inbounds ([262 x i8], [262 x i8]* @.str.26, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_fail67:                                    ; preds = %if_end64
  %157 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %157(i8* getelementptr inbounds ([190 x i8], [190 x i8]* @.str.27, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end68:                                     ; preds = %if_end64
  %158 = getelementptr inbounds i8, i8* %weight, i64 8, !dbg !19
  %159 = bitcast i8* %158 to i32*, !dbg !19
  %160 = load i32, i32* %159, align 4, !dbg !19
  %161 = icmp eq i32 %160, 12, !dbg !19
  br i1 %161, label %assert_end70, label %assert_fail69, !dbg !19, !prof !23

assert_fail69:                                    ; preds = %assert_end68
  %162 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %162(i8* getelementptr inbounds ([172 x i8], [172 x i8]* @.str.28, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end70:                                     ; preds = %assert_end68
  %163 = getelementptr inbounds i8, i8* %weight, i64 12, !dbg !19
  %164 = bitcast i8* %163 to i32*, !dbg !19
  %165 = load i32, i32* %164, align 4, !dbg !19
  %166 = icmp eq i32 %dev_id, %165, !dbg !19
  br i1 %166, label %assert_end72, label %assert_fail71, !dbg !19, !prof !23

assert_fail71:                                    ; preds = %assert_end70
  %167 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %167(i8* getelementptr inbounds ([176 x i8], [176 x i8]* @.str.29, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end72:                                     ; preds = %assert_end70
  %168 = icmp eq i16* %weight_void_ptr109, null, !dbg !19
  br i1 %168, label %assert_fail73, label %assert_end74, !dbg !19, !prof !27

assert_fail73:                                    ; preds = %assert_end72
  %169 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %169(i8* getelementptr inbounds ([92 x i8], [92 x i8]* @.str.30, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end74:                                     ; preds = %assert_end72
  %170 = getelementptr inbounds i8, i8* %res, i64 22, !dbg !19
  %171 = bitcast i8* %170 to i16*, !dbg !19
  %172 = load i16, i16* %171, align 2, !dbg !19
  %173 = icmp eq i16 %172, 1, !dbg !19
  %174 = getelementptr inbounds i8, i8* %res, i64 21, !dbg !19
  %175 = load i8, i8* %174, align 1, !dbg !19
  %176 = icmp eq i8 %175, 16, !dbg !19
  %177 = getelementptr inbounds i8, i8* %res, i64 20, !dbg !19
  %178 = load i8, i8* %177, align 1, !dbg !19
  %179 = icmp eq i8 %178, 0, !dbg !19
  %180 = and i1 %176, %179, !dbg !19
  %181 = and i1 %173, %180, !dbg !19
  br i1 %181, label %assert_end76, label %assert_fail75, !dbg !19, !prof !23

assert_fail75:                                    ; preds = %assert_end74
  %182 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %182(i8* getelementptr inbounds ([217 x i8], [217 x i8]* @.str.31, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end76:                                     ; preds = %assert_end74
  %183 = load i64, i64* %gemm.res.shape, align 8, !dbg !19, !tbaa !121
  %184 = trunc i64 %183 to i32, !dbg !19
  %185 = icmp eq i32 %184, 64, !dbg !19
  br i1 %185, label %assert_end78, label %assert_fail77, !dbg !19, !prof !23

assert_fail77:                                    ; preds = %assert_end76
  %186 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %186(i8* getelementptr inbounds ([154 x i8], [154 x i8]* @.str.32, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end78:                                     ; preds = %assert_end76
  %187 = getelementptr inbounds i64, i64* %gemm.res.shape, i64 1, !dbg !19
  %188 = load i64, i64* %187, align 8, !dbg !19, !tbaa !131
  %189 = trunc i64 %188 to i32, !dbg !19
  %190 = icmp eq i32 %189, 4, !dbg !19
  br i1 %190, label %assert_end80, label %assert_fail79, !dbg !19, !prof !23

assert_fail79:                                    ; preds = %assert_end78
  %191 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %191(i8* getelementptr inbounds ([152 x i8], [152 x i8]* @.str.33, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end80:                                     ; preds = %assert_end78
  %192 = getelementptr inbounds i64, i64* %gemm.res.shape, i64 2, !dbg !19
  %193 = load i64, i64* %192, align 8, !dbg !19, !tbaa !133
  %194 = trunc i64 %193 to i32, !dbg !19
  %195 = icmp eq i32 %194, 1, !dbg !19
  br i1 %195, label %assert_end82, label %assert_fail81, !dbg !19, !prof !23

assert_fail81:                                    ; preds = %assert_end80
  %196 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %196(i8* getelementptr inbounds ([152 x i8], [152 x i8]* @.str.34, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end82:                                     ; preds = %assert_end80
  %197 = getelementptr inbounds i64, i64* %gemm.res.shape, i64 3, !dbg !19
  %198 = load i64, i64* %197, align 8, !dbg !19, !tbaa !136
  %199 = trunc i64 %198 to i32, !dbg !19
  %200 = icmp eq i32 %199, 16, !dbg !19
  br i1 %200, label %assert_end84, label %assert_fail83, !dbg !19, !prof !23

assert_fail83:                                    ; preds = %assert_end82
  %201 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %201(i8* getelementptr inbounds ([154 x i8], [154 x i8]* @.str.35, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end84:                                     ; preds = %assert_end82
  %202 = icmp eq i64* %gemm.res.strides, null, !dbg !19
  br i1 %202, label %if_end86, label %if_then85, !dbg !19, !prof !27

if_then85:                                        ; preds = %assert_end84
  %203 = load i64, i64* %gemm.res.strides, align 8, !dbg !19, !tbaa !138
  %204 = trunc i64 %203 to i32, !dbg !19
  %205 = icmp eq i32 %204, 64, !dbg !19
  %206 = getelementptr inbounds i64, i64* %gemm.res.strides, i64 1, !dbg !19
  %207 = load i64, i64* %206, align 8, !dbg !19, !tbaa !148
  %208 = trunc i64 %207 to i32, !dbg !19
  %209 = icmp eq i32 %208, 16, !dbg !19
  %210 = getelementptr inbounds i64, i64* %gemm.res.strides, i64 3, !dbg !19
  %211 = load i64, i64* %210, align 8, !dbg !19, !tbaa !150
  %212 = trunc i64 %211 to i32, !dbg !19
  %213 = icmp eq i32 %212, 1, !dbg !19
  %214 = and i1 %209, %213, !dbg !19
  %215 = and i1 %205, %214, !dbg !19
  br i1 %215, label %if_end86, label %assert_fail87, !dbg !19, !prof !23

if_end86:                                         ; preds = %assert_end84, %if_then85
  %216 = getelementptr inbounds i8, i8* %res, i64 40, !dbg !19
  %217 = bitcast i8* %216 to i64*, !dbg !19
  %218 = load i64, i64* %217, align 8, !dbg !19
  %219 = icmp eq i64 %218, 0, !dbg !19
  br i1 %219, label %assert_end90, label %assert_fail89, !dbg !19, !prof !23

assert_fail87:                                    ; preds = %if_then85
  %220 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %220(i8* getelementptr inbounds ([197 x i8], [197 x i8]* @.str.36, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_fail89:                                    ; preds = %if_end86
  %221 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %221(i8* getelementptr inbounds ([181 x i8], [181 x i8]* @.str.37, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end90:                                     ; preds = %if_end86
  %222 = getelementptr inbounds i8, i8* %res, i64 8, !dbg !19
  %223 = bitcast i8* %222 to i32*, !dbg !19
  %224 = load i32, i32* %223, align 4, !dbg !19
  %225 = icmp eq i32 %224, 12, !dbg !19
  br i1 %225, label %assert_end92, label %assert_fail91, !dbg !19, !prof !23

assert_fail91:                                    ; preds = %assert_end90
  %226 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %226(i8* getelementptr inbounds ([163 x i8], [163 x i8]* @.str.38, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end92:                                     ; preds = %assert_end90
  %227 = getelementptr inbounds i8, i8* %res, i64 12, !dbg !19
  %228 = bitcast i8* %227 to i32*, !dbg !19
  %229 = load i32, i32* %228, align 4, !dbg !19
  %230 = icmp eq i32 %dev_id, %229, !dbg !19
  br i1 %230, label %assert_end94, label %assert_fail93, !dbg !19, !prof !23

assert_fail93:                                    ; preds = %assert_end92
  %231 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %231(i8* getelementptr inbounds ([167 x i8], [167 x i8]* @.str.39, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end94:                                     ; preds = %assert_end92
  %232 = icmp eq i16* %res_void_ptr110, null, !dbg !19
  br i1 %232, label %assert_fail95, label %assert_end96, !dbg !19, !prof !27

assert_fail95:                                    ; preds = %assert_end94
  %233 = load void (i8*)*, void (i8*)** @__TVMAPISetLastError, align 8, !dbg !19, !tbaa !24
  tail call void %233(i8* getelementptr inbounds ([86 x i8], [86 x i8]* @.str.40, i64 0, i64 0)), !dbg !19
  ret i32 -1, !dbg !19

assert_end96:                                     ; preds = %assert_end94
  %234 = bitcast [3 x %0]* %stack_value_void_ptr106 to i64*, !dbg !19
  store i64 12, i64* %234, align 8, !dbg !19
  store i32 0, i32* %stack_tcode107.sub, align 4, !dbg !19, !tbaa !153
  %235 = sext i32 %dev_id to i64, !dbg !19
  %236 = getelementptr inbounds [3 x %0], [3 x %0]* %stack_value_void_ptr106, i64 0, i64 1, !dbg !19
  %237 = bitcast %0* %236 to i64*, !dbg !19
  store i64 %235, i64* %237, align 8, !dbg !19
  %238 = getelementptr inbounds [3 x i32], [3 x i32]* %stack_tcode107, i64 0, i64 1, !dbg !19
  store i32 0, i32* %238, align 4, !dbg !19, !tbaa !164
  %239 = getelementptr inbounds [3 x %0], [3 x %0]* %stack_value_void_ptr106, i64 0, i64 2, !dbg !19
  %240 = getelementptr inbounds [3 x i32], [3 x i32]* %stack_tcode107, i64 0, i64 2, !dbg !19
  %241 = load i32 (i8*, %0*, i32*, i32, %0*, i32*)*, i32 (i8*, %0*, i32*, i32, %0*, i32*)** @__TVMFuncCall, align 8, !dbg !19, !tbaa !24
  %242 = load i8*, i8** @.tvm_func.__tvm_set_device, align 8, !dbg !19
  %243 = icmp eq i8* %242, null, !dbg !19
  br i1 %243, label %handle_init, label %handle_init_end, !dbg !19, !prof !27

handle_init:                                      ; preds = %assert_end96
  %244 = load i8*, i8** @__tvm_module_ctx, align 8, !dbg !19, !tbaa !24
  %245 = load i32 (i8*, i8*, i8**)*, i32 (i8*, i8*, i8**)** @__TVMBackendGetFuncFromEnv, align 8, !dbg !19, !tbaa !24
  %246 = call i32 %245(i8* %244, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @.str.41, i64 0, i64 0), i8** nonnull %0), !dbg !19
  %247 = icmp eq i32 %246, 0, !dbg !19
  br i1 %247, label %call_end, label %call_fail, !dbg !19, !prof !23

handle_init_end:                                  ; preds = %assert_end96, %call_end
  %248 = phi i8* [ %242, %assert_end96 ], [ %251, %call_end ], !dbg !19
  %249 = call i32 %241(i8* %248, %0* nonnull %stack_value_void_ptr106.sub, i32* nonnull %stack_tcode107.sub, i32 2, %0* nonnull %239, i32* nonnull %240), !dbg !19
  %250 = icmp eq i32 %249, 0, !dbg !19
  br i1 %250, label %call_end98, label %call_fail, !dbg !19, !prof !23

call_fail:                                        ; preds = %call_end98, %handle_init_end, %handle_init
  %merge = phi i32 [ %246, %handle_init ], [ %249, %handle_init_end ], [ %252, %call_end98 ]
  ret i32 %merge, !dbg !19

call_end:                                         ; preds = %handle_init
  %251 = load i8*, i8** %0, align 8, !dbg !19
  store i8* %251, i8** @.tvm_func.__tvm_set_device, align 8, !dbg !19
  br label %handle_init_end, !dbg !19

call_end98:                                       ; preds = %handle_init_end
  %252 = call fastcc i32 @gemm_compute_(i8* %ctx_cache_, i16* nonnull %data_void_ptr108, i16* nonnull %weight_void_ptr109, i16* nonnull %res_void_ptr110), !dbg !19
  br label %call_fail
}

declare i8* @VTATLSCommandHandle() local_unnamed_addr

; Function Attrs: nounwind readnone speculatable willreturn
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

; Function Attrs: nounwind willreturn
declare void @llvm.assume(i1) #2

; Function Attrs: noinline
define internal fastcc i32 @gemm_compute_(i8* noalias %ctx_cache_, i16* noalias align 64 %data, i16* noalias align 64 %weight, i16* noalias align 64 %res) unnamed_addr #3 !dbg !166 {
entry:
  call void @llvm.dbg.value(metadata i8* %ctx_cache_, metadata !170, metadata !DIExpression()), !dbg !174
  call void @llvm.dbg.value(metadata i16* %data, metadata !171, metadata !DIExpression()), !dbg !174
  call void @llvm.dbg.value(metadata i16* %weight, metadata !172, metadata !DIExpression()), !dbg !174
  call void @llvm.dbg.value(metadata i16* %res, metadata !173, metadata !DIExpression()), !dbg !174
  %0 = tail call i32 @VTAPushGEMMOp(i8** nonnull @__tvm_static_handle, i32 (i8*)* nonnull @__tvm_static_init_lambda, i8* null, i32 0), !dbg !174
  %1 = icmp eq i32 %0, 0, !dbg !174
  br i1 %1, label %call_end, label %call_fail, !dbg !174, !prof !23

call_fail:                                        ; preds = %call_end6, %call_end4, %call_end2, %call_end, %entry
  %merge = phi i32 [ %0, %entry ], [ %8, %call_end ], [ %10, %call_end2 ], [ %12, %call_end4 ], [ %14, %call_end6 ]
  ret i32 %merge, !dbg !174

call_end:                                         ; preds = %entry
  %2 = tail call i32 @VTADepPush(i8* %ctx_cache_, i32 2, i32 1), !dbg !174
  %3 = tail call i32 @VTADepPop(i8* %ctx_cache_, i32 2, i32 1), !dbg !174
  %4 = tail call i32 @VTALoadBuffer2D(i8* %ctx_cache_, i16* %data, i32 0, i32 256, i32 1, i32 256, i32 0, i32 0, i32 0, i32 0, i32 0, i32 2), !dbg !174
  %5 = tail call i32 @VTALoadBuffer2D(i8* %ctx_cache_, i16* %weight, i32 0, i32 16, i32 1, i32 16, i32 0, i32 0, i32 0, i32 0, i32 0, i32 1), !dbg !174
  %6 = tail call i32 @VTADepPush(i8* %ctx_cache_, i32 1, i32 2), !dbg !174
  %7 = tail call i32 @VTADepPop(i8* %ctx_cache_, i32 1, i32 2), !dbg !174
  %8 = tail call i32 @VTAPushGEMMOp(i8** nonnull @__tvm_static_handle.43, i32 (i8*)* nonnull @__tvm_static_init_lambda.42, i8* null, i32 0), !dbg !174
  %9 = icmp eq i32 %8, 0, !dbg !174
  br i1 %9, label %call_end2, label %call_fail, !dbg !174, !prof !23

call_end2:                                        ; preds = %call_end
  %10 = tail call i32 @VTAPushALUOp(i8** nonnull @__tvm_static_handle.45, i32 (i8*)* nonnull @__tvm_static_init_lambda.44, i8* null, i32 0), !dbg !174
  %11 = icmp eq i32 %10, 0, !dbg !174
  br i1 %11, label %call_end4, label %call_fail, !dbg !174, !prof !23

call_end4:                                        ; preds = %call_end2
  %12 = tail call i32 @VTAPushALUOp(i8** nonnull @__tvm_static_handle.47, i32 (i8*)* nonnull @__tvm_static_init_lambda.46, i8* null, i32 0), !dbg !174
  %13 = icmp eq i32 %12, 0, !dbg !174
  br i1 %13, label %call_end6, label %call_fail, !dbg !174, !prof !23

call_end6:                                        ; preds = %call_end4
  %14 = tail call i32 @VTAPushALUOp(i8** nonnull @__tvm_static_handle.49, i32 (i8*)* nonnull @__tvm_static_init_lambda.48, i8* null, i32 0), !dbg !174
  %15 = icmp eq i32 %14, 0, !dbg !174
  br i1 %15, label %call_end8, label %call_fail, !dbg !174, !prof !23

call_end8:                                        ; preds = %call_end6
  %16 = tail call i32 @VTADepPush(i8* %ctx_cache_, i32 2, i32 3), !dbg !174
  %17 = tail call i32 @VTADepPop(i8* %ctx_cache_, i32 2, i32 3), !dbg !174
  %18 = tail call i32 @VTAStoreBuffer2D(i8* %ctx_cache_, i32 0, i32 4, i16* %res, i32 0, i32 256, i32 1, i32 256), !dbg !174
  %19 = tail call i32 @VTASynchronize(i8* %ctx_cache_, i32 -2147483648), !dbg !174
  ret i32 0, !dbg !174
}

define private i32 @__tvm_static_init_lambda(i8* nocapture readnone %0) #0 {
entry:
  %1 = tail call i32 @VTAUopLoopBegin(i32 64, i32 4, i32 0, i32 0), !dbg !174
  %2 = tail call i32 @VTAUopLoopBegin(i32 4, i32 1, i32 0, i32 0), !dbg !174
  %3 = tail call i32 @VTAUopPush(i32 0, i32 1, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0), !dbg !174
  %4 = tail call i32 @VTAUopLoopEnd(), !dbg !174
  %5 = tail call i32 @VTAUopLoopEnd(), !dbg !174
  ret i32 0, !dbg !174
}

declare i32 @VTAPushGEMMOp(i8**, i32 (i8*)*, i8*, i32) local_unnamed_addr

declare i32 @VTAUopLoopBegin(i32, i32, i32, i32) local_unnamed_addr

declare i32 @VTAUopPush(i32, i32, i32, i32, i32, i32, i32, i32) local_unnamed_addr

declare i32 @VTAUopLoopEnd() local_unnamed_addr

declare i32 @VTADepPush(i8*, i32, i32) local_unnamed_addr

declare i32 @VTADepPop(i8*, i32, i32) local_unnamed_addr

declare i32 @VTALoadBuffer2D(i8*, i16*, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32) local_unnamed_addr

define private i32 @__tvm_static_init_lambda.42(i8* nocapture readnone %0) #0 {
entry:
  %1 = tail call i32 @VTAUopLoopBegin(i32 4, i32 0, i32 1, i32 1), !dbg !174
  %2 = tail call i32 @VTAUopLoopBegin(i32 64, i32 4, i32 4, i32 0), !dbg !174
  call void @llvm.dbg.declare(metadata i32 0, metadata !175, metadata !DIExpression()), !dbg !174
  call void @llvm.dbg.declare(metadata i32 0, metadata !175, metadata !DIExpression()), !dbg !174
  %3 = tail call i32 @VTAUopPush(i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0), !dbg !174
  call void @llvm.dbg.declare(metadata i32 1, metadata !175, metadata !DIExpression()), !dbg !174
  call void @llvm.dbg.declare(metadata i32 1, metadata !175, metadata !DIExpression()), !dbg !174
  %4 = tail call i32 @VTAUopPush(i32 0, i32 0, i32 1, i32 0, i32 4, i32 0, i32 0, i32 0), !dbg !174
  call void @llvm.dbg.declare(metadata i32 2, metadata !175, metadata !DIExpression()), !dbg !174
  call void @llvm.dbg.declare(metadata i32 2, metadata !175, metadata !DIExpression()), !dbg !174
  %5 = tail call i32 @VTAUopPush(i32 0, i32 0, i32 2, i32 0, i32 8, i32 0, i32 0, i32 0), !dbg !174
  call void @llvm.dbg.declare(metadata i32 3, metadata !175, metadata !DIExpression()), !dbg !174
  call void @llvm.dbg.declare(metadata i32 3, metadata !175, metadata !DIExpression()), !dbg !174
  %6 = tail call i32 @VTAUopPush(i32 0, i32 0, i32 3, i32 0, i32 12, i32 0, i32 0, i32 0), !dbg !174
  call void @llvm.dbg.declare(metadata i32 4, metadata !175, metadata !DIExpression()), !dbg !174
  %7 = tail call i32 @VTAUopLoopEnd(), !dbg !174
  %8 = tail call i32 @VTAUopLoopEnd(), !dbg !174
  ret i32 0, !dbg !174
}

define private i32 @__tvm_static_init_lambda.44(i8* nocapture readnone %0) #0 {
entry:
  %1 = tail call i32 @VTAUopLoopBegin(i32 256, i32 1, i32 1, i32 0), !dbg !174
  %2 = tail call i32 bitcast (i32 (i32, i32, i32, i32, i32, i32, i32, i32)* @VTAUopPush to i32 (i32, i32, i32, i32, i32, i32, i32, i64)*)(i32 1, i32 0, i32 0, i32 0, i32 0, i32 3, i32 1, i64 16), !dbg !174
  %3 = tail call i32 @VTAUopLoopEnd(), !dbg !174
  ret i32 0, !dbg !174
}

declare i32 @VTAPushALUOp(i8**, i32 (i8*)*, i8*, i32) local_unnamed_addr

define private i32 @__tvm_static_init_lambda.46(i8* nocapture readnone %0) #0 {
entry:
  %1 = tail call i32 @VTAUopLoopBegin(i32 256, i32 1, i32 1, i32 0), !dbg !174
  %2 = tail call i32 bitcast (i32 (i32, i32, i32, i32, i32, i32, i32, i32)* @VTAUopPush to i32 (i32, i32, i32, i32, i32, i32, i32, i64)*)(i32 1, i32 0, i32 0, i32 0, i32 0, i32 1, i32 1, i64 0), !dbg !174
  %3 = tail call i32 @VTAUopLoopEnd(), !dbg !174
  ret i32 0, !dbg !174
}

define private i32 @__tvm_static_init_lambda.48(i8* nocapture readnone %0) #0 {
entry:
  %1 = tail call i32 @VTAUopLoopBegin(i32 256, i32 1, i32 1, i32 0), !dbg !174
  %2 = tail call i32 bitcast (i32 (i32, i32, i32, i32, i32, i32, i32, i32)* @VTAUopPush to i32 (i32, i32, i32, i32, i32, i32, i32, i64)*)(i32 1, i32 0, i32 0, i32 0, i32 0, i32 0, i32 1, i64 32767), !dbg !174
  %3 = tail call i32 @VTAUopLoopEnd(), !dbg !174
  ret i32 0, !dbg !174
}

declare i32 @VTAStoreBuffer2D(i8*, i32, i32, i16*, i32, i32, i32, i32) local_unnamed_addr

declare i32 @VTASynchronize(i8*, i32) local_unnamed_addr

; Function Attrs: nounwind readnone
define weak dso_local i16 @__truncsfhf2(float %a0) local_unnamed_addr #4 section ".text.tvm.fp16.conv" {
b0:
  %v0 = bitcast float %a0 to i32
  %v1 = and i32 %v0, 2147483647
  %v2 = add nsw i32 %v1, -947912704
  %v3 = add nsw i32 %v1, -1199570944
  %v4 = icmp ult i32 %v2, %v3
  br i1 %v4, label %b1, label %b5

b1:                                               ; preds = %b0
  %v5 = lshr i32 %v0, 13
  %v6 = and i32 %v5, 65535
  %v7 = add nuw nsw i32 %v6, -114688
  %v8 = and i32 %v0, 8191
  %v9 = icmp ugt i32 %v8, 4096
  br i1 %v9, label %b2, label %b3

b2:                                               ; preds = %b1
  %v10 = add nuw nsw i32 %v6, -114687
  br label %b13

b3:                                               ; preds = %b1
  %v11 = icmp eq i32 %v8, 4096
  br i1 %v11, label %b4, label %b13

b4:                                               ; preds = %b3
  %v12 = and i32 %v7, 65535
  %v13 = and i32 %v5, 1
  %v14 = add nuw nsw i32 %v12, %v13
  br label %b13

b5:                                               ; preds = %b0
  %v15 = icmp ugt i32 %v1, 2139095040
  br i1 %v15, label %b6, label %b7

b6:                                               ; preds = %b5
  %v16 = lshr i32 %v0, 13
  %v17 = and i32 %v16, 511
  %v18 = or i32 %v17, 32256
  br label %b13

b7:                                               ; preds = %b5
  %v19 = icmp ugt i32 %v1, 1199570943
  br i1 %v19, label %b13, label %b8

b8:                                               ; preds = %b7
  %v20 = icmp ult i32 %v1, 754974720
  br i1 %v20, label %b13, label %b9

b9:                                               ; preds = %b8
  %v21 = lshr i32 %v1, 23
  %v22 = sub nsw i32 113, %v21
  %v23 = and i32 %v0, 8388607
  %v24 = or i32 %v23, 8388608
  %v25 = add nsw i32 %v21, -81
  %v26 = shl i32 %v24, %v25
  %v27 = icmp ne i32 %v26, 0
  %v28 = lshr i32 %v24, %v22
  %v29 = zext i1 %v27 to i32
  %v30 = lshr i32 %v28, 13
  %v31 = and i32 %v28, 8191
  %v32 = or i32 %v31, %v29
  %v33 = icmp ugt i32 %v32, 4096
  br i1 %v33, label %b10, label %b11

b10:                                              ; preds = %b9
  %v34 = add nuw nsw i32 %v30, 1
  br label %b13

b11:                                              ; preds = %b9
  %v35 = icmp eq i32 %v32, 4096
  br i1 %v35, label %b12, label %b13

b12:                                              ; preds = %b11
  %v36 = and i32 %v30, 1
  %v37 = add nuw nsw i32 %v36, %v30
  br label %b13

b13:                                              ; preds = %b12, %b11, %b10, %b8, %b7, %b6, %b4, %b3, %b2
  %v38 = phi i32 [ %v18, %b6 ], [ %v10, %b2 ], [ %v14, %b4 ], [ %v7, %b3 ], [ 31744, %b7 ], [ 0, %b8 ], [ %v34, %b10 ], [ %v37, %b12 ], [ %v30, %b11 ]
  %v39 = lshr i32 %v0, 16
  %v40 = and i32 %v39, 32768
  %v41 = or i32 %v38, %v40
  %vlast = trunc i32 %v41 to i16
  ret i16 %vlast
}

; Function Attrs: nounwind readnone
define weak dso_local float @__extendhfsf2(i16 %a0) local_unnamed_addr #4 section ".text.tvm.fp16.conv" {
b0:
  %v1 = and i16 %a0, 32767
  %v2 = zext i16 %v1 to i32
  %v3 = add nsw i16 %v1, -1024
  %v4 = icmp ult i16 %v3, 30720
  br i1 %v4, label %b1, label %b2

b1:                                               ; preds = %b0
  %v5 = shl nuw nsw i32 %v2, 13
  %v6 = add nuw nsw i32 %v5, 939524096
  br label %b6

b2:                                               ; preds = %b0
  %v7 = icmp ugt i16 %v1, 31743
  br i1 %v7, label %b3, label %b4

b3:                                               ; preds = %b2
  %v8 = shl nuw nsw i32 %v2, 13
  %v9 = or i32 %v8, 2139095040
  br label %b6

b4:                                               ; preds = %b2
  %v10 = icmp eq i16 %v1, 0
  br i1 %v10, label %b6, label %b5

b5:                                               ; preds = %b4
  %v11 = icmp ult i16 %v1, 256
  %v12 = lshr i32 %v2, 8
  %v13 = select i1 %v11, i32 %v2, i32 %v12
  %v14 = select i1 %v11, i32 32, i32 24
  %v15 = icmp ult i32 %v13, 16
  %v16 = lshr i32 %v13, 4
  %v17 = add nsw i32 %v14, -4
  %v18 = select i1 %v15, i32 %v13, i32 %v16
  %v19 = select i1 %v15, i32 %v14, i32 %v17
  %v20 = icmp ult i32 %v18, 4
  %v21 = lshr i32 %v18, 2
  %v22 = add nsw i32 %v19, -2
  %v23 = select i1 %v20, i32 %v18, i32 %v21
  %v24 = select i1 %v20, i32 %v19, i32 %v22
  %v25 = icmp ult i32 %v23, 2
  %v26 = sub nsw i32 0, %v23
  %v27 = select i1 %v25, i32 %v26, i32 -2
  %v28 = add nsw i32 %v27, %v24
  %v29 = add nsw i32 %v28, -8
  %v30 = shl i32 %v2, %v29
  %v31 = xor i32 %v30, 8388608
  %v32 = shl i32 %v28, 23
  %v33 = sub i32 1124073472, %v32
  %v34 = or i32 %v31, %v33
  br label %b6

b6:                                               ; preds = %b5, %b4, %b3, %b1
  %v35 = phi i32 [ %v6, %b1 ], [ %v9, %b3 ], [ %v34, %b5 ], [ 0, %b4 ]
  %v36 = and i16 %a0, -32768
  %v37 = zext i16 %v36 to i32
  %v38 = shl nuw i32 %v37, 16
  %v39 = or i32 %v35, %v38
  %v40 = bitcast i32 %v39 to float
  ret float %v40
}

; Function Attrs: nounwind readnone speculatable willreturn
declare void @llvm.dbg.value(metadata, metadata, metadata) #1

attributes #0 = { "target-cpu"="generic" }
attributes #1 = { nounwind readnone speculatable willreturn }
attributes #2 = { nounwind willreturn }
attributes #3 = { noinline "target-cpu"="generic" }
attributes #4 = { nounwind readnone "target-cpu"="generic" "target-features" }

!llvm.dbg.cu = !{!0}
!llvm.module.flags = !{!3, !4, !5}

!0 = distinct !DICompileUnit(language: DW_LANG_C, file: !1, producer: "TVM", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, enums: !2)
!1 = !DIFile(filename: "IRModule.CodeGenLLVM", directory: ".")
!2 = !{}
!3 = !{i32 2, !"tvm_target", !"llvm -mtriple=x86_64-pc-linux-gnu"}
!4 = !{i32 4, !"Debug Info Version", i32 3}
!5 = !{i32 4, !"Dwarf Version", i32 4}
!6 = distinct !DISubprogram(name: "gemm", scope: !1, file: !1, type: !7, flags: DIFlagPrototyped, spFlags: DISPFlagLocalToUnit | DISPFlagDefinition | DISPFlagOptimized, unit: !0, retainedNodes: !12)
!7 = !DISubroutineType(types: !8)
!8 = !{!9, !10, !11, !9, !10, !11, !10}
!9 = !DIBasicType(name: "int32", size: 32, encoding: DW_ATE_signed)
!10 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: null)
!11 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !9)
!12 = !{!13, !14, !15, !16, !17, !18}
!13 = !DILocalVariable(name: "args", arg: 1, scope: !6, file: !1, type: !10)
!14 = !DILocalVariable(name: "arg_type_ids", arg: 2, scope: !6, file: !1, type: !11)
!15 = !DILocalVariable(name: "num_args", arg: 3, scope: !6, file: !1, type: !9)
!16 = !DILocalVariable(name: "out_ret_value", arg: 4, scope: !6, file: !1, type: !10)
!17 = !DILocalVariable(name: "out_ret_tcode", arg: 5, scope: !6, file: !1, type: !11)
!18 = !DILocalVariable(name: "resource_handle", arg: 6, scope: !6, file: !1, type: !10)
!19 = !DILocation(line: 0, scope: !6)
!20 = !DILocalVariable(name: "ctx_cache_", scope: !6, file: !1, type: !10)
!21 = !DILocalVariable(name: "stack_tcode", scope: !6, file: !1, type: !11)
!22 = !DILocalVariable(name: "stack_value", scope: !6, file: !1, type: !10)
!23 = !{!"branch_weights", i32 1048576, i32 1}
!24 = !{!25, !25, i64 0}
!25 = !{!"ctx_ptr", !26, i64 0}
!26 = !{!"tvm-tbaa"}
!27 = !{!"branch_weights", i32 1, i32 1048576}
!28 = !{!29, !29, i64 0}
!29 = !{!"0x3a8d450.w4.b0", !30, i64 0}
!30 = !{!"0x3a8d450.w8.b0", !31, i64 0}
!31 = !{!"0x3a8d450.w16.b0", !32, i64 0}
!32 = !{!"0x3a8d450.w32.b0", !33, i64 0}
!33 = !{!"0x3a8d450.w64.b0", !34, i64 0}
!34 = !{!"0x3a8d450.w128.b0", !35, i64 0}
!35 = !{!"0x3a8d450.w256.b0", !36, i64 0}
!36 = !{!"0x3a8d450.w512.b0", !37, i64 0}
!37 = !{!"0x3a8d450.w1024.b0", !38, i64 0}
!38 = !{!"0x3a8d450", !26, i64 0}
!39 = !DILocalVariable(name: "data.code", scope: !6, file: !1, type: !9)
!40 = !{!41, !41, i64 0}
!41 = !{!"0x3a8d450.w4.b4", !30, i64 0}
!42 = !DILocalVariable(name: "weight.code", scope: !6, file: !1, type: !9)
!43 = !{!44, !44, i64 0}
!44 = !{!"0x3a8d450.w4.b8", !45, i64 0}
!45 = !{!"0x3a8d450.w8.b8", !31, i64 0}
!46 = !DILocalVariable(name: "res.code", scope: !6, file: !1, type: !9)
!47 = !DILocalVariable(name: "data", scope: !6, file: !1, type: !10)
!48 = !DILocalVariable(name: "weight", scope: !6, file: !1, type: !10)
!49 = !DILocalVariable(name: "res", scope: !6, file: !1, type: !10)
!50 = !DILocalVariable(name: "gemm.data.shape", scope: !6, file: !1, type: !51)
!51 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !52)
!52 = !DIBasicType(name: "int64", size: 64, encoding: DW_ATE_signed)
!53 = !DILocalVariable(name: "gemm.data.strides", scope: !6, file: !1, type: !51)
!54 = !DILocalVariable(name: "dev_id", scope: !6, file: !1, type: !9)
!55 = !DILocalVariable(name: "data", scope: !6, file: !1, type: !56)
!56 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !57)
!57 = !DIBasicType(name: "int16", size: 16, encoding: DW_ATE_signed)
!58 = !DILocalVariable(name: "gemm.weight.shape", scope: !6, file: !1, type: !51)
!59 = !DILocalVariable(name: "gemm.weight.strides", scope: !6, file: !1, type: !51)
!60 = !DILocalVariable(name: "weight", scope: !6, file: !1, type: !56)
!61 = !DILocalVariable(name: "gemm.res.shape", scope: !6, file: !1, type: !51)
!62 = !DILocalVariable(name: "gemm.res.strides", scope: !6, file: !1, type: !51)
!63 = !DILocalVariable(name: "res", scope: !6, file: !1, type: !56)
!64 = !{!65, !65, i64 0}
!65 = !{!"0x3a833c0.w8.b0", !66, i64 0}
!66 = !{!"0x3a833c0.w16.b0", !67, i64 0}
!67 = !{!"0x3a833c0.w32.b0", !68, i64 0}
!68 = !{!"0x3a833c0.w64.b0", !69, i64 0}
!69 = !{!"0x3a833c0.w128.b0", !70, i64 0}
!70 = !{!"0x3a833c0.w256.b0", !71, i64 0}
!71 = !{!"0x3a833c0.w512.b0", !72, i64 0}
!72 = !{!"0x3a833c0.w1024.b0", !73, i64 0}
!73 = !{!"0x3a833c0", !26, i64 0}
!74 = !{!75, !75, i64 0}
!75 = !{!"0x3a833c0.w8.b8", !66, i64 0}
!76 = !{!77, !77, i64 0}
!77 = !{!"0x3a833c0.w8.b16", !78, i64 0}
!78 = !{!"0x3a833c0.w16.b16", !67, i64 0}
!79 = !{!80, !80, i64 0}
!80 = !{!"0x3a833c0.w8.b24", !78, i64 0}
!81 = !{!82, !82, i64 0}
!82 = !{!"0x3ac76b0.w8.b0", !83, i64 0}
!83 = !{!"0x3ac76b0.w16.b0", !84, i64 0}
!84 = !{!"0x3ac76b0.w32.b0", !85, i64 0}
!85 = !{!"0x3ac76b0.w64.b0", !86, i64 0}
!86 = !{!"0x3ac76b0.w128.b0", !87, i64 0}
!87 = !{!"0x3ac76b0.w256.b0", !88, i64 0}
!88 = !{!"0x3ac76b0.w512.b0", !89, i64 0}
!89 = !{!"0x3ac76b0.w1024.b0", !90, i64 0}
!90 = !{!"0x3ac76b0", !26, i64 0}
!91 = !{!92, !92, i64 0}
!92 = !{!"0x3ac76b0.w8.b8", !83, i64 0}
!93 = !{!94, !94, i64 0}
!94 = !{!"0x3ac76b0.w8.b24", !95, i64 0}
!95 = !{!"0x3ac76b0.w16.b16", !84, i64 0}
!96 = !{!97, !97, i64 0}
!97 = !{!"0x3ac7670.w8.b0", !98, i64 0}
!98 = !{!"0x3ac7670.w16.b0", !99, i64 0}
!99 = !{!"0x3ac7670.w32.b0", !100, i64 0}
!100 = !{!"0x3ac7670.w64.b0", !101, i64 0}
!101 = !{!"0x3ac7670.w128.b0", !102, i64 0}
!102 = !{!"0x3ac7670.w256.b0", !103, i64 0}
!103 = !{!"0x3ac7670.w512.b0", !104, i64 0}
!104 = !{!"0x3ac7670.w1024.b0", !105, i64 0}
!105 = !{!"0x3ac7670", !26, i64 0}
!106 = !{!107, !107, i64 0}
!107 = !{!"0x3ac7670.w8.b8", !98, i64 0}
!108 = !{!109, !109, i64 0}
!109 = !{!"0x3ac7670.w8.b16", !110, i64 0}
!110 = !{!"0x3ac7670.w16.b16", !99, i64 0}
!111 = !{!112, !112, i64 0}
!112 = !{!"0x3ac7670.w8.b24", !110, i64 0}
!113 = !{!114, !114, i64 0}
!114 = !{!"0x3acf080.w32.b0", !115, i64 0}
!115 = !{!"0x3acf080.w64.b0", !116, i64 0}
!116 = !{!"0x3acf080.w128.b0", !117, i64 0}
!117 = !{!"0x3acf080.w256.b0", !118, i64 0}
!118 = !{!"0x3acf080.w512.b0", !119, i64 0}
!119 = !{!"0x3acf080.w1024.b0", !120, i64 0}
!120 = !{!"0x3acf080", !26, i64 0}
!121 = !{!122, !122, i64 0}
!122 = !{!"0x3adf470.w8.b0", !123, i64 0}
!123 = !{!"0x3adf470.w16.b0", !124, i64 0}
!124 = !{!"0x3adf470.w32.b0", !125, i64 0}
!125 = !{!"0x3adf470.w64.b0", !126, i64 0}
!126 = !{!"0x3adf470.w128.b0", !127, i64 0}
!127 = !{!"0x3adf470.w256.b0", !128, i64 0}
!128 = !{!"0x3adf470.w512.b0", !129, i64 0}
!129 = !{!"0x3adf470.w1024.b0", !130, i64 0}
!130 = !{!"0x3adf470", !26, i64 0}
!131 = !{!132, !132, i64 0}
!132 = !{!"0x3adf470.w8.b8", !123, i64 0}
!133 = !{!134, !134, i64 0}
!134 = !{!"0x3adf470.w8.b16", !135, i64 0}
!135 = !{!"0x3adf470.w16.b16", !124, i64 0}
!136 = !{!137, !137, i64 0}
!137 = !{!"0x3adf470.w8.b24", !135, i64 0}
!138 = !{!139, !139, i64 0}
!139 = !{!"0x3adfee0.w8.b0", !140, i64 0}
!140 = !{!"0x3adfee0.w16.b0", !141, i64 0}
!141 = !{!"0x3adfee0.w32.b0", !142, i64 0}
!142 = !{!"0x3adfee0.w64.b0", !143, i64 0}
!143 = !{!"0x3adfee0.w128.b0", !144, i64 0}
!144 = !{!"0x3adfee0.w256.b0", !145, i64 0}
!145 = !{!"0x3adfee0.w512.b0", !146, i64 0}
!146 = !{!"0x3adfee0.w1024.b0", !147, i64 0}
!147 = !{!"0x3adfee0", !26, i64 0}
!148 = !{!149, !149, i64 0}
!149 = !{!"0x3adfee0.w8.b8", !140, i64 0}
!150 = !{!151, !151, i64 0}
!151 = !{!"0x3adfee0.w8.b24", !152, i64 0}
!152 = !{!"0x3adfee0.w16.b16", !141, i64 0}
!153 = !{!154, !154, i64 0}
!154 = !{!"0x3ab59f0.w4.b0", !155, i64 0}
!155 = !{!"0x3ab59f0.w8.b0", !156, i64 0}
!156 = !{!"0x3ab59f0.w16.b0", !157, i64 0}
!157 = !{!"0x3ab59f0.w32.b0", !158, i64 0}
!158 = !{!"0x3ab59f0.w64.b0", !159, i64 0}
!159 = !{!"0x3ab59f0.w128.b0", !160, i64 0}
!160 = !{!"0x3ab59f0.w256.b0", !161, i64 0}
!161 = !{!"0x3ab59f0.w512.b0", !162, i64 0}
!162 = !{!"0x3ab59f0.w1024.b0", !163, i64 0}
!163 = !{!"0x3ab59f0", !26, i64 0}
!164 = !{!165, !165, i64 0}
!165 = !{!"0x3ab59f0.w4.b4", !155, i64 0}
!166 = distinct !DISubprogram(name: "gemm_compute_", scope: !1, file: !1, type: !167, flags: DIFlagPrototyped, spFlags: DISPFlagLocalToUnit | DISPFlagDefinition | DISPFlagOptimized, unit: !0, retainedNodes: !169)
!167 = !DISubroutineType(types: !168)
!168 = !{!9, !10, !56, !56, !56}
!169 = !{!170, !171, !172, !173}
!170 = !DILocalVariable(name: "ctx_cache_", arg: 1, scope: !166, file: !1, type: !10)
!171 = !DILocalVariable(name: "data", arg: 2, scope: !166, file: !1, type: !56)
!172 = !DILocalVariable(name: "weight", arg: 3, scope: !166, file: !1, type: !56)
!173 = !DILocalVariable(name: "res", arg: 4, scope: !166, file: !1, type: !56)
!174 = !DILocation(line: 0, scope: !166)
!175 = !DILocalVariable(name: "co", scope: !166, file: !1, type: !9)

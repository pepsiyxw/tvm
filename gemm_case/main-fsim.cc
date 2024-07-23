//Copy from Dr.Xiong
//Re-Implemenation of GEMM Test 
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vta/runtime/runtime.h>

#include "data2.h"

// GEMM Funciton
// Inp [M, K] x Wgt [N, K] = Out [M，N] 
int32_t M = 128;
int32_t N = 128;
int32_t K = 128;

//VTA Parameters
int32_t BATCH = 1;
int32_t BLOCK_IN = 16; 
int32_t BLOCK_OUT = 16;

// my_GEMM Implementation on CPU 
void gemm_cpu_my(int8_t *gA, int8_t *gB, int8_t *gC){
    // temp Sum
    int32_t *tS  = (int32_t *)malloc(M*N*sizeof(int32_t));
    for (int32_t i=0; i<M*N; i++){
        tS[i] = 0;
    }

    for (int32_t m=0; m<M; m++){
        for (int32_t i0=0; i0<N/BLOCK_OUT; i0++){
            for(int32_t i1=0; i1<BLOCK_OUT; i1++){
                for(int32_t j0=0; j0<K/BLOCK_IN; j0++){
                    for(int32_t j1=0; j1<BLOCK_IN; j1++){
                        tS[m*N/BLOCK_OUT*BLOCK_OUT + i0*BLOCK_OUT + i1] += gA[m*K/BLOCK_IN*BLOCK_IN + j0*BLOCK_IN + j1] * gB[i0*K/BLOCK_IN*BLOCK_OUT*BLOCK_IN + j0*BLOCK_OUT*BLOCK_IN + i1*BLOCK_IN+j1];
                    }
                }
            }
        }
    } 

    // Shift and  Clip
    for(int32_t i=0; i<M*N; i++){
        int32_t tmp = (tS[i]>>8);
        if (tmp >= 127) {
            gC[i] = 127;
        } else if (tmp < 0){
            gC[i] = 0;
        } else{
            gC[i] = (int8_t)tmp;
        }
    }
}


// GEMM Implementation on CPU 
void gemm_cpu(int8_t *gA, int8_t *gB, int8_t *gC){
    //Temp Sum
    int32_t *tS  =(int32_t *)malloc(M*N*sizeof(int32_t));
    for (int32_t i=0; i<M*N; i++){
        tS[i] = 0;
    }

    // GEMM Accumulation
    // [M,K] x [k,N] = [M,N]
    // M rows
    for (int32_t m=0; m<M; m++){
        //N columns
        for (int32_t i0=0; i0<N; i0+=BLOCK_OUT){
            // Block_out numbers
            for(int32_t i1=0; i1<BLOCK_OUT; i1++){
                // single row x sigle column = one output number
                for(int32_t j0=0; j0<K; j0+=BLOCK_IN){
                    // pick 16 numbers once
                    for(int32_t j1=0; j1<BLOCK_IN; j1++){
                        tS[m*N+i0+i1] += gA[m*K+j0+j1] * gB[i0*K+j0*BLOCK_OUT+i1*BLOCK_IN+j1];
                    }
                }
            }
        }
    }

    // Shift and  Clip
    for(int32_t i=0; i<M*N; i++){
        int32_t tmp = (tS[i]>>8);
        if (tmp >= 127) {
            gC[i] = 127;
        } else if (tmp < 0){
            gC[i] = 0;
        } else{
            gC[i] = (int8_t)tmp;
        }
    }
}


// GEMM Implementaion on VTA
void* null_ptr0 = NULL;
void* null_ptr1 = NULL;
void* null_ptr2 = NULL;
void* null_ptr3 = NULL;
void* null_ptr4 = NULL;
void** tvm_static_handle0 = &null_ptr0;
void** tvm_static_handle1 = &null_ptr1;
void** tvm_static_handle2 = &null_ptr2;
void** tvm_static_handle3 = &null_ptr3;
void** tvm_static_handle4 = &null_ptr4;

int32_t tvm_static_init_lambda0(void *ptr){
    VTAUopLoopBegin(128, 8, 0, 0);
    VTAUopLoopBegin(8, 1, 0, 0);
    VTAUopPush(0, 1, 0, 0, 0, 0, 0, 0);
    VTAUopLoopEnd();
    VTAUopLoopEnd(); //why two end?
    return 0;
}

int32_t tvm_static_init_lambda1(void *ptr){
    VTAUopLoopBegin(8, 0, 1, 1);
    VTAUopLoopBegin(128, 8, 8, 0);
    for (int32_t co=0; co<8; co++){
        VTAUopPush(0, 0, co, 0, (co*8), 0, 0, 0);
    }
    VTAUopLoopEnd();
    VTAUopLoopEnd();
    return 0;
}

int32_t tvm_static_init_lambda2(void *ptr){
    VTAUopLoopBegin(1024, 1, 1, 0);
    VTAUopPush(1, 0, 0, 0, 0, 3, 1, 8);
    VTAUopLoopEnd();
    return 0;
}

int32_t tvm_static_init_lambda3(void *ptr){
    VTAUopLoopBegin(1024, 1, 1, 0);
    VTAUopPush(1, 0, 0, 0, 0, 1, 1, 0);
    VTAUopLoopEnd();
    return 0;
}

int32_t tvm_static_init_lambda4(void *ptr){
    VTAUopLoopBegin(1024, 1, 1, 0);
    VTAUopPush(1, 0, 0, 0, 0, 0, 1, 127);
    VTAUopLoopEnd();
    return 0;
}

void gemm_vta(int8_t *gA, int8_t *gB, int8_t *gC){
    void *lA = VTABufferAlloc(128*128);
    void *lB = VTABufferAlloc(128*128);
    void *lC = VTABufferAlloc(128*128);

    //1.copy from gA/B to lA/B (shared memory)
    VTABufferCopy(gA, 0, lA, 0, 128*128, 1);
    VTABufferCopy(gB, 0, lB, 0, 128*128, 1);

    //Prepare Data
    VTACommandHandle ctx_cache_ =VTATLSCommandHandle();
    VTAPushGEMMOp(tvm_static_handle0, tvm_static_init_lambda0, NULL, 0); //handle0是啥
    VTADepPush(ctx_cache_, 2, 1);
    VTADepPop(ctx_cache_, 2, 1);
    VTALoadBuffer2D(ctx_cache_, lA, 0, 1024, 1, 1024, 0, 0, 0, 0, 0, 2);
    VTALoadBuffer2D(ctx_cache_, lA, 0, 64, 1, 64, 0, 0, 0, 0, 0, 1);
    VTADepPush(ctx_cache_, 1, 2);
    VTADepPop(ctx_cache_, 1, 2); 
    VTAPushGEMMOp(tvm_static_handle1, tvm_static_init_lambda1, NULL, 0);
    VTAPushALUOp(tvm_static_handle2, tvm_static_init_lambda2, NULL, 0);
    VTAPushALUOp(tvm_static_handle3, tvm_static_init_lambda3, NULL, 0);
    VTAPushALUOp(tvm_static_handle4, tvm_static_init_lambda4, NULL, 0);
    VTADepPush(ctx_cache_, 2, 3);
    VTADepPop(ctx_cache_, 2, 3); 
    VTAStoreBuffer2D(ctx_cache_, 0, 4, lC, 0, 1024, 1, 1024);
    VTASynchronize(ctx_cache_, (uint32_t)2147483648); //这一串是啥？
    
    //2:copy from lC to gC
    VTABufferCopy(lC, 0, gC, 0, 128*128, 2);

}

//
int32_t main(int32_t argc, char** argv){
    int8_t *out = (int8_t *)malloc(M*N*sizeof(int8_t));
    int8_t *opt = (int8_t *)malloc(M*N*sizeof(int8_t));
    for (int32_t i=0; i<M*N; i++){
        out[i] = 0;
        out[i] = 0;
    }

    printf("Call myGemm_CPU Implementation\n");
    gemm_cpu_my(inp, wgt, out);
    printf("Compare my_Gemm_CPU Output with Reference\n");
    for (int32_t i=0; i<M*N; i++) {
        if (out[i] != res[i]){
            printf("%d: %d %d\n",i ,out[i],res[i]);
        }
    }

    printf("Call Gemm_CPU Implementation\n");
    gemm_cpu(inp, wgt, out);
    printf("Compare Gemm_CPU Output with Reference\n");
    for (int32_t i=0; i<M*N; i++) {
        if (out[i] != res[i]){
            printf("%d: %d %d\n",i ,out[i],res[i]);
        }
    }
    
    printf("Call Gemm_VTA Implementation\n");   
    gemm_vta(inp, wgt, opt);
    printf("Compare Gemm_VTA Output with Reference\n");
    for (int32_t i=0; i<M*N; i++) {
        if (out[i] != res[i]){
            printf("%d: %d %d\n",i ,out[i],res[i]);
        }
    }
    return 0;    
}

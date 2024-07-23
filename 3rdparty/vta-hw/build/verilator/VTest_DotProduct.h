// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTest.h for the primary calling header

#ifndef _VTEST_DOTPRODUCT_H_
#define _VTEST_DOTPRODUCT_H_  // guard

#include "verilated_heavy.h"
#include "VTest__Dpi.h"

//==========

class VTest__Syms;
class VTest_VerilatedVcd;


//----------

VL_MODULE(VTest_DotProduct) {
  public:
    
    // PORTS
    VL_IN8(clock,0,0);
    VL_IN16(io_a_0,15,0);
    VL_IN16(io_a_1,15,0);
    VL_IN16(io_a_2,15,0);
    VL_IN16(io_a_3,15,0);
    VL_IN16(io_a_4,15,0);
    VL_IN16(io_a_5,15,0);
    VL_IN16(io_a_6,15,0);
    VL_IN16(io_a_7,15,0);
    VL_IN16(io_a_8,15,0);
    VL_IN16(io_a_9,15,0);
    VL_IN16(io_a_10,15,0);
    VL_IN16(io_a_11,15,0);
    VL_IN16(io_a_12,15,0);
    VL_IN16(io_a_13,15,0);
    VL_IN16(io_a_14,15,0);
    VL_IN16(io_a_15,15,0);
    VL_IN16(io_b_0,15,0);
    VL_IN16(io_b_1,15,0);
    VL_IN16(io_b_2,15,0);
    VL_IN16(io_b_3,15,0);
    VL_IN16(io_b_4,15,0);
    VL_IN16(io_b_5,15,0);
    VL_IN16(io_b_6,15,0);
    VL_IN16(io_b_7,15,0);
    VL_IN16(io_b_8,15,0);
    VL_IN16(io_b_9,15,0);
    VL_IN16(io_b_10,15,0);
    VL_IN16(io_b_11,15,0);
    VL_IN16(io_b_12,15,0);
    VL_IN16(io_b_13,15,0);
    VL_IN16(io_b_14,15,0);
    VL_IN16(io_b_15,15,0);
    VL_OUT64(io_y,36,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        SData/*15:0*/ __PVT__m_0__DOT__rA;
        SData/*15:0*/ __PVT__m_0__DOT__rB;
        SData/*15:0*/ __PVT__m_1__DOT__rA;
        SData/*15:0*/ __PVT__m_1__DOT__rB;
        SData/*15:0*/ __PVT__m_2__DOT__rA;
        SData/*15:0*/ __PVT__m_2__DOT__rB;
        SData/*15:0*/ __PVT__m_3__DOT__rA;
        SData/*15:0*/ __PVT__m_3__DOT__rB;
        SData/*15:0*/ __PVT__m_4__DOT__rA;
        SData/*15:0*/ __PVT__m_4__DOT__rB;
        SData/*15:0*/ __PVT__m_5__DOT__rA;
        SData/*15:0*/ __PVT__m_5__DOT__rB;
        SData/*15:0*/ __PVT__m_6__DOT__rA;
        SData/*15:0*/ __PVT__m_6__DOT__rB;
        SData/*15:0*/ __PVT__m_7__DOT__rA;
        SData/*15:0*/ __PVT__m_7__DOT__rB;
        SData/*15:0*/ __PVT__m_8__DOT__rA;
        SData/*15:0*/ __PVT__m_8__DOT__rB;
        SData/*15:0*/ __PVT__m_9__DOT__rA;
        SData/*15:0*/ __PVT__m_9__DOT__rB;
        SData/*15:0*/ __PVT__m_10__DOT__rA;
        SData/*15:0*/ __PVT__m_10__DOT__rB;
        SData/*15:0*/ __PVT__m_11__DOT__rA;
        SData/*15:0*/ __PVT__m_11__DOT__rB;
        SData/*15:0*/ __PVT__m_12__DOT__rA;
        SData/*15:0*/ __PVT__m_12__DOT__rB;
        SData/*15:0*/ __PVT__m_13__DOT__rA;
        SData/*15:0*/ __PVT__m_13__DOT__rB;
        SData/*15:0*/ __PVT__m_14__DOT__rA;
        SData/*15:0*/ __PVT__m_14__DOT__rB;
        SData/*15:0*/ __PVT__m_15__DOT__rA;
        SData/*15:0*/ __PVT__m_15__DOT__rB;
        IData/*31:0*/ __PVT__m_0__DOT___RAND_0;
        IData/*31:0*/ __PVT__m_0__DOT___RAND_1;
        IData/*31:0*/ __PVT__m_0__DOT__mult;
        IData/*31:0*/ __PVT__m_0__DOT__initvar;
        IData/*31:0*/ __PVT__m_1__DOT___RAND_0;
        IData/*31:0*/ __PVT__m_1__DOT___RAND_1;
        IData/*31:0*/ __PVT__m_1__DOT__mult;
        IData/*31:0*/ __PVT__m_1__DOT__initvar;
        IData/*31:0*/ __PVT__m_2__DOT___RAND_0;
        IData/*31:0*/ __PVT__m_2__DOT___RAND_1;
        IData/*31:0*/ __PVT__m_2__DOT__mult;
        IData/*31:0*/ __PVT__m_2__DOT__initvar;
        IData/*31:0*/ __PVT__m_3__DOT___RAND_0;
        IData/*31:0*/ __PVT__m_3__DOT___RAND_1;
        IData/*31:0*/ __PVT__m_3__DOT__mult;
        IData/*31:0*/ __PVT__m_3__DOT__initvar;
        IData/*31:0*/ __PVT__m_4__DOT___RAND_0;
        IData/*31:0*/ __PVT__m_4__DOT___RAND_1;
        IData/*31:0*/ __PVT__m_4__DOT__mult;
        IData/*31:0*/ __PVT__m_4__DOT__initvar;
        IData/*31:0*/ __PVT__m_5__DOT___RAND_0;
        IData/*31:0*/ __PVT__m_5__DOT___RAND_1;
        IData/*31:0*/ __PVT__m_5__DOT__mult;
        IData/*31:0*/ __PVT__m_5__DOT__initvar;
        IData/*31:0*/ __PVT__m_6__DOT___RAND_0;
        IData/*31:0*/ __PVT__m_6__DOT___RAND_1;
        IData/*31:0*/ __PVT__m_6__DOT__mult;
        IData/*31:0*/ __PVT__m_6__DOT__initvar;
        IData/*31:0*/ __PVT__m_7__DOT___RAND_0;
        IData/*31:0*/ __PVT__m_7__DOT___RAND_1;
        IData/*31:0*/ __PVT__m_7__DOT__mult;
        IData/*31:0*/ __PVT__m_7__DOT__initvar;
    };
    struct {
        IData/*31:0*/ __PVT__m_8__DOT___RAND_0;
        IData/*31:0*/ __PVT__m_8__DOT___RAND_1;
        IData/*31:0*/ __PVT__m_8__DOT__mult;
        IData/*31:0*/ __PVT__m_8__DOT__initvar;
        IData/*31:0*/ __PVT__m_9__DOT___RAND_0;
        IData/*31:0*/ __PVT__m_9__DOT___RAND_1;
        IData/*31:0*/ __PVT__m_9__DOT__mult;
        IData/*31:0*/ __PVT__m_9__DOT__initvar;
        IData/*31:0*/ __PVT__m_10__DOT___RAND_0;
        IData/*31:0*/ __PVT__m_10__DOT___RAND_1;
        IData/*31:0*/ __PVT__m_10__DOT__mult;
        IData/*31:0*/ __PVT__m_10__DOT__initvar;
        IData/*31:0*/ __PVT__m_11__DOT___RAND_0;
        IData/*31:0*/ __PVT__m_11__DOT___RAND_1;
        IData/*31:0*/ __PVT__m_11__DOT__mult;
        IData/*31:0*/ __PVT__m_11__DOT__initvar;
        IData/*31:0*/ __PVT__m_12__DOT___RAND_0;
        IData/*31:0*/ __PVT__m_12__DOT___RAND_1;
        IData/*31:0*/ __PVT__m_12__DOT__mult;
        IData/*31:0*/ __PVT__m_12__DOT__initvar;
        IData/*31:0*/ __PVT__m_13__DOT___RAND_0;
        IData/*31:0*/ __PVT__m_13__DOT___RAND_1;
        IData/*31:0*/ __PVT__m_13__DOT__mult;
        IData/*31:0*/ __PVT__m_13__DOT__initvar;
        IData/*31:0*/ __PVT__m_14__DOT___RAND_0;
        IData/*31:0*/ __PVT__m_14__DOT___RAND_1;
        IData/*31:0*/ __PVT__m_14__DOT__mult;
        IData/*31:0*/ __PVT__m_14__DOT__initvar;
        IData/*31:0*/ __PVT__m_15__DOT___RAND_0;
        IData/*31:0*/ __PVT__m_15__DOT___RAND_1;
        IData/*31:0*/ __PVT__m_15__DOT__mult;
        IData/*31:0*/ __PVT__m_15__DOT__initvar;
        IData/*31:0*/ __PVT__a_2_0__DOT__initvar;
        IData/*31:0*/ __PVT__a_2_1__DOT__initvar;
        QData/*63:0*/ __PVT__a_2_0__DOT___RAND_0;
        QData/*63:0*/ __PVT__a_2_0__DOT___RAND_1;
        QData/*34:0*/ __PVT__a_2_0__DOT__rA;
        QData/*34:0*/ __PVT__a_2_0__DOT__rB;
        QData/*63:0*/ __PVT__a_2_1__DOT___RAND_0;
        QData/*63:0*/ __PVT__a_2_1__DOT___RAND_1;
        QData/*34:0*/ __PVT__a_2_1__DOT__rA;
        QData/*34:0*/ __PVT__a_2_1__DOT__rB;
    };
    
    // INTERNAL VARIABLES
  private:
    VTest__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTest_DotProduct);  ///< Copying not allowed
  public:
    VTest_DotProduct(const char* name = "TOP");
    ~VTest_DotProduct();
    
    // INTERNAL METHODS
    void __Vconfigure(VTest__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _initial__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0__1(VTest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0__17(VTest__Syms* __restrict vlSymsp);
    void _sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10__27(VTest__Syms* __restrict vlSymsp);
    void _sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11__28(VTest__Syms* __restrict vlSymsp);
    void _sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12__29(VTest__Syms* __restrict vlSymsp);
    void _sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13__30(VTest__Syms* __restrict vlSymsp);
    void _sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14__31(VTest__Syms* __restrict vlSymsp);
    void _sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15__32(VTest__Syms* __restrict vlSymsp);
    void _sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1__18(VTest__Syms* __restrict vlSymsp);
    void _sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2__19(VTest__Syms* __restrict vlSymsp);
    void _sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3__20(VTest__Syms* __restrict vlSymsp);
    void _sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4__21(VTest__Syms* __restrict vlSymsp);
    void _sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5__22(VTest__Syms* __restrict vlSymsp);
    void _sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6__23(VTest__Syms* __restrict vlSymsp);
    void _sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7__24(VTest__Syms* __restrict vlSymsp);
    void _sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8__25(VTest__Syms* __restrict vlSymsp);
    void _sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9__26(VTest__Syms* __restrict vlSymsp);
    void _settle__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0__33(VTest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

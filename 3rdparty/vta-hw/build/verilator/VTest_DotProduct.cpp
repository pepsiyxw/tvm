// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTest.h for the primary calling header

#include "VTest_DotProduct.h"
#include "VTest__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0__17(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0__17\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0U]);
    this->__PVT__m_1__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[1U]);
    this->__PVT__m_3__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[1U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[2U]);
    this->__PVT__m_5__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[2U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[3U]);
    this->__PVT__m_7__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[4U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[3U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[4U]);
    this->__PVT__m_9__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[4U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[5U]);
    this->__PVT__m_11__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[5U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[6U]);
    this->__PVT__m_13__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[7U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[6U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[7U]);
    this->__PVT__m_15__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[8U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[7U] 
                                                >> 0x10U)));
    this->__PVT__m_0__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U]);
    this->__PVT__m_1__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U]);
    this->__PVT__m_3__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U]);
    this->__PVT__m_5__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U]);
    this->__PVT__m_7__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U]);
    this->__PVT__m_9__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U]);
    this->__PVT__m_11__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U]);
    this->__PVT__m_13__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U]);
    this->__PVT__m_15__DOT__rA = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                             >> 0x10U));
    this->__PVT__a_2_0__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_4__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_4__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_5__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_5__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_6__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_6__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_7__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_7__DOT__mult)))))))));
    this->__PVT__a_2_0__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_0__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_0__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_1__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_1__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_2__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_2__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_3__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_3__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_12__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_12__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_13__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_13__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_14__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_14__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_15__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_15__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_8__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_8__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_9__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_9__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_10__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_10__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_11__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_11__DOT__mult)))))))));
    this->__PVT__m_0__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rB)));
    this->__PVT__m_1__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rB)));
    this->__PVT__m_2__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rB)));
    this->__PVT__m_3__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rB)));
    this->__PVT__m_4__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rB)));
    this->__PVT__m_5__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rB)));
    this->__PVT__m_6__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rB)));
    this->__PVT__m_7__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rB)));
    this->__PVT__m_8__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rB)));
    this->__PVT__m_9__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rB)));
    this->__PVT__m_10__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rB)));
    this->__PVT__m_11__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rB)));
    this->__PVT__m_12__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rB)));
    this->__PVT__m_13__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rB)));
    this->__PVT__m_14__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rB)));
    this->__PVT__m_15__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rB)));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1__18(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1__18\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[8U]);
    this->__PVT__m_1__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[9U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[8U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[9U]);
    this->__PVT__m_3__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xaU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[9U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xaU]);
    this->__PVT__m_5__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xbU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xaU] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xbU]);
    this->__PVT__m_7__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xcU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xbU] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xcU]);
    this->__PVT__m_9__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xdU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xcU] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xdU]);
    this->__PVT__m_11__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xeU] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xdU] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xeU]);
    this->__PVT__m_13__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xfU] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xeU] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xfU]);
    this->__PVT__m_15__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x10U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0xfU] 
                                                >> 0x10U)));
    this->__PVT__m_0__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U]);
    this->__PVT__m_1__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U]);
    this->__PVT__m_3__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U]);
    this->__PVT__m_5__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U]);
    this->__PVT__m_7__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U]);
    this->__PVT__m_9__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U]);
    this->__PVT__m_11__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U]);
    this->__PVT__m_13__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U]);
    this->__PVT__m_15__DOT__rA = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                             >> 0x10U));
    this->__PVT__a_2_0__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_4__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_4__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_5__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_5__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_6__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_6__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_7__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_7__DOT__mult)))))))));
    this->__PVT__a_2_0__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_0__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_0__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_1__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_1__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_2__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_2__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_3__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_3__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_12__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_12__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_13__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_13__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_14__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_14__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_15__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_15__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_8__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_8__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_9__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_9__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_10__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_10__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_11__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_11__DOT__mult)))))))));
    this->__PVT__m_0__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rB)));
    this->__PVT__m_1__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rB)));
    this->__PVT__m_2__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rB)));
    this->__PVT__m_3__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rB)));
    this->__PVT__m_4__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rB)));
    this->__PVT__m_5__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rB)));
    this->__PVT__m_6__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rB)));
    this->__PVT__m_7__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rB)));
    this->__PVT__m_8__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rB)));
    this->__PVT__m_9__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rB)));
    this->__PVT__m_10__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rB)));
    this->__PVT__m_11__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rB)));
    this->__PVT__m_12__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rB)));
    this->__PVT__m_13__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rB)));
    this->__PVT__m_14__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rB)));
    this->__PVT__m_15__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rB)));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2__19(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2__19\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x10U]);
    this->__PVT__m_1__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x11U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x10U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x11U]);
    this->__PVT__m_3__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x12U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x11U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x12U]);
    this->__PVT__m_5__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x13U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x12U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x13U]);
    this->__PVT__m_7__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x14U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x13U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x14U]);
    this->__PVT__m_9__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x15U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x14U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x15U]);
    this->__PVT__m_11__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x16U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x15U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x16U]);
    this->__PVT__m_13__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x17U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x16U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x17U]);
    this->__PVT__m_15__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x18U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x17U] 
                                                >> 0x10U)));
    this->__PVT__m_0__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U]);
    this->__PVT__m_1__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U]);
    this->__PVT__m_3__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U]);
    this->__PVT__m_5__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U]);
    this->__PVT__m_7__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U]);
    this->__PVT__m_9__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U]);
    this->__PVT__m_11__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U]);
    this->__PVT__m_13__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U]);
    this->__PVT__m_15__DOT__rA = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                             >> 0x10U));
    this->__PVT__a_2_0__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_4__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_4__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_5__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_5__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_6__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_6__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_7__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_7__DOT__mult)))))))));
    this->__PVT__a_2_0__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_0__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_0__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_1__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_1__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_2__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_2__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_3__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_3__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_12__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_12__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_13__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_13__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_14__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_14__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_15__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_15__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_8__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_8__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_9__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_9__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_10__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_10__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_11__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_11__DOT__mult)))))))));
    this->__PVT__m_0__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rB)));
    this->__PVT__m_1__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rB)));
    this->__PVT__m_2__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rB)));
    this->__PVT__m_3__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rB)));
    this->__PVT__m_4__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rB)));
    this->__PVT__m_5__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rB)));
    this->__PVT__m_6__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rB)));
    this->__PVT__m_7__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rB)));
    this->__PVT__m_8__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rB)));
    this->__PVT__m_9__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rB)));
    this->__PVT__m_10__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rB)));
    this->__PVT__m_11__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rB)));
    this->__PVT__m_12__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rB)));
    this->__PVT__m_13__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rB)));
    this->__PVT__m_14__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rB)));
    this->__PVT__m_15__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rB)));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3__20(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3__20\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x18U]);
    this->__PVT__m_1__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x19U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x18U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x19U]);
    this->__PVT__m_3__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1aU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x19U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1aU]);
    this->__PVT__m_5__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1bU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1aU] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1bU]);
    this->__PVT__m_7__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1cU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1bU] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1cU]);
    this->__PVT__m_9__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1dU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1cU] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1dU]);
    this->__PVT__m_11__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1eU] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1dU] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1eU]);
    this->__PVT__m_13__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1fU] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1eU] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1fU]);
    this->__PVT__m_15__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x20U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x1fU] 
                                                >> 0x10U)));
    this->__PVT__m_0__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U]);
    this->__PVT__m_1__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U]);
    this->__PVT__m_3__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U]);
    this->__PVT__m_5__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U]);
    this->__PVT__m_7__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U]);
    this->__PVT__m_9__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U]);
    this->__PVT__m_11__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U]);
    this->__PVT__m_13__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U]);
    this->__PVT__m_15__DOT__rA = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                             >> 0x10U));
    this->__PVT__a_2_0__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_4__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_4__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_5__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_5__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_6__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_6__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_7__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_7__DOT__mult)))))))));
    this->__PVT__a_2_0__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_0__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_0__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_1__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_1__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_2__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_2__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_3__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_3__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_12__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_12__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_13__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_13__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_14__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_14__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_15__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_15__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_8__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_8__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_9__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_9__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_10__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_10__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_11__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_11__DOT__mult)))))))));
    this->__PVT__m_0__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rB)));
    this->__PVT__m_1__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rB)));
    this->__PVT__m_2__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rB)));
    this->__PVT__m_3__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rB)));
    this->__PVT__m_4__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rB)));
    this->__PVT__m_5__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rB)));
    this->__PVT__m_6__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rB)));
    this->__PVT__m_7__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rB)));
    this->__PVT__m_8__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rB)));
    this->__PVT__m_9__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rB)));
    this->__PVT__m_10__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rB)));
    this->__PVT__m_11__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rB)));
    this->__PVT__m_12__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rB)));
    this->__PVT__m_13__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rB)));
    this->__PVT__m_14__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rB)));
    this->__PVT__m_15__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rB)));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4__21(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4__21\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x20U]);
    this->__PVT__m_1__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x21U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x20U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x21U]);
    this->__PVT__m_3__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x22U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x21U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x22U]);
    this->__PVT__m_5__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x23U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x22U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x23U]);
    this->__PVT__m_7__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x24U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x23U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x24U]);
    this->__PVT__m_9__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x25U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x24U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x25U]);
    this->__PVT__m_11__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x26U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x25U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x26U]);
    this->__PVT__m_13__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x27U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x26U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x27U]);
    this->__PVT__m_15__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x28U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x27U] 
                                                >> 0x10U)));
    this->__PVT__m_0__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U]);
    this->__PVT__m_1__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U]);
    this->__PVT__m_3__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U]);
    this->__PVT__m_5__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U]);
    this->__PVT__m_7__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U]);
    this->__PVT__m_9__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U]);
    this->__PVT__m_11__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U]);
    this->__PVT__m_13__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U]);
    this->__PVT__m_15__DOT__rA = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                             >> 0x10U));
    this->__PVT__a_2_0__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_4__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_4__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_5__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_5__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_6__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_6__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_7__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_7__DOT__mult)))))))));
    this->__PVT__a_2_0__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_0__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_0__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_1__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_1__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_2__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_2__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_3__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_3__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_12__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_12__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_13__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_13__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_14__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_14__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_15__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_15__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_8__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_8__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_9__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_9__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_10__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_10__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_11__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_11__DOT__mult)))))))));
    this->__PVT__m_0__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rB)));
    this->__PVT__m_1__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rB)));
    this->__PVT__m_2__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rB)));
    this->__PVT__m_3__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rB)));
    this->__PVT__m_4__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rB)));
    this->__PVT__m_5__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rB)));
    this->__PVT__m_6__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rB)));
    this->__PVT__m_7__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rB)));
    this->__PVT__m_8__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rB)));
    this->__PVT__m_9__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rB)));
    this->__PVT__m_10__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rB)));
    this->__PVT__m_11__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rB)));
    this->__PVT__m_12__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rB)));
    this->__PVT__m_13__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rB)));
    this->__PVT__m_14__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rB)));
    this->__PVT__m_15__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rB)));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5__22(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5__22\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x28U]);
    this->__PVT__m_1__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x29U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x28U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x29U]);
    this->__PVT__m_3__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2aU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x29U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2aU]);
    this->__PVT__m_5__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2bU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2aU] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2bU]);
    this->__PVT__m_7__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2cU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2bU] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2cU]);
    this->__PVT__m_9__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2dU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2cU] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2dU]);
    this->__PVT__m_11__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2eU] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2dU] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2eU]);
    this->__PVT__m_13__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2fU] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2eU] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2fU]);
    this->__PVT__m_15__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x30U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x2fU] 
                                                >> 0x10U)));
    this->__PVT__m_0__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U]);
    this->__PVT__m_1__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U]);
    this->__PVT__m_3__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U]);
    this->__PVT__m_5__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U]);
    this->__PVT__m_7__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U]);
    this->__PVT__m_9__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U]);
    this->__PVT__m_11__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U]);
    this->__PVT__m_13__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U]);
    this->__PVT__m_15__DOT__rA = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                             >> 0x10U));
    this->__PVT__a_2_0__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_4__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_4__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_5__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_5__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_6__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_6__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_7__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_7__DOT__mult)))))))));
    this->__PVT__a_2_0__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_0__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_0__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_1__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_1__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_2__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_2__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_3__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_3__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_12__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_12__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_13__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_13__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_14__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_14__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_15__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_15__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_8__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_8__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_9__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_9__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_10__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_10__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_11__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_11__DOT__mult)))))))));
    this->__PVT__m_0__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rB)));
    this->__PVT__m_1__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rB)));
    this->__PVT__m_2__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rB)));
    this->__PVT__m_3__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rB)));
    this->__PVT__m_4__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rB)));
    this->__PVT__m_5__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rB)));
    this->__PVT__m_6__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rB)));
    this->__PVT__m_7__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rB)));
    this->__PVT__m_8__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rB)));
    this->__PVT__m_9__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rB)));
    this->__PVT__m_10__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rB)));
    this->__PVT__m_11__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rB)));
    this->__PVT__m_12__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rB)));
    this->__PVT__m_13__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rB)));
    this->__PVT__m_14__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rB)));
    this->__PVT__m_15__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rB)));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6__23(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6__23\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x30U]);
    this->__PVT__m_1__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x31U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x30U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x31U]);
    this->__PVT__m_3__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x32U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x31U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x32U]);
    this->__PVT__m_5__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x33U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x32U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x33U]);
    this->__PVT__m_7__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x34U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x33U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x34U]);
    this->__PVT__m_9__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x35U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x34U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x35U]);
    this->__PVT__m_11__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x36U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x35U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x36U]);
    this->__PVT__m_13__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x37U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x36U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x37U]);
    this->__PVT__m_15__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x38U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x37U] 
                                                >> 0x10U)));
    this->__PVT__m_0__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U]);
    this->__PVT__m_1__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U]);
    this->__PVT__m_3__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U]);
    this->__PVT__m_5__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U]);
    this->__PVT__m_7__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U]);
    this->__PVT__m_9__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U]);
    this->__PVT__m_11__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U]);
    this->__PVT__m_13__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U]);
    this->__PVT__m_15__DOT__rA = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                             >> 0x10U));
    this->__PVT__a_2_0__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_4__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_4__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_5__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_5__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_6__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_6__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_7__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_7__DOT__mult)))))))));
    this->__PVT__a_2_0__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_0__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_0__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_1__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_1__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_2__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_2__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_3__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_3__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_12__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_12__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_13__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_13__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_14__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_14__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_15__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_15__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_8__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_8__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_9__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_9__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_10__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_10__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_11__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_11__DOT__mult)))))))));
    this->__PVT__m_0__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rB)));
    this->__PVT__m_1__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rB)));
    this->__PVT__m_2__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rB)));
    this->__PVT__m_3__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rB)));
    this->__PVT__m_4__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rB)));
    this->__PVT__m_5__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rB)));
    this->__PVT__m_6__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rB)));
    this->__PVT__m_7__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rB)));
    this->__PVT__m_8__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rB)));
    this->__PVT__m_9__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rB)));
    this->__PVT__m_10__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rB)));
    this->__PVT__m_11__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rB)));
    this->__PVT__m_12__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rB)));
    this->__PVT__m_13__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rB)));
    this->__PVT__m_14__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rB)));
    this->__PVT__m_15__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rB)));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7__24(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7__24\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x38U]);
    this->__PVT__m_1__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x39U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x38U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x39U]);
    this->__PVT__m_3__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3aU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x39U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3aU]);
    this->__PVT__m_5__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3bU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3aU] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3bU]);
    this->__PVT__m_7__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3cU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3bU] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3cU]);
    this->__PVT__m_9__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3dU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3cU] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3dU]);
    this->__PVT__m_11__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3eU] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3dU] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3eU]);
    this->__PVT__m_13__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3fU] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3eU] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3fU]);
    this->__PVT__m_15__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x40U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x3fU] 
                                                >> 0x10U)));
    this->__PVT__m_0__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U]);
    this->__PVT__m_1__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U]);
    this->__PVT__m_3__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U]);
    this->__PVT__m_5__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U]);
    this->__PVT__m_7__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U]);
    this->__PVT__m_9__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U]);
    this->__PVT__m_11__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U]);
    this->__PVT__m_13__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U]);
    this->__PVT__m_15__DOT__rA = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                             >> 0x10U));
    this->__PVT__a_2_0__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_4__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_4__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_5__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_5__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_6__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_6__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_7__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_7__DOT__mult)))))))));
    this->__PVT__a_2_0__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_0__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_0__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_1__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_1__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_2__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_2__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_3__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_3__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_12__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_12__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_13__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_13__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_14__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_14__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_15__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_15__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_8__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_8__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_9__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_9__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_10__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_10__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_11__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_11__DOT__mult)))))))));
    this->__PVT__m_0__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rB)));
    this->__PVT__m_1__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rB)));
    this->__PVT__m_2__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rB)));
    this->__PVT__m_3__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rB)));
    this->__PVT__m_4__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rB)));
    this->__PVT__m_5__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rB)));
    this->__PVT__m_6__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rB)));
    this->__PVT__m_7__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rB)));
    this->__PVT__m_8__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rB)));
    this->__PVT__m_9__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rB)));
    this->__PVT__m_10__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rB)));
    this->__PVT__m_11__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rB)));
    this->__PVT__m_12__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rB)));
    this->__PVT__m_13__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rB)));
    this->__PVT__m_14__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rB)));
    this->__PVT__m_15__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rB)));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8__25(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8__25\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x40U]);
    this->__PVT__m_1__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x41U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x40U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x41U]);
    this->__PVT__m_3__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x42U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x41U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x42U]);
    this->__PVT__m_5__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x43U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x42U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x43U]);
    this->__PVT__m_7__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x44U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x43U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x44U]);
    this->__PVT__m_9__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x45U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x44U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x45U]);
    this->__PVT__m_11__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x46U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x45U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x46U]);
    this->__PVT__m_13__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x47U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x46U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x47U]);
    this->__PVT__m_15__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x48U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x47U] 
                                                >> 0x10U)));
    this->__PVT__m_0__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U]);
    this->__PVT__m_1__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U]);
    this->__PVT__m_3__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U]);
    this->__PVT__m_5__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U]);
    this->__PVT__m_7__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U]);
    this->__PVT__m_9__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U]);
    this->__PVT__m_11__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U]);
    this->__PVT__m_13__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U]);
    this->__PVT__m_15__DOT__rA = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                             >> 0x10U));
    this->__PVT__a_2_0__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_4__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_4__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_5__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_5__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_6__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_6__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_7__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_7__DOT__mult)))))))));
    this->__PVT__a_2_0__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_0__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_0__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_1__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_1__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_2__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_2__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_3__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_3__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_12__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_12__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_13__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_13__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_14__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_14__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_15__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_15__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_8__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_8__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_9__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_9__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_10__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_10__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_11__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_11__DOT__mult)))))))));
    this->__PVT__m_0__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rB)));
    this->__PVT__m_1__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rB)));
    this->__PVT__m_2__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rB)));
    this->__PVT__m_3__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rB)));
    this->__PVT__m_4__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rB)));
    this->__PVT__m_5__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rB)));
    this->__PVT__m_6__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rB)));
    this->__PVT__m_7__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rB)));
    this->__PVT__m_8__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rB)));
    this->__PVT__m_9__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rB)));
    this->__PVT__m_10__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rB)));
    this->__PVT__m_11__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rB)));
    this->__PVT__m_12__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rB)));
    this->__PVT__m_13__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rB)));
    this->__PVT__m_14__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rB)));
    this->__PVT__m_15__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rB)));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9__26(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9__26\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x48U]);
    this->__PVT__m_1__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x49U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x48U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x49U]);
    this->__PVT__m_3__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4aU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x49U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4aU]);
    this->__PVT__m_5__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4bU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4aU] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4bU]);
    this->__PVT__m_7__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4cU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4bU] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4cU]);
    this->__PVT__m_9__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4dU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4cU] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4dU]);
    this->__PVT__m_11__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4eU] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4dU] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4eU]);
    this->__PVT__m_13__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4fU] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4eU] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4fU]);
    this->__PVT__m_15__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x50U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4fU] 
                                                >> 0x10U)));
    this->__PVT__m_0__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U]);
    this->__PVT__m_1__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U]);
    this->__PVT__m_3__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U]);
    this->__PVT__m_5__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U]);
    this->__PVT__m_7__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U]);
    this->__PVT__m_9__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U]);
    this->__PVT__m_11__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U]);
    this->__PVT__m_13__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U]);
    this->__PVT__m_15__DOT__rA = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                             >> 0x10U));
    this->__PVT__a_2_0__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_4__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_4__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_5__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_5__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_6__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_6__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_7__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_7__DOT__mult)))))))));
    this->__PVT__a_2_0__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_0__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_0__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_1__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_1__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_2__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_2__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_3__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_3__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_12__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_12__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_13__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_13__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_14__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_14__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_15__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_15__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_8__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_8__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_9__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_9__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_10__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_10__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_11__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_11__DOT__mult)))))))));
    this->__PVT__m_0__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rB)));
    this->__PVT__m_1__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rB)));
    this->__PVT__m_2__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rB)));
    this->__PVT__m_3__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rB)));
    this->__PVT__m_4__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rB)));
    this->__PVT__m_5__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rB)));
    this->__PVT__m_6__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rB)));
    this->__PVT__m_7__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rB)));
    this->__PVT__m_8__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rB)));
    this->__PVT__m_9__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rB)));
    this->__PVT__m_10__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rB)));
    this->__PVT__m_11__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rB)));
    this->__PVT__m_12__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rB)));
    this->__PVT__m_13__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rB)));
    this->__PVT__m_14__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rB)));
    this->__PVT__m_15__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rB)));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10__27(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10__27\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x50U]);
    this->__PVT__m_1__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x51U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x50U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x51U]);
    this->__PVT__m_3__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x52U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x51U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x52U]);
    this->__PVT__m_5__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x53U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x52U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x53U]);
    this->__PVT__m_7__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x54U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x53U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x54U]);
    this->__PVT__m_9__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x55U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x54U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x55U]);
    this->__PVT__m_11__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x56U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x55U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x56U]);
    this->__PVT__m_13__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x57U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x56U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x57U]);
    this->__PVT__m_15__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x58U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x57U] 
                                                >> 0x10U)));
    this->__PVT__m_0__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U]);
    this->__PVT__m_1__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U]);
    this->__PVT__m_3__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U]);
    this->__PVT__m_5__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U]);
    this->__PVT__m_7__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U]);
    this->__PVT__m_9__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U]);
    this->__PVT__m_11__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U]);
    this->__PVT__m_13__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U]);
    this->__PVT__m_15__DOT__rA = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                             >> 0x10U));
    this->__PVT__a_2_0__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_4__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_4__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_5__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_5__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_6__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_6__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_7__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_7__DOT__mult)))))))));
    this->__PVT__a_2_0__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_0__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_0__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_1__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_1__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_2__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_2__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_3__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_3__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_12__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_12__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_13__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_13__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_14__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_14__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_15__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_15__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_8__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_8__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_9__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_9__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_10__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_10__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_11__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_11__DOT__mult)))))))));
    this->__PVT__m_0__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rB)));
    this->__PVT__m_1__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rB)));
    this->__PVT__m_2__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rB)));
    this->__PVT__m_3__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rB)));
    this->__PVT__m_4__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rB)));
    this->__PVT__m_5__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rB)));
    this->__PVT__m_6__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rB)));
    this->__PVT__m_7__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rB)));
    this->__PVT__m_8__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rB)));
    this->__PVT__m_9__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rB)));
    this->__PVT__m_10__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rB)));
    this->__PVT__m_11__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rB)));
    this->__PVT__m_12__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rB)));
    this->__PVT__m_13__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rB)));
    this->__PVT__m_14__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rB)));
    this->__PVT__m_15__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rB)));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11__28(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11__28\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x58U]);
    this->__PVT__m_1__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x59U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x58U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x59U]);
    this->__PVT__m_3__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5aU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x59U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5aU]);
    this->__PVT__m_5__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5bU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5aU] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5bU]);
    this->__PVT__m_7__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5cU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5bU] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5cU]);
    this->__PVT__m_9__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5dU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5cU] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5dU]);
    this->__PVT__m_11__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5eU] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5dU] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5eU]);
    this->__PVT__m_13__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5fU] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5eU] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5fU]);
    this->__PVT__m_15__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x60U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5fU] 
                                                >> 0x10U)));
    this->__PVT__m_0__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U]);
    this->__PVT__m_1__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U]);
    this->__PVT__m_3__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U]);
    this->__PVT__m_5__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U]);
    this->__PVT__m_7__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U]);
    this->__PVT__m_9__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U]);
    this->__PVT__m_11__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U]);
    this->__PVT__m_13__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U]);
    this->__PVT__m_15__DOT__rA = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                             >> 0x10U));
    this->__PVT__a_2_0__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_4__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_4__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_5__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_5__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_6__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_6__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_7__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_7__DOT__mult)))))))));
    this->__PVT__a_2_0__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_0__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_0__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_1__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_1__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_2__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_2__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_3__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_3__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_12__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_12__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_13__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_13__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_14__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_14__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_15__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_15__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_8__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_8__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_9__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_9__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_10__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_10__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_11__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_11__DOT__mult)))))))));
    this->__PVT__m_0__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rB)));
    this->__PVT__m_1__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rB)));
    this->__PVT__m_2__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rB)));
    this->__PVT__m_3__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rB)));
    this->__PVT__m_4__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rB)));
    this->__PVT__m_5__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rB)));
    this->__PVT__m_6__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rB)));
    this->__PVT__m_7__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rB)));
    this->__PVT__m_8__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rB)));
    this->__PVT__m_9__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rB)));
    this->__PVT__m_10__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rB)));
    this->__PVT__m_11__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rB)));
    this->__PVT__m_12__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rB)));
    this->__PVT__m_13__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rB)));
    this->__PVT__m_14__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rB)));
    this->__PVT__m_15__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rB)));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12__29(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12__29\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x60U]);
    this->__PVT__m_1__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x61U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x60U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x61U]);
    this->__PVT__m_3__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x62U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x61U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x62U]);
    this->__PVT__m_5__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x63U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x62U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x63U]);
    this->__PVT__m_7__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x64U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x63U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x64U]);
    this->__PVT__m_9__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x65U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x64U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x65U]);
    this->__PVT__m_11__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x66U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x65U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x66U]);
    this->__PVT__m_13__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x67U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x66U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x67U]);
    this->__PVT__m_15__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x68U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x67U] 
                                                >> 0x10U)));
    this->__PVT__m_0__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U]);
    this->__PVT__m_1__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U]);
    this->__PVT__m_3__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U]);
    this->__PVT__m_5__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U]);
    this->__PVT__m_7__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U]);
    this->__PVT__m_9__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U]);
    this->__PVT__m_11__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U]);
    this->__PVT__m_13__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U]);
    this->__PVT__m_15__DOT__rA = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                             >> 0x10U));
    this->__PVT__a_2_0__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_4__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_4__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_5__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_5__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_6__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_6__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_7__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_7__DOT__mult)))))))));
    this->__PVT__a_2_0__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_0__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_0__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_1__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_1__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_2__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_2__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_3__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_3__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_12__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_12__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_13__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_13__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_14__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_14__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_15__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_15__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_8__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_8__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_9__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_9__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_10__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_10__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_11__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_11__DOT__mult)))))))));
    this->__PVT__m_0__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rB)));
    this->__PVT__m_1__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rB)));
    this->__PVT__m_2__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rB)));
    this->__PVT__m_3__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rB)));
    this->__PVT__m_4__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rB)));
    this->__PVT__m_5__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rB)));
    this->__PVT__m_6__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rB)));
    this->__PVT__m_7__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rB)));
    this->__PVT__m_8__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rB)));
    this->__PVT__m_9__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rB)));
    this->__PVT__m_10__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rB)));
    this->__PVT__m_11__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rB)));
    this->__PVT__m_12__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rB)));
    this->__PVT__m_13__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rB)));
    this->__PVT__m_14__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rB)));
    this->__PVT__m_15__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rB)));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13__30(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13__30\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x68U]);
    this->__PVT__m_1__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x69U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x68U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x69U]);
    this->__PVT__m_3__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6aU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x69U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6aU]);
    this->__PVT__m_5__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6bU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6aU] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6bU]);
    this->__PVT__m_7__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6cU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6bU] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6cU]);
    this->__PVT__m_9__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6dU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6cU] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6dU]);
    this->__PVT__m_11__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6eU] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6dU] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6eU]);
    this->__PVT__m_13__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6fU] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6eU] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6fU]);
    this->__PVT__m_15__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x70U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6fU] 
                                                >> 0x10U)));
    this->__PVT__m_0__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U]);
    this->__PVT__m_1__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U]);
    this->__PVT__m_3__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U]);
    this->__PVT__m_5__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U]);
    this->__PVT__m_7__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U]);
    this->__PVT__m_9__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U]);
    this->__PVT__m_11__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U]);
    this->__PVT__m_13__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U]);
    this->__PVT__m_15__DOT__rA = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                             >> 0x10U));
    this->__PVT__a_2_0__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_4__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_4__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_5__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_5__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_6__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_6__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_7__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_7__DOT__mult)))))))));
    this->__PVT__a_2_0__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_0__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_0__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_1__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_1__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_2__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_2__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_3__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_3__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_12__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_12__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_13__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_13__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_14__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_14__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_15__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_15__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_8__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_8__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_9__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_9__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_10__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_10__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_11__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_11__DOT__mult)))))))));
    this->__PVT__m_0__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rB)));
    this->__PVT__m_1__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rB)));
    this->__PVT__m_2__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rB)));
    this->__PVT__m_3__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rB)));
    this->__PVT__m_4__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rB)));
    this->__PVT__m_5__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rB)));
    this->__PVT__m_6__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rB)));
    this->__PVT__m_7__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rB)));
    this->__PVT__m_8__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rB)));
    this->__PVT__m_9__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rB)));
    this->__PVT__m_10__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rB)));
    this->__PVT__m_11__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rB)));
    this->__PVT__m_12__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rB)));
    this->__PVT__m_13__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rB)));
    this->__PVT__m_14__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rB)));
    this->__PVT__m_15__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rB)));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14__31(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14__31\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x70U]);
    this->__PVT__m_1__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x71U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x70U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x71U]);
    this->__PVT__m_3__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x72U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x71U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x72U]);
    this->__PVT__m_5__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x73U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x72U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x73U]);
    this->__PVT__m_7__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x74U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x73U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x74U]);
    this->__PVT__m_9__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x75U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x74U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x75U]);
    this->__PVT__m_11__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x76U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x75U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x76U]);
    this->__PVT__m_13__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x77U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x76U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x77U]);
    this->__PVT__m_15__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x78U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x77U] 
                                                >> 0x10U)));
    this->__PVT__m_0__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U]);
    this->__PVT__m_1__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U]);
    this->__PVT__m_3__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U]);
    this->__PVT__m_5__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U]);
    this->__PVT__m_7__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U]);
    this->__PVT__m_9__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U]);
    this->__PVT__m_11__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U]);
    this->__PVT__m_13__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U]);
    this->__PVT__m_15__DOT__rA = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                             >> 0x10U));
    this->__PVT__a_2_0__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_4__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_4__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_5__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_5__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_6__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_6__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_7__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_7__DOT__mult)))))))));
    this->__PVT__a_2_0__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_0__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_0__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_1__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_1__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_2__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_2__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_3__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_3__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_12__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_12__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_13__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_13__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_14__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_14__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_15__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_15__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_8__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_8__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_9__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_9__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_10__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_10__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_11__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_11__DOT__mult)))))))));
    this->__PVT__m_0__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rB)));
    this->__PVT__m_1__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rB)));
    this->__PVT__m_2__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rB)));
    this->__PVT__m_3__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rB)));
    this->__PVT__m_4__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rB)));
    this->__PVT__m_5__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rB)));
    this->__PVT__m_6__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rB)));
    this->__PVT__m_7__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rB)));
    this->__PVT__m_8__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rB)));
    this->__PVT__m_9__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rB)));
    this->__PVT__m_10__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rB)));
    this->__PVT__m_11__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rB)));
    this->__PVT__m_12__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rB)));
    this->__PVT__m_13__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rB)));
    this->__PVT__m_14__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rB)));
    this->__PVT__m_15__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rB)));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15__32(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15__32\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x78U]);
    this->__PVT__m_1__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x79U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x78U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x79U]);
    this->__PVT__m_3__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7aU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x79U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7aU]);
    this->__PVT__m_5__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7bU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7aU] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7bU]);
    this->__PVT__m_7__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7cU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7bU] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7cU]);
    this->__PVT__m_9__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7dU] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7cU] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7dU]);
    this->__PVT__m_11__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7eU] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7dU] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7eU]);
    this->__PVT__m_13__DOT__rB = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7fU] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7eU] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rB = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7fU]);
    this->__PVT__m_15__DOT__rB = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7fU] 
                                             >> 0x10U));
    this->__PVT__m_0__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U]);
    this->__PVT__m_1__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U] 
                                               >> 0x10U)));
    this->__PVT__m_2__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U]);
    this->__PVT__m_3__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
                                               >> 0x10U)));
    this->__PVT__m_4__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U]);
    this->__PVT__m_5__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
                                               >> 0x10U)));
    this->__PVT__m_6__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U]);
    this->__PVT__m_7__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
                                               >> 0x10U)));
    this->__PVT__m_8__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U]);
    this->__PVT__m_9__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                             << 0x10U) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
                                               >> 0x10U)));
    this->__PVT__m_10__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U]);
    this->__PVT__m_11__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
                                                >> 0x10U)));
    this->__PVT__m_12__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U]);
    this->__PVT__m_13__DOT__rA = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
                                                >> 0x10U)));
    this->__PVT__m_14__DOT__rA = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U]);
    this->__PVT__m_15__DOT__rA = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
                                             >> 0x10U));
    this->__PVT__a_2_0__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_4__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_4__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_5__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_5__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_6__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_6__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_7__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_7__DOT__mult)))))))));
    this->__PVT__a_2_0__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_0__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_0__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_1__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_1__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_2__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_2__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_3__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_3__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rB = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_12__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_12__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_13__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_13__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_14__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_14__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_15__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_15__DOT__mult)))))))));
    this->__PVT__a_2_1__DOT__rA = (VL_ULL(0x7ffffffff) 
                                   & (VL_EXTENDS_QQ(35,34, 
                                                    (VL_ULL(0x3ffffffff) 
                                                     & (VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_8__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_8__DOT__mult)))) 
                                                        + 
                                                        VL_EXTENDS_QQ(34,33, 
                                                                      (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_9__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(this->__PVT__m_9__DOT__mult))))))) 
                                      + VL_EXTENDS_QQ(35,34, 
                                                      (VL_ULL(0x3ffffffff) 
                                                       & (VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_10__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_10__DOT__mult)))) 
                                                          + 
                                                          VL_EXTENDS_QQ(34,33, 
                                                                        (((QData)((IData)(
                                                                                (1U 
                                                                                & (this->__PVT__m_11__DOT__mult 
                                                                                >> 0x1fU)))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(this->__PVT__m_11__DOT__mult)))))))));
    this->__PVT__m_0__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_0__DOT__rB)));
    this->__PVT__m_1__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_1__DOT__rB)));
    this->__PVT__m_2__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_2__DOT__rB)));
    this->__PVT__m_3__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_3__DOT__rB)));
    this->__PVT__m_4__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_4__DOT__rB)));
    this->__PVT__m_5__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_5__DOT__rB)));
    this->__PVT__m_6__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_6__DOT__rB)));
    this->__PVT__m_7__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_7__DOT__rB)));
    this->__PVT__m_8__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_8__DOT__rB)));
    this->__PVT__m_9__DOT__mult = VL_MULS_III(32,32,32, 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rA)), 
                                              VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_9__DOT__rB)));
    this->__PVT__m_10__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_10__DOT__rB)));
    this->__PVT__m_11__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_11__DOT__rB)));
    this->__PVT__m_12__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_12__DOT__rB)));
    this->__PVT__m_13__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_13__DOT__rB)));
    this->__PVT__m_14__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_14__DOT__rB)));
    this->__PVT__m_15__DOT__mult = VL_MULS_III(32,32,32, 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rA)), 
                                               VL_EXTENDS_II(32,16, (IData)(this->__PVT__m_15__DOT__rB)));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTest.h for the primary calling header

#include "VTest.h"
#include "VTest__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTest::_sequent__TOP__4(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_sequent__TOP__4\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp355[4];
    WData/*127:0*/ __Vtemp356[4];
    WData/*127:0*/ __Vtemp362[4];
    WData/*127:0*/ __Vtemp363[4];
    WData/*127:0*/ __Vtemp369[4];
    WData/*127:0*/ __Vtemp370[4];
    WData/*127:0*/ __Vtemp376[4];
    WData/*127:0*/ __Vtemp377[4];
    WData/*127:0*/ __Vtemp383[4];
    WData/*127:0*/ __Vtemp384[4];
    WData/*127:0*/ __Vtemp390[4];
    WData/*127:0*/ __Vtemp391[4];
    WData/*127:0*/ __Vtemp397[4];
    WData/*127:0*/ __Vtemp398[4];
    WData/*127:0*/ __Vtemp404[4];
    WData/*127:0*/ __Vtemp405[4];
    WData/*127:0*/ __Vtemp411[4];
    WData/*127:0*/ __Vtemp412[4];
    WData/*127:0*/ __Vtemp418[4];
    WData/*127:0*/ __Vtemp419[4];
    WData/*127:0*/ __Vtemp425[4];
    WData/*127:0*/ __Vtemp426[4];
    WData/*127:0*/ __Vtemp432[4];
    WData/*127:0*/ __Vtemp433[4];
    WData/*127:0*/ __Vtemp439[4];
    WData/*127:0*/ __Vtemp440[4];
    WData/*127:0*/ __Vtemp446[4];
    WData/*127:0*/ __Vtemp447[4];
    WData/*127:0*/ __Vtemp453[4];
    WData/*127:0*/ __Vtemp454[4];
    WData/*127:0*/ __Vtemp460[4];
    WData/*127:0*/ __Vtemp461[4];
    // Body
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_12 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_o) 
            != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                             << 0x1dU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                          >> 3U)) - (IData)(1U))))
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__src_tmp)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__src_i));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_4 
        = (((0U != (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                            >> 0x18U))) & (0U == (0xfU 
                                                  & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                     >> 0x1cU))))
            ? 2U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_2)
                     ? 3U : (((0U != (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                              >> 0x18U))) 
                              & (0U != (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                >> 0x1cU))))
                              ? 4U : ((0U != (0xfU 
                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                 >> 0x14U)))
                                       ? 5U : 0U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__newReadRow)
            ? ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained 
                < (0x1ffU & (((IData)(0x800U) - (0x7ffU 
                                                 & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr)) 
                             >> 3U))) ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained
                : (0x1ffU & (((IData)(0x800U) - (0x7ffU 
                                                 & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr)) 
                             >> 3U))) : ((0x100U > vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained)
                                          ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained
                                          : 0x100U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___loadUop_io_start_T_1 
        = ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__start));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start 
        = (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__start)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__dec_io_isLoadUop));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_type 
        = (((IData)((0U == (3U ^ (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])))) 
            << 4U) | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__dec_io_isAlu) 
                       << 3U) | (((IData)((0U == (2U 
                                                  ^ 
                                                  (7U 
                                                   & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])))) 
                                  << 2U) | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__dec_io_isLoadAcc) 
                                             << 1U) 
                                            | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__dec_io_isLoadUop)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdStartIdxValid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdCmdStartIdxValid_T_5) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__commandsDone)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_vmeCmd_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdCmdStartIdxValid_T_5) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__commandsDone)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_3 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) 
            & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance))) 
           | ((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) 
                  & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance))) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__stutter)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_src_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_last 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance) 
              & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__uop_idx) 
                  == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                   << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                               >> 0x15U)) 
                                 - (IData)(1U)))) & 
                 (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i) 
                   == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                    << 0xfU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                >> 0x11U)) 
                                  - (IData)(1U)))) 
                  & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_o) 
                     == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                      << 0x1dU) | (
                                                   vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                   >> 3U)) 
                                    - (IData)(1U))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3 
        = (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1) 
                      + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                 >> 0x1cU))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdxValid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdStartIdxValid_T_5) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdStartIdxValid_T_5) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineClNb 
        = (0x7fffU & ((0U == (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdLineClNb_T_1))
                       ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdLineClNb_T_1 
                          >> 3U) : ((IData)(1U) + (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdLineClNb_T_1 
                                                   >> 3U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA, 
                             (0x3fU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rB)))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA, 
                             (0x3fU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rB)))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA, 
                             (0x3fU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rB)))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA, 
                             (0x3fU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rB)))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA, 
                             (0x3fU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rB)))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA, 
                             (0x3fU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rB)))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA, 
                             (0x3fU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rB)))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA, 
                             (0x3fU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rB)))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA, 
                             (0x3fU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rB)))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA, 
                             (0x3fU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rB)))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA, 
                             (0x3fU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rB)))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA, 
                             (0x3fU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rB)))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA, 
                             (0x3fU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rB)))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA, 
                             (0x3fU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rB)))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA, 
                             (0x3fU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rB)))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_QQI(64,64,6, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA, 
                             (0x3fU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rB)))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_IQQ(1,64,64, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_8 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_data_ready)
            ? (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xcnt) 
                == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen))
                ? 4U : ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tag))
                         ? 3U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)))
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__waddr_cur 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_bytes);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore_io_done 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___stride_T_1) 
            & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_19));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__stride 
        = ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___stride_T_1) 
             & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xcnt) 
                == (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen))))) 
            & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__ycnt) 
              != (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                             - (IData)(1U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T_39 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT__io_deq_v));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m_io_last 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running) 
           & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__uop_idx) 
               == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                            >> 0x15U)) 
                              - (IData)(1U)))) & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i) 
                                                   == 
                                                   (0x3fffU 
                                                    & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                         << 0xfU) 
                                                        | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                           >> 0x11U)) 
                                                       - (IData)(1U)))) 
                                                  & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o) 
                                                     == 
                                                     (0x3fffU 
                                                      & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                           << 0x1dU) 
                                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                             >> 3U)) 
                                                         - (IData)(1U)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___blocksInFlight_T_1 
        = (0x7fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__blocksInFlight) 
                      + (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdDestBlockIdxNext_T_3 
        = (0x7fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext) 
                      + (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__nextBlRNb 
        = (0xfffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb 
                       + (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0_io_swait 
        = ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
            >> 3U) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___loadUop_io_start_T_1));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1_io_swait 
        = ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
            >> 4U) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___loadUop_io_start_T_1));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___loadUop_io_start_T_1) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__dec_io_isLoadAcc));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___GEN_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start) 
           | ((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__loadDone) 
                  & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)))) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___GEN_0 
        = ((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_type))
            ? 2U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__startIssueCmdRead 
        = ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clReadIdx)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdStartIdxValid));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1_io_enq_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_vmeCmd_valid) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___T 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_vmeCmd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_updateState 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_vmeCmd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___T_7 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_valid) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_uop_idx_valid 
        = ((0U == (2U ^ (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])))
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running)
            : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_valid) 
               | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_src_valid)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_5 
        = (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu_io_start_REG)) 
           | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) 
               & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance)))
               ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running)
               : (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) 
                   & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance))
                   ? ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_last)) 
                      & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running))
                   : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpDestRowOffset_T_1 
        = (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset) 
                      + ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3) 
                         - (IData)(1U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_40 
        = ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
            == (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpLastDataRow_T_1) 
                           - (IData)(1U)))) & (((((
                                                   (4U 
                                                    == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                                                   | (3U 
                                                      == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
                                                  & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
                                                     == 
                                                     (0xffffU 
                                                      & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3) 
                                                         - (IData)(1U))))) 
                                                 | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpNarwLineEnd)) 
                                                & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid))) 
                                               | (5U 
                                                  == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
           == (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3) 
                          - (IData)(1U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__startIssueCmdRead 
        = ((0U == vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdxValid));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4_io_enq_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clRemained 
        = (0x7fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineClNb) 
                      - (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clReadIdx)));
    __Vtemp355[0U] = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA);
    __Vtemp355[1U] = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA 
                              >> 0x20U));
    __Vtemp355[2U] = (IData)((VL_ULL(0x7fffffffffffffff) 
                              & VL_NEGATE_Q((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA 
                                                                        >> 0x3fU))))))));
    __Vtemp355[3U] = (IData)(((VL_ULL(0x7fffffffffffffff) 
                               & VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA 
                                                                         >> 0x3fU))))))) 
                              >> 0x20U));
    VL_SHIFTL_WWI(127,127,6, __Vtemp356, __Vtemp355, 
                  (0x3fU & ((IData)(1U) + (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rB)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_9[0U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp356[0U] : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_7));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_9[1U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp356[1U] : (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_7 
                                        >> 0x20U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_9[2U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp356[2U] : (IData)((VL_ULL(0x7fffffffffffffff) 
                                        & VL_NEGATE_Q((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU)))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_9[3U] 
        = (0x7fffffffU & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                           ? __Vtemp356[3U] : (IData)(
                                                      ((VL_ULL(0x7fffffffffffffff) 
                                                        & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU))))))) 
                                                       >> 0x20U))));
    __Vtemp362[0U] = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA);
    __Vtemp362[1U] = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA 
                              >> 0x20U));
    __Vtemp362[2U] = (IData)((VL_ULL(0x7fffffffffffffff) 
                              & VL_NEGATE_Q((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA 
                                                                        >> 0x3fU))))))));
    __Vtemp362[3U] = (IData)(((VL_ULL(0x7fffffffffffffff) 
                               & VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA 
                                                                         >> 0x3fU))))))) 
                              >> 0x20U));
    VL_SHIFTL_WWI(127,127,6, __Vtemp363, __Vtemp362, 
                  (0x3fU & ((IData)(1U) + (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rB)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_9[0U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp363[0U] : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_7));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_9[1U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp363[1U] : (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_7 
                                        >> 0x20U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_9[2U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp363[2U] : (IData)((VL_ULL(0x7fffffffffffffff) 
                                        & VL_NEGATE_Q((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU)))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_9[3U] 
        = (0x7fffffffU & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                           ? __Vtemp363[3U] : (IData)(
                                                      ((VL_ULL(0x7fffffffffffffff) 
                                                        & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU))))))) 
                                                       >> 0x20U))));
    __Vtemp369[0U] = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA);
    __Vtemp369[1U] = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA 
                              >> 0x20U));
    __Vtemp369[2U] = (IData)((VL_ULL(0x7fffffffffffffff) 
                              & VL_NEGATE_Q((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA 
                                                                        >> 0x3fU))))))));
    __Vtemp369[3U] = (IData)(((VL_ULL(0x7fffffffffffffff) 
                               & VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA 
                                                                         >> 0x3fU))))))) 
                              >> 0x20U));
    VL_SHIFTL_WWI(127,127,6, __Vtemp370, __Vtemp369, 
                  (0x3fU & ((IData)(1U) + (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rB)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_9[0U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp370[0U] : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_7));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_9[1U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp370[1U] : (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_7 
                                        >> 0x20U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_9[2U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp370[2U] : (IData)((VL_ULL(0x7fffffffffffffff) 
                                        & VL_NEGATE_Q((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU)))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_9[3U] 
        = (0x7fffffffU & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                           ? __Vtemp370[3U] : (IData)(
                                                      ((VL_ULL(0x7fffffffffffffff) 
                                                        & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU))))))) 
                                                       >> 0x20U))));
    __Vtemp376[0U] = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA);
    __Vtemp376[1U] = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA 
                              >> 0x20U));
    __Vtemp376[2U] = (IData)((VL_ULL(0x7fffffffffffffff) 
                              & VL_NEGATE_Q((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA 
                                                                        >> 0x3fU))))))));
    __Vtemp376[3U] = (IData)(((VL_ULL(0x7fffffffffffffff) 
                               & VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA 
                                                                         >> 0x3fU))))))) 
                              >> 0x20U));
    VL_SHIFTL_WWI(127,127,6, __Vtemp377, __Vtemp376, 
                  (0x3fU & ((IData)(1U) + (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rB)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_9[0U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp377[0U] : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_7));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_9[1U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp377[1U] : (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_7 
                                        >> 0x20U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_9[2U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp377[2U] : (IData)((VL_ULL(0x7fffffffffffffff) 
                                        & VL_NEGATE_Q((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU)))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_9[3U] 
        = (0x7fffffffU & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                           ? __Vtemp377[3U] : (IData)(
                                                      ((VL_ULL(0x7fffffffffffffff) 
                                                        & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU))))))) 
                                                       >> 0x20U))));
    __Vtemp383[0U] = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA);
    __Vtemp383[1U] = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA 
                              >> 0x20U));
    __Vtemp383[2U] = (IData)((VL_ULL(0x7fffffffffffffff) 
                              & VL_NEGATE_Q((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA 
                                                                        >> 0x3fU))))))));
    __Vtemp383[3U] = (IData)(((VL_ULL(0x7fffffffffffffff) 
                               & VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA 
                                                                         >> 0x3fU))))))) 
                              >> 0x20U));
    VL_SHIFTL_WWI(127,127,6, __Vtemp384, __Vtemp383, 
                  (0x3fU & ((IData)(1U) + (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rB)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_9[0U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp384[0U] : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_7));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_9[1U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp384[1U] : (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_7 
                                        >> 0x20U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_9[2U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp384[2U] : (IData)((VL_ULL(0x7fffffffffffffff) 
                                        & VL_NEGATE_Q((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU)))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_9[3U] 
        = (0x7fffffffU & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                           ? __Vtemp384[3U] : (IData)(
                                                      ((VL_ULL(0x7fffffffffffffff) 
                                                        & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU))))))) 
                                                       >> 0x20U))));
    __Vtemp390[0U] = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA);
    __Vtemp390[1U] = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA 
                              >> 0x20U));
    __Vtemp390[2U] = (IData)((VL_ULL(0x7fffffffffffffff) 
                              & VL_NEGATE_Q((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA 
                                                                        >> 0x3fU))))))));
    __Vtemp390[3U] = (IData)(((VL_ULL(0x7fffffffffffffff) 
                               & VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA 
                                                                         >> 0x3fU))))))) 
                              >> 0x20U));
    VL_SHIFTL_WWI(127,127,6, __Vtemp391, __Vtemp390, 
                  (0x3fU & ((IData)(1U) + (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rB)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_9[0U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp391[0U] : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_7));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_9[1U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp391[1U] : (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_7 
                                        >> 0x20U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_9[2U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp391[2U] : (IData)((VL_ULL(0x7fffffffffffffff) 
                                        & VL_NEGATE_Q((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU)))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_9[3U] 
        = (0x7fffffffU & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                           ? __Vtemp391[3U] : (IData)(
                                                      ((VL_ULL(0x7fffffffffffffff) 
                                                        & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU))))))) 
                                                       >> 0x20U))));
    __Vtemp397[0U] = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA);
    __Vtemp397[1U] = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA 
                              >> 0x20U));
    __Vtemp397[2U] = (IData)((VL_ULL(0x7fffffffffffffff) 
                              & VL_NEGATE_Q((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA 
                                                                        >> 0x3fU))))))));
    __Vtemp397[3U] = (IData)(((VL_ULL(0x7fffffffffffffff) 
                               & VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA 
                                                                         >> 0x3fU))))))) 
                              >> 0x20U));
    VL_SHIFTL_WWI(127,127,6, __Vtemp398, __Vtemp397, 
                  (0x3fU & ((IData)(1U) + (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rB)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_9[0U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp398[0U] : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_7));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_9[1U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp398[1U] : (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_7 
                                        >> 0x20U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_9[2U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp398[2U] : (IData)((VL_ULL(0x7fffffffffffffff) 
                                        & VL_NEGATE_Q((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU)))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_9[3U] 
        = (0x7fffffffU & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                           ? __Vtemp398[3U] : (IData)(
                                                      ((VL_ULL(0x7fffffffffffffff) 
                                                        & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU))))))) 
                                                       >> 0x20U))));
    __Vtemp404[0U] = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA);
    __Vtemp404[1U] = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA 
                              >> 0x20U));
    __Vtemp404[2U] = (IData)((VL_ULL(0x7fffffffffffffff) 
                              & VL_NEGATE_Q((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA 
                                                                        >> 0x3fU))))))));
    __Vtemp404[3U] = (IData)(((VL_ULL(0x7fffffffffffffff) 
                               & VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA 
                                                                         >> 0x3fU))))))) 
                              >> 0x20U));
    VL_SHIFTL_WWI(127,127,6, __Vtemp405, __Vtemp404, 
                  (0x3fU & ((IData)(1U) + (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rB)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_9[0U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp405[0U] : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_7));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_9[1U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp405[1U] : (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_7 
                                        >> 0x20U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_9[2U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp405[2U] : (IData)((VL_ULL(0x7fffffffffffffff) 
                                        & VL_NEGATE_Q((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU)))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_9[3U] 
        = (0x7fffffffU & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                           ? __Vtemp405[3U] : (IData)(
                                                      ((VL_ULL(0x7fffffffffffffff) 
                                                        & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU))))))) 
                                                       >> 0x20U))));
    __Vtemp411[0U] = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA);
    __Vtemp411[1U] = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA 
                              >> 0x20U));
    __Vtemp411[2U] = (IData)((VL_ULL(0x7fffffffffffffff) 
                              & VL_NEGATE_Q((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA 
                                                                        >> 0x3fU))))))));
    __Vtemp411[3U] = (IData)(((VL_ULL(0x7fffffffffffffff) 
                               & VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA 
                                                                         >> 0x3fU))))))) 
                              >> 0x20U));
    VL_SHIFTL_WWI(127,127,6, __Vtemp412, __Vtemp411, 
                  (0x3fU & ((IData)(1U) + (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rB)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_9[0U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp412[0U] : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_7));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_9[1U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp412[1U] : (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_7 
                                        >> 0x20U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_9[2U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp412[2U] : (IData)((VL_ULL(0x7fffffffffffffff) 
                                        & VL_NEGATE_Q((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU)))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_9[3U] 
        = (0x7fffffffU & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                           ? __Vtemp412[3U] : (IData)(
                                                      ((VL_ULL(0x7fffffffffffffff) 
                                                        & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU))))))) 
                                                       >> 0x20U))));
    __Vtemp418[0U] = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA);
    __Vtemp418[1U] = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA 
                              >> 0x20U));
    __Vtemp418[2U] = (IData)((VL_ULL(0x7fffffffffffffff) 
                              & VL_NEGATE_Q((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA 
                                                                        >> 0x3fU))))))));
    __Vtemp418[3U] = (IData)(((VL_ULL(0x7fffffffffffffff) 
                               & VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA 
                                                                         >> 0x3fU))))))) 
                              >> 0x20U));
    VL_SHIFTL_WWI(127,127,6, __Vtemp419, __Vtemp418, 
                  (0x3fU & ((IData)(1U) + (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rB)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_9[0U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp419[0U] : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_7));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_9[1U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp419[1U] : (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_7 
                                        >> 0x20U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_9[2U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp419[2U] : (IData)((VL_ULL(0x7fffffffffffffff) 
                                        & VL_NEGATE_Q((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU)))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_9[3U] 
        = (0x7fffffffU & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                           ? __Vtemp419[3U] : (IData)(
                                                      ((VL_ULL(0x7fffffffffffffff) 
                                                        & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU))))))) 
                                                       >> 0x20U))));
    __Vtemp425[0U] = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA);
    __Vtemp425[1U] = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA 
                              >> 0x20U));
    __Vtemp425[2U] = (IData)((VL_ULL(0x7fffffffffffffff) 
                              & VL_NEGATE_Q((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA 
                                                                        >> 0x3fU))))))));
    __Vtemp425[3U] = (IData)(((VL_ULL(0x7fffffffffffffff) 
                               & VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA 
                                                                         >> 0x3fU))))))) 
                              >> 0x20U));
    VL_SHIFTL_WWI(127,127,6, __Vtemp426, __Vtemp425, 
                  (0x3fU & ((IData)(1U) + (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rB)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_9[0U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp426[0U] : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_7));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_9[1U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp426[1U] : (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_7 
                                        >> 0x20U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_9[2U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp426[2U] : (IData)((VL_ULL(0x7fffffffffffffff) 
                                        & VL_NEGATE_Q((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU)))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_9[3U] 
        = (0x7fffffffU & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                           ? __Vtemp426[3U] : (IData)(
                                                      ((VL_ULL(0x7fffffffffffffff) 
                                                        & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU))))))) 
                                                       >> 0x20U))));
    __Vtemp432[0U] = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA);
    __Vtemp432[1U] = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA 
                              >> 0x20U));
    __Vtemp432[2U] = (IData)((VL_ULL(0x7fffffffffffffff) 
                              & VL_NEGATE_Q((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA 
                                                                        >> 0x3fU))))))));
    __Vtemp432[3U] = (IData)(((VL_ULL(0x7fffffffffffffff) 
                               & VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA 
                                                                         >> 0x3fU))))))) 
                              >> 0x20U));
    VL_SHIFTL_WWI(127,127,6, __Vtemp433, __Vtemp432, 
                  (0x3fU & ((IData)(1U) + (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rB)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_9[0U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp433[0U] : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_7));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_9[1U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp433[1U] : (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_7 
                                        >> 0x20U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_9[2U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp433[2U] : (IData)((VL_ULL(0x7fffffffffffffff) 
                                        & VL_NEGATE_Q((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU)))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_9[3U] 
        = (0x7fffffffU & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                           ? __Vtemp433[3U] : (IData)(
                                                      ((VL_ULL(0x7fffffffffffffff) 
                                                        & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU))))))) 
                                                       >> 0x20U))));
    __Vtemp439[0U] = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA);
    __Vtemp439[1U] = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA 
                              >> 0x20U));
    __Vtemp439[2U] = (IData)((VL_ULL(0x7fffffffffffffff) 
                              & VL_NEGATE_Q((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA 
                                                                        >> 0x3fU))))))));
    __Vtemp439[3U] = (IData)(((VL_ULL(0x7fffffffffffffff) 
                               & VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA 
                                                                         >> 0x3fU))))))) 
                              >> 0x20U));
    VL_SHIFTL_WWI(127,127,6, __Vtemp440, __Vtemp439, 
                  (0x3fU & ((IData)(1U) + (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rB)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_9[0U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp440[0U] : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_7));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_9[1U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp440[1U] : (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_7 
                                        >> 0x20U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_9[2U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp440[2U] : (IData)((VL_ULL(0x7fffffffffffffff) 
                                        & VL_NEGATE_Q((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU)))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_9[3U] 
        = (0x7fffffffU & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                           ? __Vtemp440[3U] : (IData)(
                                                      ((VL_ULL(0x7fffffffffffffff) 
                                                        & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU))))))) 
                                                       >> 0x20U))));
    __Vtemp446[0U] = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA);
    __Vtemp446[1U] = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA 
                              >> 0x20U));
    __Vtemp446[2U] = (IData)((VL_ULL(0x7fffffffffffffff) 
                              & VL_NEGATE_Q((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA 
                                                                        >> 0x3fU))))))));
    __Vtemp446[3U] = (IData)(((VL_ULL(0x7fffffffffffffff) 
                               & VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA 
                                                                         >> 0x3fU))))))) 
                              >> 0x20U));
    VL_SHIFTL_WWI(127,127,6, __Vtemp447, __Vtemp446, 
                  (0x3fU & ((IData)(1U) + (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rB)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_9[0U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp447[0U] : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_7));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_9[1U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp447[1U] : (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_7 
                                        >> 0x20U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_9[2U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp447[2U] : (IData)((VL_ULL(0x7fffffffffffffff) 
                                        & VL_NEGATE_Q((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU)))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_9[3U] 
        = (0x7fffffffU & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                           ? __Vtemp447[3U] : (IData)(
                                                      ((VL_ULL(0x7fffffffffffffff) 
                                                        & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU))))))) 
                                                       >> 0x20U))));
    __Vtemp453[0U] = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA);
    __Vtemp453[1U] = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA 
                              >> 0x20U));
    __Vtemp453[2U] = (IData)((VL_ULL(0x7fffffffffffffff) 
                              & VL_NEGATE_Q((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA 
                                                                        >> 0x3fU))))))));
    __Vtemp453[3U] = (IData)(((VL_ULL(0x7fffffffffffffff) 
                               & VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA 
                                                                         >> 0x3fU))))))) 
                              >> 0x20U));
    VL_SHIFTL_WWI(127,127,6, __Vtemp454, __Vtemp453, 
                  (0x3fU & ((IData)(1U) + (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rB)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_9[0U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp454[0U] : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_7));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_9[1U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp454[1U] : (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_7 
                                        >> 0x20U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_9[2U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp454[2U] : (IData)((VL_ULL(0x7fffffffffffffff) 
                                        & VL_NEGATE_Q((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU)))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_9[3U] 
        = (0x7fffffffU & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                           ? __Vtemp454[3U] : (IData)(
                                                      ((VL_ULL(0x7fffffffffffffff) 
                                                        & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU))))))) 
                                                       >> 0x20U))));
    __Vtemp460[0U] = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA);
    __Vtemp460[1U] = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA 
                              >> 0x20U));
    __Vtemp460[2U] = (IData)((VL_ULL(0x7fffffffffffffff) 
                              & VL_NEGATE_Q((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA 
                                                                        >> 0x3fU))))))));
    __Vtemp460[3U] = (IData)(((VL_ULL(0x7fffffffffffffff) 
                               & VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA 
                                                                         >> 0x3fU))))))) 
                              >> 0x20U));
    VL_SHIFTL_WWI(127,127,6, __Vtemp461, __Vtemp460, 
                  (0x3fU & ((IData)(1U) + (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rB)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_9[0U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp461[0U] : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_7));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_9[1U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp461[1U] : (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_7 
                                        >> 0x20U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_9[2U] 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? __Vtemp461[2U] : (IData)((VL_ULL(0x7fffffffffffffff) 
                                        & VL_NEGATE_Q((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU)))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_9[3U] 
        = (0x7fffffffU & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                           ? __Vtemp461[3U] : (IData)(
                                                      ((VL_ULL(0x7fffffffffffffff) 
                                                        & VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x3fU))))))) 
                                                       >> 0x20U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_28 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_ack)
                ? ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))
                    ? (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__ycnt) 
                        == (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                       - (IData)(1U))))
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_bytes
                        : (0xfffU & ((IData)(0x800U) 
                                     - (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr))))
                    : (0xfffU & ((IData)(0x800U) - 
                                 (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr))))
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_bytes)
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_bytes);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_34 
        = (0x3ffffU & ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem)
                        : ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_ack)
                                ? ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))
                                    ? (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__ycnt) 
                                        == (0xffffU 
                                            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                               - (IData)(1U))))
                                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem)
                                        : (((0x3fffcU 
                                             & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                 << 0x12U) 
                                                | (0x3fffcU 
                                                   & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                      >> 0xeU)))) 
                                            < (0x1ffU 
                                               & (((IData)(0x800U) 
                                                   - 
                                                   (0x7ffU 
                                                    & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr)) 
                                                  >> 3U)))
                                            ? 0U : 
                                           ((0x3fffcU 
                                             & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                 << 0x12U) 
                                                | (0x3fffcU 
                                                   & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                      >> 0xeU)))) 
                                            - (0x1ffU 
                                               & (((IData)(0x800U) 
                                                   - 
                                                   (0x7ffU 
                                                    & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr)) 
                                                  >> 3U)))))
                                    : (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem) 
                                        < (0x1ffU & 
                                           (((IData)(0x800U) 
                                             - (0x7ffU 
                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr)) 
                                            >> 3U)))
                                        ? 0U : (0xffffU 
                                                & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem) 
                                                   - 
                                                   (0x1ffU 
                                                    & (((IData)(0x800U) 
                                                        - 
                                                        (0x7ffU 
                                                         & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr)) 
                                                       >> 3U))))))
                                : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))
                            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_33 
        = (0x3ffffU & ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen)
                        : ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_ack)
                                ? ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))
                                    ? (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__ycnt) 
                                        == (0xffffU 
                                            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                               - (IData)(1U))))
                                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen)
                                        : (((0x3fffcU 
                                             & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                 << 0x12U) 
                                                | (0x3fffcU 
                                                   & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                      >> 0xeU)))) 
                                            < (0x1ffU 
                                               & (((IData)(0x800U) 
                                                   - 
                                                   (0x7ffU 
                                                    & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr)) 
                                                  >> 3U)))
                                            ? ((0x3fffcU 
                                                & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                    << 0x12U) 
                                                   | (0x3fffcU 
                                                      & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                         >> 0xeU)))) 
                                               - (IData)(1U))
                                            : (0x1ffU 
                                               & ((0x1ffU 
                                                   & (((IData)(0x800U) 
                                                       - 
                                                       (0x7ffU 
                                                        & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr)) 
                                                      >> 3U)) 
                                                  - (IData)(1U)))))
                                    : (0xffffU & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem) 
                                                   < 
                                                   (0x1ffU 
                                                    & (((IData)(0x800U) 
                                                        - 
                                                        (0x7ffU 
                                                         & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr)) 
                                                       >> 3U)))
                                                   ? 
                                                  ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem) 
                                                   - (IData)(1U))
                                                   : 
                                                  (0x1ffU 
                                                   & ((0x1ffU 
                                                       & (((IData)(0x800U) 
                                                           - 
                                                           (0x7ffU 
                                                            & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr)) 
                                                          >> 3U)) 
                                                      - (IData)(1U))))))
                                : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen))
                            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT___GEN_3 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore_io_done)
            ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__do_deq 
        = ((((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state)) 
             & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore_io_done)) 
            | (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state))) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__empty)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_87 
        = ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr
            : (QData)((IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___stride_T_1) 
                                & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem)))
                                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__waddr_nxt
                                : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__stride)
                                    ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr
                                    : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__waddr_nxt)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_76 
        = (0xffffU & ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                       ? ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[1U] 
                           << 0x16U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                        >> 0xaU)) : 
                      ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_42) 
                         & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__set))) 
                        & (3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tag)))
                        ? (0x7ffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__raddr_cur)))
                        : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__stride)
                            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___raddr_cur_T_3)
                            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__raddr_cur)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_77 
        = (0xffffU & ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                       ? ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[1U] 
                           << 0x16U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                        >> 0xaU)) : 
                      ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_42) 
                         & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__set))) 
                        & (3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tag)))
                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__raddr_nxt)
                        : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__stride)
                            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___raddr_cur_T_3)
                            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__raddr_nxt)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_86 
        = ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr
            : (QData)((IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___stride_T_1) 
                                & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem)))
                                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr
                                : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__stride)
                                    ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr
                                    : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__waddr_cur)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___GEN_1 
        = (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG)) 
           | ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m_io_last)) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__done 
        = ((0x10U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_type)) 
           | ((8U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_type))
               ? ((~ ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state)) 
                      & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu_io_start_REG))) 
                  & ((~ ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state)) 
                         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_last))) 
                     & ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state)) 
                        & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__inflight)))))
               : ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_type))
                   ? ((~ ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
                          & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) 
                      & ((~ ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
                             & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m_io_last))) 
                         & ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
                            & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__inflight)))))
                   : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_type))
                       ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__loadDone) 
                          & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)))
                       : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_type)) 
                          & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__loadDone) 
                             & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___GEN_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start) 
           | ((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__loadDone) 
                  & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)))) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1_io_enq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___T_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___T));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__rMask 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_uop_idx_valid)
            ? (3U & ((IData)(1U) << (1U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_uop_idx_bits))))
            : 0U);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow 
        = ((((((((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                 | (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
                | (3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
               | (6U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3)) 
             | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpNarwLineEnd)) 
            & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid))) 
           | (5U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_23 
        = ((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid)) 
             & (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
               == (0xfU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                            >> 0x10U) - (IData)(1U))))) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_53 
        = ((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid)) 
             & (6U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
               == (0xffffU & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpLastDataRow_T_1) 
                               + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                          >> 0x14U))) 
                              - (IData)(1U))))) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdx 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdxValid)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__startIssueCmdRead)
                ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx) 
                   << 4U) : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext))
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4_io_enq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__stride 
        = (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb 
             == (0xfffffU & ((0xffff0U & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                           << 0x14U) 
                                          | (0xffff0U 
                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                >> 0xcU)))) 
                             - (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)))) 
            & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx) 
               != (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                              - (IData)(1U))))) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_18 
        = ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clReadIdx))
            ? (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clRemained) 
                < (0x1ffU & (((IData)(0x800U) - (0x7f8U 
                                                 & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineElemBeginAddr)) 
                             >> 3U))) ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clRemained)
                : (0x1ffU & (((IData)(0x800U) - (0x7f8U 
                                                 & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineElemBeginAddr)) 
                             >> 3U))) : ((0x100U > (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clRemained))
                                          ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clRemained)
                                          : 0x100U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_46 
        = (0x3ffffU & ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                        ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore_io_start)
                            ? (((0x3fffcU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                              << 0x12U) 
                                             | (0x3fffcU 
                                                & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                   >> 0xeU)))) 
                                < (0x1ffU & (((IData)(0x800U) 
                                              - (0x7ffU 
                                                 & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr))) 
                                             >> 3U)))
                                ? 0U : ((0x3fffcU & 
                                         ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                           << 0x12U) 
                                          | (0x3fffcU 
                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                >> 0xeU)))) 
                                        - (0x1ffU & 
                                           (((IData)(0x800U) 
                                             - (0x7ffU 
                                                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr))) 
                                            >> 3U))))
                            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))
                        : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem)
                            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem)
                                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_34))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_45 
        = (0x3ffffU & ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                        ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore_io_start)
                            ? (((0x3fffcU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                              << 0x12U) 
                                             | (0x3fffcU 
                                                & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                   >> 0xeU)))) 
                                < (0x1ffU & (((IData)(0x800U) 
                                              - (0x7ffU 
                                                 & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr))) 
                                             >> 3U)))
                                ? ((0x3fffcU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                 << 0x12U) 
                                                | (0x3fffcU 
                                                   & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                      >> 0xeU)))) 
                                   - (IData)(1U)) : 
                               (0x1ffU & ((0x1ffU & 
                                           (((IData)(0x800U) 
                                             - (0x7ffU 
                                                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr))) 
                                            >> 3U)) 
                                          - (IData)(1U))))
                            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen))
                        : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen)
                            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen)
                                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_33))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___GEN_3 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__done)
            ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___inst_q_io_deq_ready_T_3 
        = (((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__done)) 
           | (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute_io_finish 
        = (((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__done)) 
           & (0U == (3U ^ (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q_io_deq_ready 
        = (((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__done)) 
           | (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_15 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_53)
            ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpNewFillBlock 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start)) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_23) 
              | ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_40) 
                 | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_53))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_24 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start)
            ? ((((0U == (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                 >> 0x18U))) & (0U 
                                                != 
                                                (0xfU 
                                                 & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                    >> 0x1cU)))) 
                & (0U == (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                  >> 0x10U)))) ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1)
                : 0U) : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_23)
                          ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_2)
                              ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1)
                              : 0U) : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_40)
                                        ? ((0U != (0xfU 
                                                   & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                      >> 0x14U)))
                                            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx)
                                        : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_53)
                                            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_21 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14)
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__newReadRow));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_14 
        = (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start)
                       ? (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                            << 0x16U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                         >> 0xaU)) 
                          + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                     >> 0x18U))) : 
                      (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state) 
                        & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
                            < (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                       >> 0x10U))) 
                           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)))
                        ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx) 
                           + ((((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                 << 0x10U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                              >> 0x10U)) 
                               + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                          >> 0x18U))) 
                              + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                         >> 0x1cU))))
                        : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_23 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__xfer_init_addr
            : (QData)((IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14)
                                ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)
                                    ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__memRow
                                    : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddrRowBegin)
                                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddrRowBegin))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_6 
        = ((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start) 
               | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__stride))) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14)
               ? (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__nextBlRNb 
                    == (0xffff0U & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                     << 0x14U) | (0xffff0U 
                                                  & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                     >> 0xcU))))) 
                   & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx) 
                      == (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                     - (IData)(1U))))) 
                  | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone))
               : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_22 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__xfer_init_addr
            : (QData)((IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14)
                                ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)
                                    ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__memRow
                                    : (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr 
                                       + (0xff8U & 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10 
                                           << 3U))))
                                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___clInFlight_T_1 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__clInFlight) 
                     + (0x1ffU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_18))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdLineAddr_T_2 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineAddr 
           + (0xff8U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_18) 
                        << 3U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdTransactionTensNb 
        = (0x3ffU & ((0x3feU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_18) 
                                << 1U)) - (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmd1stPluseOffsetTensNb)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__nextClIdx 
        = (0x7fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clReadIdx) 
                      + (0x1ffU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_18))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___T_28 
        = (0x7fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineClNb) 
                      - (0x1ffU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_18))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___countNext_T_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q_io_deq_ready) 
           & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_deq 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q_io_deq_ready) 
           & (~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ptr_match) 
                 & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__maybe_full)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdCmdDestElemIdxNext_T_3 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdDestElemIdxNext) 
                     + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdTransactionTensNb)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__stride 
        = ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clReadIdx) 
             == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___T_28)) 
            & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__dramLineIdx) 
               != (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                              - (IData)(1U))))) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_updateState));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_22 
        = (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start)
                       ? (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                            << 0x16U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                         >> 0xaU)) 
                          + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                     >> 0x18U))) : 
                      (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state) 
                        & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__currentRowIdx 
                            < (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                       >> 0x10U))) 
                           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__stride)))
                        ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdStartIdx) 
                           + ((((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                 << 0x10U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                              >> 0x10U)) 
                               + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                          >> 0x18U))) 
                              + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                         >> 0x1cU))))
                        : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdStartIdx))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_11 
        = ((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start) 
               | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__stride))) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_updateState)
               ? ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__nextClIdx) 
                    == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineClNb)) 
                   & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__dramLineIdx) 
                      == (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                     - (IData)(1U))))) 
                  | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__commandsDone))
               : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__commandsDone)));
}

VL_INLINE_OPT void VTest::_sequent__TOP__5(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_sequent__TOP__5\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp485[8];
    IData/*31:0*/ __Vilp;
    // Body
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_0 
        = (((QData)((IData)((0x7ffffffU & VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (VL_ULL(1) 
                                                                          & ((VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0.__PVT__a_2_0__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0.__PVT__a_2_0__DOT__rB)))) 
                                                                              + 
                                                                              VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0.__PVT__a_2_1__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0.__PVT__a_2_1__DOT__rB))))) 
                                                                             >> 0x24U))))))))) 
            << 0x25U) | (VL_ULL(0x1fffffffff) & (VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0.__PVT__a_2_0__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0.__PVT__a_2_0__DOT__rB)))) 
                                                 + 
                                                 VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0.__PVT__a_2_1__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_1 
        = (((QData)((IData)((0x7ffffffU & VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (VL_ULL(1) 
                                                                          & ((VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1.__PVT__a_2_0__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1.__PVT__a_2_0__DOT__rB)))) 
                                                                              + 
                                                                              VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1.__PVT__a_2_1__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1.__PVT__a_2_1__DOT__rB))))) 
                                                                             >> 0x24U))))))))) 
            << 0x25U) | (VL_ULL(0x1fffffffff) & (VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1.__PVT__a_2_0__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1.__PVT__a_2_0__DOT__rB)))) 
                                                 + 
                                                 VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1.__PVT__a_2_1__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_2 
        = (((QData)((IData)((0x7ffffffU & VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (VL_ULL(1) 
                                                                          & ((VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2.__PVT__a_2_0__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2.__PVT__a_2_0__DOT__rB)))) 
                                                                              + 
                                                                              VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2.__PVT__a_2_1__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2.__PVT__a_2_1__DOT__rB))))) 
                                                                             >> 0x24U))))))))) 
            << 0x25U) | (VL_ULL(0x1fffffffff) & (VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2.__PVT__a_2_0__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2.__PVT__a_2_0__DOT__rB)))) 
                                                 + 
                                                 VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2.__PVT__a_2_1__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_3 
        = (((QData)((IData)((0x7ffffffU & VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (VL_ULL(1) 
                                                                          & ((VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3.__PVT__a_2_0__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3.__PVT__a_2_0__DOT__rB)))) 
                                                                              + 
                                                                              VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3.__PVT__a_2_1__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3.__PVT__a_2_1__DOT__rB))))) 
                                                                             >> 0x24U))))))))) 
            << 0x25U) | (VL_ULL(0x1fffffffff) & (VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3.__PVT__a_2_0__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3.__PVT__a_2_0__DOT__rB)))) 
                                                 + 
                                                 VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3.__PVT__a_2_1__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_4 
        = (((QData)((IData)((0x7ffffffU & VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (VL_ULL(1) 
                                                                          & ((VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4.__PVT__a_2_0__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4.__PVT__a_2_0__DOT__rB)))) 
                                                                              + 
                                                                              VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4.__PVT__a_2_1__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4.__PVT__a_2_1__DOT__rB))))) 
                                                                             >> 0x24U))))))))) 
            << 0x25U) | (VL_ULL(0x1fffffffff) & (VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4.__PVT__a_2_0__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4.__PVT__a_2_0__DOT__rB)))) 
                                                 + 
                                                 VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4.__PVT__a_2_1__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_5 
        = (((QData)((IData)((0x7ffffffU & VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (VL_ULL(1) 
                                                                          & ((VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5.__PVT__a_2_0__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5.__PVT__a_2_0__DOT__rB)))) 
                                                                              + 
                                                                              VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5.__PVT__a_2_1__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5.__PVT__a_2_1__DOT__rB))))) 
                                                                             >> 0x24U))))))))) 
            << 0x25U) | (VL_ULL(0x1fffffffff) & (VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5.__PVT__a_2_0__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5.__PVT__a_2_0__DOT__rB)))) 
                                                 + 
                                                 VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5.__PVT__a_2_1__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_6 
        = (((QData)((IData)((0x7ffffffU & VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (VL_ULL(1) 
                                                                          & ((VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6.__PVT__a_2_0__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6.__PVT__a_2_0__DOT__rB)))) 
                                                                              + 
                                                                              VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6.__PVT__a_2_1__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6.__PVT__a_2_1__DOT__rB))))) 
                                                                             >> 0x24U))))))))) 
            << 0x25U) | (VL_ULL(0x1fffffffff) & (VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6.__PVT__a_2_0__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6.__PVT__a_2_0__DOT__rB)))) 
                                                 + 
                                                 VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6.__PVT__a_2_1__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_7 
        = (((QData)((IData)((0x7ffffffU & VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (VL_ULL(1) 
                                                                          & ((VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7.__PVT__a_2_0__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7.__PVT__a_2_0__DOT__rB)))) 
                                                                              + 
                                                                              VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7.__PVT__a_2_1__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7.__PVT__a_2_1__DOT__rB))))) 
                                                                             >> 0x24U))))))))) 
            << 0x25U) | (VL_ULL(0x1fffffffff) & (VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7.__PVT__a_2_0__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7.__PVT__a_2_0__DOT__rB)))) 
                                                 + 
                                                 VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7.__PVT__a_2_1__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_8 
        = (((QData)((IData)((0x7ffffffU & VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (VL_ULL(1) 
                                                                          & ((VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8.__PVT__a_2_0__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8.__PVT__a_2_0__DOT__rB)))) 
                                                                              + 
                                                                              VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8.__PVT__a_2_1__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8.__PVT__a_2_1__DOT__rB))))) 
                                                                             >> 0x24U))))))))) 
            << 0x25U) | (VL_ULL(0x1fffffffff) & (VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8.__PVT__a_2_0__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8.__PVT__a_2_0__DOT__rB)))) 
                                                 + 
                                                 VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8.__PVT__a_2_1__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_9 
        = (((QData)((IData)((0x7ffffffU & VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (VL_ULL(1) 
                                                                          & ((VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9.__PVT__a_2_0__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9.__PVT__a_2_0__DOT__rB)))) 
                                                                              + 
                                                                              VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9.__PVT__a_2_1__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9.__PVT__a_2_1__DOT__rB))))) 
                                                                             >> 0x24U))))))))) 
            << 0x25U) | (VL_ULL(0x1fffffffff) & (VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9.__PVT__a_2_0__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9.__PVT__a_2_0__DOT__rB)))) 
                                                 + 
                                                 VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9.__PVT__a_2_1__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_10 
        = (((QData)((IData)((0x7ffffffU & VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (VL_ULL(1) 
                                                                          & ((VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10.__PVT__a_2_0__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10.__PVT__a_2_0__DOT__rB)))) 
                                                                              + 
                                                                              VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10.__PVT__a_2_1__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10.__PVT__a_2_1__DOT__rB))))) 
                                                                             >> 0x24U))))))))) 
            << 0x25U) | (VL_ULL(0x1fffffffff) & (VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10.__PVT__a_2_0__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10.__PVT__a_2_0__DOT__rB)))) 
                                                 + 
                                                 VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10.__PVT__a_2_1__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_11 
        = (((QData)((IData)((0x7ffffffU & VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (VL_ULL(1) 
                                                                          & ((VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11.__PVT__a_2_0__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11.__PVT__a_2_0__DOT__rB)))) 
                                                                              + 
                                                                              VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11.__PVT__a_2_1__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11.__PVT__a_2_1__DOT__rB))))) 
                                                                             >> 0x24U))))))))) 
            << 0x25U) | (VL_ULL(0x1fffffffff) & (VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11.__PVT__a_2_0__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11.__PVT__a_2_0__DOT__rB)))) 
                                                 + 
                                                 VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11.__PVT__a_2_1__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_12 
        = (((QData)((IData)((0x7ffffffU & VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (VL_ULL(1) 
                                                                          & ((VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12.__PVT__a_2_0__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12.__PVT__a_2_0__DOT__rB)))) 
                                                                              + 
                                                                              VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12.__PVT__a_2_1__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12.__PVT__a_2_1__DOT__rB))))) 
                                                                             >> 0x24U))))))))) 
            << 0x25U) | (VL_ULL(0x1fffffffff) & (VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12.__PVT__a_2_0__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12.__PVT__a_2_0__DOT__rB)))) 
                                                 + 
                                                 VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12.__PVT__a_2_1__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_13 
        = (((QData)((IData)((0x7ffffffU & VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (VL_ULL(1) 
                                                                          & ((VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13.__PVT__a_2_0__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13.__PVT__a_2_0__DOT__rB)))) 
                                                                              + 
                                                                              VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13.__PVT__a_2_1__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13.__PVT__a_2_1__DOT__rB))))) 
                                                                             >> 0x24U))))))))) 
            << 0x25U) | (VL_ULL(0x1fffffffff) & (VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13.__PVT__a_2_0__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13.__PVT__a_2_0__DOT__rB)))) 
                                                 + 
                                                 VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13.__PVT__a_2_1__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_14 
        = (((QData)((IData)((0x7ffffffU & VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (VL_ULL(1) 
                                                                          & ((VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14.__PVT__a_2_0__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14.__PVT__a_2_0__DOT__rB)))) 
                                                                              + 
                                                                              VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14.__PVT__a_2_1__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14.__PVT__a_2_1__DOT__rB))))) 
                                                                             >> 0x24U))))))))) 
            << 0x25U) | (VL_ULL(0x1fffffffff) & (VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14.__PVT__a_2_0__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14.__PVT__a_2_0__DOT__rB)))) 
                                                 + 
                                                 VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14.__PVT__a_2_1__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14.__PVT__a_2_1__DOT__rB)))))));
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[__Vilp] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__lo[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x40U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x41U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x42U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x43U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x44U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[4U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x45U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[5U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x46U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[6U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x47U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[7U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x48U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[8U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x49U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[9U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4aU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0xaU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4bU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0xbU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4cU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0xcU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4dU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0xdU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4eU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0xeU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x4fU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0xfU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x50U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x10U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x51U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x11U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x52U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x12U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x53U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x13U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x54U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x14U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x55U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x15U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x56U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x16U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x57U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x17U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x58U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x18U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x59U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x19U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5aU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x1aU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5bU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x1bU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5cU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x1cU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5dU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x1dU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5eU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x1eU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x5fU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x1fU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x60U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x20U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x61U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x21U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x62U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x22U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x63U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x23U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x64U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x24U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x65U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x25U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x66U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x26U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x67U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x27U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x68U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x28U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x69U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x29U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6aU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x2aU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6bU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x2bU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6cU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x2cU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6dU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x2dU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6eU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x2eU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x6fU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x2fU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x70U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x30U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x71U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x31U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x72U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x32U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x73U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x33U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x74U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x34U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x75U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x35U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x76U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x36U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x77U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x37U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x78U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x38U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x79U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x39U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7aU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x3aU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7bU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x3bU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7cU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x3cU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7dU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x3dU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7eU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x3eU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_148[0x7fU] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__hi[0x3fU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[0U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0_MPORT_4_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[1U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0_MPORT_4_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[2U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1_MPORT_5_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[3U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1_MPORT_5_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[4U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_2
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_2_MPORT_6_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[5U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_2
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_2_MPORT_6_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[6U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_3
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_3_MPORT_7_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_28[7U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_3
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_3_MPORT_7_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_15 
        = (((QData)((IData)((0x7ffffffU & VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (VL_ULL(1) 
                                                                          & ((VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15.__PVT__a_2_0__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15.__PVT__a_2_0__DOT__rB)))) 
                                                                              + 
                                                                              VL_EXTENDS_QQ(37,36, 
                                                                                (VL_ULL(0xfffffffff) 
                                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15.__PVT__a_2_1__DOT__rA) 
                                                                                + 
                                                                                VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15.__PVT__a_2_1__DOT__rB))))) 
                                                                             >> 0x24U))))))))) 
            << 0x25U) | (VL_ULL(0x1fffffffff) & (VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15.__PVT__a_2_0__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15.__PVT__a_2_0__DOT__rB)))) 
                                                 + 
                                                 VL_EXTENDS_QQ(37,36, 
                                                               (VL_ULL(0xfffffffff) 
                                                                & (VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15.__PVT__a_2_1__DOT__rA) 
                                                                   + 
                                                                   VL_EXTENDS_QQ(36,35, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_0 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_1 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_1 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_2 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_2 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_3 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_3 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_4 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_4 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_4);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_5 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_5 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_6 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_6 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_6);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_7 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_7 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_7);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_8 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_8 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_8);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_9 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_9 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_9);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_10 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_10 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_10);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_11 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_11 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_11);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_12 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_12 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_12);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_13 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_13 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_13);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_14 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_14 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_14);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_15 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_15 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_15);
    __Vtemp485[6U] = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0_REG)
                       ? (IData)((((QData)((IData)(
                                                   ((0xffff0000U 
                                                     & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_15) 
                                                         + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_15)) 
                                                        << 0x10U)) 
                                                    | (0xffffU 
                                                       & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_14) 
                                                          + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_14)))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((0xffff0000U 
                                                                 & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_13) 
                                                                     + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_13)) 
                                                                    << 0x10U)) 
                                                                | (0xffffU 
                                                                   & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_12) 
                                                                      + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_12))))))))
                       : (IData)((((QData)((IData)(
                                                   ((0xffff0000U 
                                                     & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_9[0U] 
                                                        << 0x10U)) 
                                                    | (0xffffU 
                                                       & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_9[0U])))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((0xffff0000U 
                                                                 & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_9[0U] 
                                                                    << 0x10U)) 
                                                                | (0xffffU 
                                                                   & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_9[0U])))))));
    __Vtemp485[7U] = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0_REG)
                       ? (IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_15) 
                                                          + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_15)) 
                                                         << 0x10U)) 
                                                     | (0xffffU 
                                                        & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_14) 
                                                           + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_14)))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_13) 
                                                                      + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_13)) 
                                                                     << 0x10U)) 
                                                                 | (0xffffU 
                                                                    & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_12) 
                                                                       + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_12))))))) 
                                  >> 0x20U)) : (IData)(
                                                       ((((QData)((IData)(
                                                                          ((0xffff0000U 
                                                                            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_9[0U] 
                                                                               << 0x10U)) 
                                                                           | (0xffffU 
                                                                              & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_9[0U])))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((0xffff0000U 
                                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_9[0U] 
                                                                                << 0x10U)) 
                                                                            | (0xffffU 
                                                                               & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_9[0U]))))) 
                                                        >> 0x20U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0[0U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0_REG)
            ? ((0xffff0000U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_1) 
                                + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_1)) 
                               << 0x10U)) | (0xffffU 
                                             & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp) 
                                                + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_0))))
            : ((0xffff0000U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_9[0U] 
                               << 0x10U)) | (0xffffU 
                                             & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_9[0U])));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0[1U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0_REG)
            ? ((0xffff0000U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_3) 
                                + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_3)) 
                               << 0x10U)) | (0xffffU 
                                             & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_2) 
                                                + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_2))))
            : ((0xffff0000U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_9[0U] 
                               << 0x10U)) | (0xffffU 
                                             & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_9[0U])));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0[2U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0_REG)
            ? ((0xffff0000U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_5) 
                                + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_5)) 
                               << 0x10U)) | (0xffffU 
                                             & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_4) 
                                                + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_4))))
            : ((0xffff0000U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_9[0U] 
                               << 0x10U)) | (0xffffU 
                                             & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_9[0U])));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0[3U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0_REG)
            ? ((0xffff0000U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_7) 
                                + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_7)) 
                               << 0x10U)) | (0xffffU 
                                             & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_6) 
                                                + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_6))))
            : ((0xffff0000U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_9[0U] 
                               << 0x10U)) | (0xffffU 
                                             & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_9[0U])));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0[4U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0_REG)
            ? ((0xffff0000U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_9) 
                                + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_9)) 
                               << 0x10U)) | (0xffffU 
                                             & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_8) 
                                                + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_8))))
            : ((0xffff0000U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_9[0U] 
                               << 0x10U)) | (0xffffU 
                                             & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_9[0U])));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0[5U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0_REG)
            ? ((0xffff0000U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_11) 
                                + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_11)) 
                               << 0x10U)) | (0xffffU 
                                             & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_10) 
                                                + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_10))))
            : ((0xffff0000U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_9[0U] 
                               << 0x10U)) | (0xffffU 
                                             & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_9[0U])));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0[6U] 
        = __Vtemp485[6U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0[7U] 
        = __Vtemp485[7U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0U] 
        = (IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                        ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_0)
                    : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_9[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_9[0U])))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[1U] 
        = (IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                     ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                         ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_0)
                     : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_9[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_9[0U])))) 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[2U] 
        = (IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                        ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_1)
                    : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_9[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_9[0U])))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[3U] 
        = (IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                     ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                         ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_1)
                     : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_9[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_9[0U])))) 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[4U] 
        = (IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                        ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_2)
                    : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_9[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_9[0U])))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[5U] 
        = (IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                     ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                         ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_2)
                     : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_9[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_9[0U])))) 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[6U] 
        = (IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                        ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_3)
                    : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_9[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_9[0U])))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[7U] 
        = (IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                     ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                         ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_3)
                     : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_9[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_9[0U])))) 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[8U] 
        = (IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                        ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_4)
                    : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_9[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_9[0U])))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[9U] 
        = (IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                     ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                         ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_4)
                     : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_9[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_9[0U])))) 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xaU] 
        = (IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                        ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_5)
                    : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_9[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_9[0U])))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xbU] 
        = (IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                     ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                         ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_5)
                     : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_9[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_9[0U])))) 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xcU] 
        = (IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                        ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_6)
                    : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_9[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_9[0U])))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xdU] 
        = (IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                     ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                         ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_6)
                     : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_9[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_9[0U])))) 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xeU] 
        = (IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                        ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_7)
                    : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_9[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_9[0U])))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xfU] 
        = (IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                     ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                         ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_7)
                     : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_9[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_9[0U])))) 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0x10U] 
        = (IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                        ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_8)
                    : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_9[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_9[0U])))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0x11U] 
        = (IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                     ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                         ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_8)
                     : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_9[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_9[0U])))) 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0x12U] 
        = (IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                        ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_9)
                    : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_9[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_9[0U])))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0x13U] 
        = (IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                     ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                         ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_9)
                     : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_9[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_9[0U])))) 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0x14U] 
        = (IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                        ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_10)
                    : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_9[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_9[0U])))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0x15U] 
        = (IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                     ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                         ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_10)
                     : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_9[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_9[0U])))) 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0x16U] 
        = (IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                        ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_11)
                    : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_9[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_9[0U])))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0x17U] 
        = (IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                     ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                         ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_11)
                     : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_9[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_9[0U])))) 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0x18U] 
        = (IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                        ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_12)
                    : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_9[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_9[0U])))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0x19U] 
        = (IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                     ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                         ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_12)
                     : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_9[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_9[0U])))) 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0x1aU] 
        = (IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                        ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_13)
                    : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_9[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_9[0U])))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0x1bU] 
        = (IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                     ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                         ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_13)
                     : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_9[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_9[0U])))) 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0x1cU] 
        = (IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                        ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_14)
                    : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_9[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_9[0U])))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0x1dU] 
        = (IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                     ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                         ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_14)
                     : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_9[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_9[0U])))) 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0x1eU] 
        = (IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                        ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_15)
                    : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_9[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_9[0U])))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0x1fU] 
        = (IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                     ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                         ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_15)
                     : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_9[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_9[0U])))) 
                   >> 0x20U));
}

VL_INLINE_OPT void VTest::_sequent__TOP__6(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_sequent__TOP__6\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vtask_Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__VTASimDPI__0__sim_wait;
    CData/*7:0*/ __Vtask_Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__VTASimDPI__0__sim_exit;
    // Body
    if (VL_UNLIKELY((1U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Fexit)))) {
        VL_FINISH_MT("/mnt/e/_AI/tvm/3rdparty/vta-hw/build/chisel/VTASimDPI.v", 74, "");
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Freset))) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Fwait = 0U;
        vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Fexit = 0U;
    } else {
        vlTOPp->__Vdpiimwrap_Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__VTASimDPI_TOP(__Vtask_Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__VTASimDPI__0__sim_wait, __Vtask_Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__VTASimDPI__0__sim_exit);
        vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Fwait 
            = __Vtask_Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__VTASimDPI__0__sim_wait;
        vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Fexit 
            = __Vtask_Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__VTASimDPI__0__sim_exit;
    }
    vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__wait_reg 
        = ((~ ((IData)(vlTOPp->reset) | (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Freset))) 
           & (1U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Fwait)));
    vlTOPp->sim_wait = vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__wait_reg;
    vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Freset 
        = vlTOPp->reset;
}

VL_INLINE_OPT void VTest::_combo__TOP__8(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_combo__TOP__8\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___availableEntriesNext_T 
        = (((IData)(vlTOPp->reset) ? 0U : (((0xfU == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                            << 0xfU) 
                                           | (((0xeU 
                                                == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                               << 0xeU) 
                                              | (((0xdU 
                                                   == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                  << 0xdU) 
                                                 | (((0xcU 
                                                      == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                     << 0xcU) 
                                                    | (((0xbU 
                                                         == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                        << 0xbU) 
                                                       | (((0xaU 
                                                            == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                           << 0xaU) 
                                                          | (((9U 
                                                               == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                              << 9U) 
                                                             | (((8U 
                                                                  == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                                 << 8U) 
                                                                | (((7U 
                                                                     == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                                    << 7U) 
                                                                   | (((6U 
                                                                        == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                                       << 6U) 
                                                                      | (((5U 
                                                                           == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                                          << 5U) 
                                                                         | (((4U 
                                                                              == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                                             << 4U) 
                                                                            | (((3U 
                                                                                == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                                                << 3U) 
                                                                               | (((2U 
                                                                                == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)))))))))))))))))) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries));
}

void VTest::_eval(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_eval\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0__17(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1__18(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2__19(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3__20(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4__21(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5__22(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6__23(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7__24(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8__25(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9__26(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10__27(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11__28(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12__29(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13__30(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14__31(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15__32(vlSymsp);
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if (((IData)(vlTOPp->sim_clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__sim_clock)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__sim_clock = vlTOPp->sim_clock;
}

VL_INLINE_OPT QData VTest::_change_request(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_change_request\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VTest::_change_request_1(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_change_request_1\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTest::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((sim_clock & 0xfeU))) {
        Verilated::overWidthError("sim_clock");}
}
#endif  // VL_DEBUG

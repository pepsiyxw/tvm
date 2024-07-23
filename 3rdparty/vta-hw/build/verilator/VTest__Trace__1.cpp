// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTest__Syms.h"


void VTest::traceChgThis__4(VTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+37913,(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_valid));
        vcdp->chgQuad(c+37921,(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_data),64);
        vcdp->chgBus(c+37937,(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id),8);
        vcdp->chgBit(c+37945,(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi_dpi_req_valid));
        vcdp->chgBit(c+37953,(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi_dpi_req_opcode));
        vcdp->chgBus(c+37961,(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi_dpi_req_addr),8);
        vcdp->chgBus(c+37969,(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi_dpi_req_value),32);
        vcdp->chgBus(c+37977,(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT__i),32);
        vcdp->chgBus(c+37985,((((7U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                << 7U) | (((6U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                           << 6U) | 
                                          (((5U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
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
                                                          == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)))))))))),8);
    }
}

void VTest::traceChgThis__5(VTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+37993,(vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__wait_reg));
    }
}

void VTest::traceChgThis__6(VTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+38001,(vlTOPp->clock));
        vcdp->chgBit(c+38009,(vlTOPp->reset));
        vcdp->chgBit(c+38017,(vlTOPp->sim_clock));
        vcdp->chgBit(c+38025,(vlTOPp->sim_wait));
        vcdp->chgBus(c+38033,(((IData)(vlTOPp->reset)
                                ? 0U : (((0xfU == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                         << 0xfU) | 
                                        (((0xeU == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
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
                                                                                == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id))))))))))))))))))),16);
    }
}

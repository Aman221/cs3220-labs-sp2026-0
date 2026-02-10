// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vadder_var_seq__Syms.h"


void Vadder_var_seq___024root__trace_chg_0_sub_0(Vadder_var_seq___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vadder_var_seq___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root__trace_chg_0\n"); );
    // Body
    Vadder_var_seq___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadder_var_seq___024root*>(voidSelf);
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vadder_var_seq___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vadder_var_seq___024root__trace_chg_0_sub_0(Vadder_var_seq___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root__trace_chg_0_sub_0\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_n));
    bufp->chgIData(oldp+2,(vlSelfRef.i_data),32);
    bufp->chgCData(oldp+3,(vlSelfRef.i_valid),2);
    bufp->chgIData(oldp+4,(vlSelfRef.o_data),17);
    bufp->chgBit(oldp+5,(vlSelfRef.o_valid));
    bufp->chgBit(oldp+6,(vlSelfRef.i_en));
    bufp->chgBit(oldp+7,(vlSelfRef.adder_var_seq__DOT__calcuate_en));
    bufp->chgIData(oldp+8,(vlSelfRef.adder_var_seq__DOT__o_data_inner),17);
    bufp->chgBit(oldp+9,(vlSelfRef.adder_var_seq__DOT__o_valid_inner));
    bufp->chgIData(oldp+10,(((0x00010000U & (vlSelfRef.i_data 
                                             << 1U)) 
                             | (0x0000ffffU & vlSelfRef.i_data))),17);
    bufp->chgIData(oldp+11,(((0x00010000U & (vlSelfRef.i_data 
                                             >> 0x0000000fU)) 
                             | (vlSelfRef.i_data >> 0x00000010U))),17);
}

void Vadder_var_seq___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vadder_var_seq___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadder_var_seq___024root*>(voidSelf);
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}

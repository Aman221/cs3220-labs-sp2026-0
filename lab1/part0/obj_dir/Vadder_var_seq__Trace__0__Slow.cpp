// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vadder_var_seq__Syms.h"


VL_ATTR_COLD void Vadder_var_seq___024root__trace_init_sub__TOP__0(Vadder_var_seq___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root__trace_init_sub__TOP__0\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"i_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+6,0,"o_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("adder_var_seq", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"i_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+6,0,"o_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"calcuate_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"o_data_inner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+10,0,"o_valid_inner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"i_data_extend0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+12,0,"i_data_extend1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vadder_var_seq___024root__trace_init_top(Vadder_var_seq___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root__trace_init_top\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vadder_var_seq___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vadder_var_seq___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vadder_var_seq___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vadder_var_seq___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vadder_var_seq___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vadder_var_seq___024root__trace_register(Vadder_var_seq___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root__trace_register\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vadder_var_seq___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vadder_var_seq___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vadder_var_seq___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vadder_var_seq___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vadder_var_seq___024root__trace_const_0_sub_0(Vadder_var_seq___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vadder_var_seq___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root__trace_const_0\n"); );
    // Body
    Vadder_var_seq___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadder_var_seq___024root*>(voidSelf);
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vadder_var_seq___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vadder_var_seq___024root__trace_const_0_sub_0(Vadder_var_seq___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root__trace_const_0_sub_0\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+13,(0x00000010U),32);
}

VL_ATTR_COLD void Vadder_var_seq___024root__trace_full_0_sub_0(Vadder_var_seq___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vadder_var_seq___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root__trace_full_0\n"); );
    // Body
    Vadder_var_seq___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadder_var_seq___024root*>(voidSelf);
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vadder_var_seq___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vadder_var_seq___024root__trace_full_0_sub_0(Vadder_var_seq___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root__trace_full_0_sub_0\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst_n));
    bufp->fullIData(oldp+3,(vlSelfRef.i_data),32);
    bufp->fullCData(oldp+4,(vlSelfRef.i_valid),2);
    bufp->fullIData(oldp+5,(vlSelfRef.o_data),17);
    bufp->fullBit(oldp+6,(vlSelfRef.o_valid));
    bufp->fullBit(oldp+7,(vlSelfRef.i_en));
    bufp->fullBit(oldp+8,(vlSelfRef.adder_var_seq__DOT__calcuate_en));
    bufp->fullIData(oldp+9,(vlSelfRef.adder_var_seq__DOT__o_data_inner),17);
    bufp->fullBit(oldp+10,(vlSelfRef.adder_var_seq__DOT__o_valid_inner));
    bufp->fullIData(oldp+11,(((0x00010000U & (vlSelfRef.i_data 
                                              << 1U)) 
                              | (0x0000ffffU & vlSelfRef.i_data))),17);
    bufp->fullIData(oldp+12,(((0x00010000U & (vlSelfRef.i_data 
                                              >> 0x0000000fU)) 
                              | (vlSelfRef.i_data >> 0x00000010U))),17);
}

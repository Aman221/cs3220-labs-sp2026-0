// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder_var_seq.h for the primary calling header

#include "Vadder_var_seq__pch.h"

VL_ATTR_COLD void Vadder_var_seq___024root___eval_static(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___eval_static\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vadder_var_seq___024root___eval_initial(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___eval_initial\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vadder_var_seq___024root___eval_final(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___eval_final\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_var_seq___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vadder_var_seq___024root___eval_phase__stl(Vadder_var_seq___024root* vlSelf);

VL_ATTR_COLD void Vadder_var_seq___024root___eval_settle(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___eval_settle\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vadder_var_seq___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("adder_var_seq.v", 29, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vadder_var_seq___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vadder_var_seq___024root___eval_triggers__stl(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___eval_triggers__stl\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vadder_var_seq___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vadder_var_seq___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_var_seq___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vadder_var_seq___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vadder_var_seq___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vadder_var_seq___024root___stl_sequent__TOP__0(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___stl_sequent__TOP__0\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.o_valid = vlSelfRef.adder_var_seq__DOT__o_valid_inner;
    vlSelfRef.o_data = vlSelfRef.adder_var_seq__DOT__o_data_inner;
    vlSelfRef.adder_var_seq__DOT__calcuate_en = (IData)(
                                                        ((3U 
                                                          == (IData)(vlSelfRef.i_valid)) 
                                                         & (IData)(vlSelfRef.i_en)));
}

VL_ATTR_COLD void Vadder_var_seq___024root___eval_stl(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___eval_stl\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vadder_var_seq___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vadder_var_seq___024root___eval_phase__stl(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___eval_phase__stl\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vadder_var_seq___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vadder_var_seq___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vadder_var_seq___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vadder_var_seq___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_var_seq___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vadder_var_seq___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vadder_var_seq___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_var_seq___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vadder_var_seq___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vadder_var_seq___024root___ctor_var_reset(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___ctor_var_reset\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->i_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14277088208913718679ull);
    vlSelf->i_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9289791593721341457ull);
    vlSelf->o_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4641758573637973826ull);
    vlSelf->o_data = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7774304367285062135ull);
    vlSelf->i_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7318020981975158870ull);
    vlSelf->adder_var_seq__DOT__calcuate_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6835356911980026529ull);
    vlSelf->adder_var_seq__DOT__o_data_inner = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16486413526045731981ull);
    vlSelf->adder_var_seq__DOT__o_valid_inner = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1235403785575418988ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}

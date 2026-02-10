// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder_var_seq.h for the primary calling header

#include "Vadder_var_seq__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_var_seq___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vadder_var_seq___024root___eval_triggers__ico(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___eval_triggers__ico\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vadder_var_seq___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vadder_var_seq___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___trigger_anySet__ico\n"); );
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

void Vadder_var_seq___024root___ico_sequent__TOP__0(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___ico_sequent__TOP__0\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.adder_var_seq__DOT__calcuate_en = (IData)(
                                                        ((3U 
                                                          == (IData)(vlSelfRef.i_valid)) 
                                                         & (IData)(vlSelfRef.i_en)));
}

void Vadder_var_seq___024root___eval_ico(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___eval_ico\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vadder_var_seq___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vadder_var_seq___024root___eval_phase__ico(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___eval_phase__ico\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vadder_var_seq___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vadder_var_seq___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vadder_var_seq___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_var_seq___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vadder_var_seq___024root___eval_triggers__act(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___eval_triggers__act\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.rst_n)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vadder_var_seq___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vadder_var_seq___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___trigger_anySet__act\n"); );
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

void Vadder_var_seq___024root___nba_sequent__TOP__0(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___nba_sequent__TOP__0\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.adder_var_seq__DOT__o_valid_inner = ((IData)(vlSelfRef.rst_n) 
                                                   && ((IData)(vlSelfRef.i_en) 
                                                       && (IData)(vlSelfRef.adder_var_seq__DOT__calcuate_en)));
    vlSelfRef.adder_var_seq__DOT__o_data_inner = ((IData)(vlSelfRef.rst_n)
                                                   ? 
                                                  ((IData)(vlSelfRef.i_en)
                                                    ? 
                                                   ((IData)(vlSelfRef.adder_var_seq__DOT__calcuate_en)
                                                     ? 
                                                    (0x0001ffffU 
                                                     & (((0x00010000U 
                                                          & (vlSelfRef.i_data 
                                                             << 1U)) 
                                                         | (0x0000ffffU 
                                                            & vlSelfRef.i_data)) 
                                                        + 
                                                        ((0x00010000U 
                                                          & (vlSelfRef.i_data 
                                                             >> 0x0000000fU)) 
                                                         | (vlSelfRef.i_data 
                                                            >> 0x00000010U))))
                                                     : 0U)
                                                    : 0U)
                                                   : 0U);
    vlSelfRef.o_valid = vlSelfRef.adder_var_seq__DOT__o_valid_inner;
    vlSelfRef.o_data = vlSelfRef.adder_var_seq__DOT__o_data_inner;
}

void Vadder_var_seq___024root___eval_nba(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___eval_nba\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vadder_var_seq___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vadder_var_seq___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vadder_var_seq___024root___eval_phase__act(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___eval_phase__act\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vadder_var_seq___024root___eval_triggers__act(vlSelf);
    Vadder_var_seq___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vadder_var_seq___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vadder_var_seq___024root___eval_phase__nba(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___eval_phase__nba\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vadder_var_seq___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vadder_var_seq___024root___eval_nba(vlSelf);
        Vadder_var_seq___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vadder_var_seq___024root___eval(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___eval\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vadder_var_seq___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("adder_var_seq.v", 29, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vadder_var_seq___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vadder_var_seq___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("adder_var_seq.v", 29, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vadder_var_seq___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("adder_var_seq.v", 29, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vadder_var_seq___024root___eval_phase__act(vlSelf));
    } while (Vadder_var_seq___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vadder_var_seq___024root___eval_debug_assertions(Vadder_var_seq___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_var_seq___024root___eval_debug_assertions\n"); );
    Vadder_var_seq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.i_valid & 0xfcU)))) {
        Verilated::overWidthError("i_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.i_en & 0xfeU)))) {
        Verilated::overWidthError("i_en");
    }
}
#endif  // VL_DEBUG

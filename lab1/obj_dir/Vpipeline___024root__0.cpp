// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vpipeline___024root___eval_triggers__act(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_triggers__act\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.clk)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpipeline___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vpipeline___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___trigger_anySet__act\n"); );
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

void Vpipeline_pipeline___nba_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf);
void Vpipeline_WB_STAGE___nba_sequent__TOP__pipeline__my_WB_stage__0(Vpipeline_WB_STAGE* vlSelf);
void Vpipeline_pipeline___nba_sequent__TOP__pipeline__1(Vpipeline_pipeline* vlSelf);
void Vpipeline_pipeline___nba_sequent__TOP__pipeline__2(Vpipeline_pipeline* vlSelf);
void Vpipeline_WB_STAGE___nba_sequent__TOP__pipeline__my_WB_stage__1(Vpipeline_WB_STAGE* vlSelf);

void Vpipeline___024root___eval_nba(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_nba\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vpipeline_pipeline___nba_sequent__TOP__pipeline__0((&vlSymsp->TOP__pipeline));
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vpipeline_WB_STAGE___nba_sequent__TOP__pipeline__my_WB_stage__0((&vlSymsp->TOP__pipeline__my_WB_stage));
        Vpipeline_pipeline___nba_sequent__TOP__pipeline__1((&vlSymsp->TOP__pipeline));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vpipeline_pipeline___nba_sequent__TOP__pipeline__2((&vlSymsp->TOP__pipeline));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vpipeline_WB_STAGE___nba_sequent__TOP__pipeline__my_WB_stage__1((&vlSymsp->TOP__pipeline__my_WB_stage));
    }
}

void Vpipeline___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vpipeline___024root___eval_phase__act(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_phase__act\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpipeline___024root___eval_triggers__act(vlSelf);
    Vpipeline___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vpipeline___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vpipeline___024root___eval_phase__nba(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_phase__nba\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vpipeline___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vpipeline___024root___eval_nba(vlSelf);
        Vpipeline___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vpipeline___024root___eval(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vpipeline___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("pipeline.v", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vpipeline___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("pipeline.v", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vpipeline___024root___eval_phase__act(vlSelf));
    } while (Vpipeline___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vpipeline___024root___eval_debug_assertions(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_debug_assertions\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG

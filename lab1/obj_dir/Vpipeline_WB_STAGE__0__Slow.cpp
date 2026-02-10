// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

VL_ATTR_COLD void Vpipeline_WB_STAGE___ctor_var_reset(Vpipeline_WB_STAGE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_WB_STAGE___ctor_var_reset\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    VL_SCOPED_RAND_RESET_W(141, vlSelf->__PVT__from_MEM_latch, __VscopeHash, 1902701622836981132ull);
    vlSelf->__PVT__from_WB_to_FE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6524857196495691538ull);
    vlSelf->__PVT__from_WB_to_DE = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 9473021985375828881ull);
    vlSelf->__PVT__from_WB_to_AGEX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1892670095873196568ull);
    vlSelf->__PVT__from_WB_to_MEM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10491901007207534172ull);
    vlSelf->__PVT__rd_val_WB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7005914601865112127ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->last_WB_value, __VscopeHash, 511530219878258652ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->WB_counters, __VscopeHash, 10014683080789209004ull);
    vlSelf->__PVT__unnamedblk1__DOT__i = 0;
}

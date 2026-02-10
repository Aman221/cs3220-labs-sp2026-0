// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

extern const VlWide<8>/*255:0*/ Vpipeline__ConstPool__CONST_h9e67c271_0;

void Vpipeline_WB_STAGE___nba_sequent__TOP__pipeline__my_WB_stage__0(Vpipeline_WB_STAGE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_WB_STAGE___nba_sequent__TOP__pipeline__my_WB_stage__0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelfRef.WB_counters[0U] = Vpipeline__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.WB_counters[1U] = Vpipeline__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.WB_counters[2U] = Vpipeline__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.WB_counters[3U] = Vpipeline__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.WB_counters[4U] = Vpipeline__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.WB_counters[5U] = Vpipeline__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.WB_counters[6U] = Vpipeline__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.WB_counters[7U] = Vpipeline__ConstPool__CONST_h9e67c271_0[7U];
    } else {
        vlSelfRef.WB_counters[0U] = (IData)((((QData)((IData)(
                                                              ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                                << 0x00000014U) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                                  >> 0x0000000cU)))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                                                   >> 0x0000000cU))))));
        vlSelfRef.WB_counters[1U] = (IData)(((((QData)((IData)(
                                                               ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                                 << 0x00000014U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                                   >> 0x0000000cU)))) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                                                    >> 0x0000000cU))))) 
                                             >> 0x00000020U));
        vlSelfRef.WB_counters[2U] = (IData)((((QData)((IData)(
                                                              (0x0000003fU 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                                  >> 6U)))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                                                 << 0x00000014U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                                   >> 0x0000000cU))))));
        vlSelfRef.WB_counters[3U] = (IData)(((((QData)((IData)(
                                                               (0x0000003fU 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                                   >> 6U)))) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                                                  << 0x00000014U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                                    >> 0x0000000cU))))) 
                                             >> 0x00000020U));
        vlSelfRef.WB_counters[4U] = (IData)((((QData)((IData)(
                                                              (0x0000001fU 
                                                               & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U]))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                                   >> 5U))))));
        vlSelfRef.WB_counters[5U] = (IData)(((((QData)((IData)(
                                                               (0x0000001fU 
                                                                & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U]))) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                                    >> 5U))))) 
                                             >> 0x00000020U));
        vlSelfRef.WB_counters[6U] = ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                      << 0x0000001aU) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                        >> 6U));
        vlSelfRef.WB_counters[7U] = 0U;
    }
}

extern const VlWide<32>/*1023:0*/ Vpipeline__ConstPool__CONST_hd6b7ba52_0;

void Vpipeline_WB_STAGE___nba_sequent__TOP__pipeline__my_WB_stage__1(Vpipeline_WB_STAGE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_WB_STAGE___nba_sequent__TOP__pipeline__my_WB_stage__1\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x00000020U;
        vlSelfRef.last_WB_value[0U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelfRef.last_WB_value[1U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelfRef.last_WB_value[2U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelfRef.last_WB_value[3U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelfRef.last_WB_value[4U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelfRef.last_WB_value[5U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelfRef.last_WB_value[6U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelfRef.last_WB_value[7U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelfRef.last_WB_value[8U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelfRef.last_WB_value[9U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelfRef.last_WB_value[0x0000000aU] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
        vlSelfRef.last_WB_value[0x0000000bU] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
        vlSelfRef.last_WB_value[0x0000000cU] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
        vlSelfRef.last_WB_value[0x0000000dU] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
        vlSelfRef.last_WB_value[0x0000000eU] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
        vlSelfRef.last_WB_value[0x0000000fU] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
        vlSelfRef.last_WB_value[0x00000010U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
        vlSelfRef.last_WB_value[0x00000011U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
        vlSelfRef.last_WB_value[0x00000012U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
        vlSelfRef.last_WB_value[0x00000013U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
        vlSelfRef.last_WB_value[0x00000014U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
        vlSelfRef.last_WB_value[0x00000015U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
        vlSelfRef.last_WB_value[0x00000016U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
        vlSelfRef.last_WB_value[0x00000017U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
        vlSelfRef.last_WB_value[0x00000018U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
        vlSelfRef.last_WB_value[0x00000019U] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
        vlSelfRef.last_WB_value[0x0000001aU] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
        vlSelfRef.last_WB_value[0x0000001bU] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
        vlSelfRef.last_WB_value[0x0000001cU] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
        vlSelfRef.last_WB_value[0x0000001dU] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
        vlSelfRef.last_WB_value[0x0000001eU] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
        vlSelfRef.last_WB_value[0x0000001fU] = Vpipeline__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
    } else if ((0x00000020U & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])) {
        VL_ASSIGNSEL_WI(1024, 32, (0x000003ffU & VL_SHIFTL_III(10,32,32, 
                                                               (0x0000001fU 
                                                                & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U]), 5U)), vlSelfRef.last_WB_value, 
                        ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                          << 0x0000001aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                             >> 6U)));
    }
}

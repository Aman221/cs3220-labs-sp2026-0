// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

VL_ATTR_COLD void Vpipeline_pipeline___eval_initial__TOP__pipeline(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___eval_initial__TOP__pipeline\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 16384, 0, "/Users/amanuel/GoogleDrive/Code/verilog/cs3220-labs-sp2026-0/lab1/test/part2/test9.mem"s
                 ,  &(vlSelfRef.__PVT__my_FE_stage__DOT__imem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 16384, 0, "/Users/amanuel/GoogleDrive/Code/verilog/cs3220-labs-sp2026-0/lab1/test/part2/test9.mem"s
                 ,  &(vlSelfRef.__PVT__my_MEM_stage__DOT__dmem)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h29143c0b_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h5064a2f5_0;

VL_ATTR_COLD void Vpipeline_pipeline___stl_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___stl_sequent__TOP__pipeline__0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_2;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_2 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_11;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_11 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_14;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_14 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_18;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_18 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_11;
    __VdfgRegularize_hebeb780c_0_11 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_12;
    __VdfgRegularize_hebeb780c_0_12 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_13;
    __VdfgRegularize_hebeb780c_0_13 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_14;
    __VdfgRegularize_hebeb780c_0_14 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_15;
    __VdfgRegularize_hebeb780c_0_15 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_16;
    __VdfgRegularize_hebeb780c_0_16 = 0;
    // Body
    vlSelfRef.__PVT__my_FE_stage__DOT__pcplus_FE = 
        ((IData)(4U) + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch);
    vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
             << 0x00000013U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0x0000000dU)) + 
           ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
             << 0x00000019U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                >> 7U)));
    __VdfgRegularize_hebeb780c_0_11 = ((9U == (0x0000003fU 
                                               & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 7U))) 
                                       | (0x13U == 
                                          (0x0000003fU 
                                           & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 7U))));
    __VdfgRegularize_hebeb780c_0_12 = ((0x0aU == (0x0000003fU 
                                                  & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 7U))) 
                                       | (0x14U == 
                                          (0x0000003fU 
                                           & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 7U))));
    __VdfgRegularize_hebeb780c_0_13 = ((5U == (0x0000003fU 
                                               & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 7U))) 
                                       | (0x0fU == 
                                          (0x0000003fU 
                                           & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 7U))));
    __VdfgRegularize_hebeb780c_0_14 = ((4U == (0x0000003fU 
                                               & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 7U))) 
                                       | (0x0eU == 
                                          (0x0000003fU 
                                           & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 7U))));
    __VdfgRegularize_hebeb780c_0_15 = ((3U == (0x0000003fU 
                                               & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 7U))) 
                                       | (0x0dU == 
                                          (0x0000003fU 
                                           & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 7U))));
    __VdfgRegularize_hebeb780c_0_16 = ((1U == (0x0000003fU 
                                               & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 7U))) 
                                       | ((0x0cU == 
                                           (0x0000003fU 
                                            & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 7U))) 
                                          | ((0x17U 
                                              == (0x0000003fU 
                                                  & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 7U))) 
                                             | (0x18U 
                                                == 
                                                (0x0000003fU 
                                                 & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 7U))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_17 = ((0x19U 
                                                  == 
                                                  (0x0000003fU 
                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 7U))) 
                                                 | (0x1bU 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 7U))));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_2 
        = (IData)((0x00000033U == (0x0000707fU & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_11 
        = (IData)((0x00005033U == (0x0000707fU & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_18 
        = (IData)((0x00001000U == (0xfe007000U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_14 
        = (IData)((0x00005013U == (0x0000707fU & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    vlSelfRef.__PVT__from_AGEX_to_DE = (((0x1cU == 
                                          (0x0000003fU 
                                           & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 7U)))
                                          ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               << 0x00000019U) 
                                              | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 7U)) 
                                             == ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  << 0x00000019U) 
                                                 | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    >> 7U)))
                                          : ((0x1dU 
                                              == (0x0000003fU 
                                                  & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 7U)))
                                              ? (((
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0x00000019U) 
                                                  | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 7U)) 
                                                 != 
                                                 ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 0x00000019U) 
                                                  | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 7U)))
                                              : ((0x1eU 
                                                  == 
                                                  (0x0000003fU 
                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 7U)))
                                                  ? 
                                                 VL_LTS_III(32, 
                                                            ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                              << 0x00000019U) 
                                                             | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                >> 7U)), 
                                                            ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                              << 0x00000019U) 
                                                             | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                >> 7U)))
                                                  : 
                                                 ((0x1fU 
                                                   == 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 7U)))
                                                   ? 
                                                  VL_GTES_III(32, 
                                                              ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                << 0x00000019U) 
                                                               | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                  >> 7U)), 
                                                              ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                << 0x00000019U) 
                                                               | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                  >> 7U)))
                                                   : 
                                                  ((0x20U 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 7U)))
                                                    ? 
                                                   (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      << 0x00000019U) 
                                                     | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        >> 7U)) 
                                                    < 
                                                    ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      << 0x00000019U) 
                                                     | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        >> 7U)))
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 7U)))
                                                     ? 
                                                    (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       << 0x00000019U) 
                                                      | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         >> 7U)) 
                                                     >= 
                                                     ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       << 0x00000019U) 
                                                      | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                         >> 7U)))
                                                     : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17))))))) 
                                        & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 6U));
    vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
        = ((((IData)(__VdfgRegularize_hebeb780c_0_16) 
             | (2U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 7U)))) | (
                                                   ((IData)(__VdfgRegularize_hebeb780c_0_15) 
                                                    | (IData)(__VdfgRegularize_hebeb780c_0_14)) 
                                                   | ((IData)(__VdfgRegularize_hebeb780c_0_13) 
                                                      | ((IData)(__VdfgRegularize_hebeb780c_0_12) 
                                                         | ((IData)(__VdfgRegularize_hebeb780c_0_11) 
                                                            | ((8U 
                                                                == 
                                                                (0x0000003fU 
                                                                 & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                    >> 7U))) 
                                                               | (0x12U 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                      >> 7U)))))))))
            ? ((IData)(__VdfgRegularize_hebeb780c_0_16)
                ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x00000019U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 7U)) + (
                                                   (1U 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 7U)))
                                                    ? 
                                                   ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 7U))
                                                    : 
                                                   ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                       >> 7U))))
                : ((2U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 7U))) ? 
                   (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                      << 0x00000019U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         >> 7U)) - 
                    ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                      << 0x00000019U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                         >> 7U))) : 
                   ((IData)(__VdfgRegularize_hebeb780c_0_15)
                     ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                          << 0x00000019U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             >> 7U)) 
                        & ((3U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 7U)))
                            ? ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                << 0x00000019U) | (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 7U))
                            : ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                << 0x00000019U) | (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 7U))))
                     : ((IData)(__VdfgRegularize_hebeb780c_0_14)
                         ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                              << 0x00000019U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 7U)) 
                            | ((4U == (0x0000003fU 
                                       & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 7U))) ? 
                               ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 << 0x00000019U) | 
                                (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                 >> 7U)) : ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             << 0x00000019U) 
                                            | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                               >> 7U))))
                         : ((IData)(__VdfgRegularize_hebeb780c_0_13)
                             ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 0x00000019U) | 
                                 (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  >> 7U)) ^ ((5U == 
                                              (0x0000003fU 
                                               & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 7U)))
                                              ? ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  << 0x00000019U) 
                                                 | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    >> 7U))
                                              : ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  << 0x00000019U) 
                                                 | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                    >> 7U))))
                             : ((IData)(__VdfgRegularize_hebeb780c_0_12)
                                 ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      << 0x00000019U) 
                                     | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 7U)) << 
                                    (0x0000001fU & 
                                     ((0x0aU == (0x0000003fU 
                                                 & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 7U)))
                                       ? ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           << 0x00000019U) 
                                          | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 7U))
                                       : ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           << 0x00000019U) 
                                          | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 7U)))))
                                 : ((IData)(__VdfgRegularize_hebeb780c_0_11)
                                     ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          << 0x00000019U) 
                                         | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 7U)) 
                                        >> (0x0000001fU 
                                            & ((9U 
                                                == 
                                                (0x0000003fU 
                                                 & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 7U)))
                                                ? (
                                                   (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    << 0x00000019U) 
                                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 7U))
                                                : (
                                                   (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                    << 0x00000019U) 
                                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                      >> 7U)))))
                                     : VL_SHIFTRS_III(32,32,5, 
                                                      ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        << 0x00000019U) 
                                                       | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 7U)), 
                                                      (0x0000001fU 
                                                       & ((8U 
                                                           == 
                                                           (0x0000003fU 
                                                            & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                               >> 7U)))
                                                           ? 
                                                          ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                            << 0x00000019U) 
                                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                              >> 7U))
                                                           : 
                                                          ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                            << 0x00000019U) 
                                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                              >> 7U))))))))))))
            : ((0x15U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 7U))) ? 
               ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                 << 0x00000019U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                    >> 7U)) : ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17)
                                                ? ((IData)(4U) 
                                                   + 
                                                   ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       >> 0x0000000dU)))
                                                : (
                                                   (0x16U 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 7U)))
                                                    ? vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0
                                                    : 
                                                   (((6U 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                          >> 7U))) 
                                                     | (0x10U 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                            >> 7U))))
                                                     ? 
                                                    (VL_LTS_III(32, 
                                                                ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                  << 0x00000019U) 
                                                                 | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                    >> 7U)), 
                                                                ((6U 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                      >> 7U)))
                                                                  ? 
                                                                 ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                   << 0x00000019U) 
                                                                  | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                     >> 7U))
                                                                  : 
                                                                 ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                   << 0x00000019U) 
                                                                  | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                     >> 7U))))
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (((7U 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                           >> 7U))) 
                                                      | (0x11U 
                                                         == 
                                                         (0x0000003fU 
                                                          & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                             >> 7U))))
                                                      ? 
                                                     ((((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                         << 0x00000019U) 
                                                        | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                           >> 7U)) 
                                                       < 
                                                       ((7U 
                                                         == 
                                                         (0x0000003fU 
                                                          & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                             >> 7U)))
                                                         ? 
                                                        ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          << 0x00000019U) 
                                                         | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                            >> 7U))
                                                         : 
                                                        ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                          << 0x00000019U) 
                                                         | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                            >> 7U))))
                                                       ? 1U
                                                       : 0U)
                                                      : 0U))))));
    vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_2) 
                                                   & (0U 
                                                      == 
                                                      (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x00000019U)))
                                                   ? 1U
                                                   : 
                                                  (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_2) 
                                                    & (0x20U 
                                                       == 
                                                       (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0x00000019U)))
                                                    ? 2U
                                                    : 
                                                   ((IData)(
                                                            (0x00007033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                     ? 3U
                                                     : 
                                                    ((IData)(
                                                             (0x00006033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                      ? 4U
                                                      : 
                                                     ((IData)(
                                                              (0x00004033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                       ? 5U
                                                       : 
                                                      ((IData)(
                                                               (0x00002033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                        ? 6U
                                                        : 
                                                       ((IData)(
                                                                (0x00003033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                         ? 7U
                                                         : 
                                                        (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_11) 
                                                          & (0x20U 
                                                             == 
                                                             (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x00000019U)))
                                                          ? 8U
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_11) 
                                                           & (0U 
                                                              == 
                                                              (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x00000019U)))
                                                           ? 9U
                                                           : 
                                                          (((0x33U 
                                                             == 
                                                             (0x0000007fU 
                                                              & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                            & (IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_18))
                                                            ? 0x0aU
                                                            : 
                                                           (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_2) 
                                                             & (1U 
                                                                == 
                                                                (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 0x00000019U)))
                                                             ? 0x0bU
                                                             : 
                                                            ((IData)(
                                                                     (0x00000013U 
                                                                      == 
                                                                      (0x0000707fU 
                                                                       & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                              ? 0x0cU
                                                              : 
                                                             ((IData)(
                                                                      (0x00007013U 
                                                                       == 
                                                                       (0x0000707fU 
                                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                               ? 0x0dU
                                                               : 
                                                              ((IData)(
                                                                       (0x00006013U 
                                                                        == 
                                                                        (0x0000707fU 
                                                                         & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                ? 0x0eU
                                                                : 
                                                               ((IData)(
                                                                        (0x00004013U 
                                                                         == 
                                                                         (0x0000707fU 
                                                                          & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                 ? 0x0fU
                                                                 : 
                                                                ((IData)(
                                                                         (0x00002013U 
                                                                          == 
                                                                          (0x0000707fU 
                                                                           & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((IData)(
                                                                          (0x00003013U 
                                                                           == 
                                                                           (0x0000707fU 
                                                                            & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                   ? 0x11U
                                                                   : 
                                                                  (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_14) 
                                                                    & (0x20U 
                                                                       == 
                                                                       (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 0x00000019U)))
                                                                    ? 0x12U
                                                                    : 
                                                                   (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_14) 
                                                                     & (0U 
                                                                        == 
                                                                        (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 0x00000019U)))
                                                                     ? 0x13U
                                                                     : 
                                                                    (((0x13U 
                                                                       == 
                                                                       (0x0000007fU 
                                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                      & (IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_18))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x37U 
                                                                       == 
                                                                       (0x0000007fU 
                                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U]))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x17U 
                                                                        == 
                                                                        (0x0000007fU 
                                                                         & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U]))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((IData)(
                                                                                (0x00002003U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((IData)(
                                                                                (0x00002023U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x6fU 
                                                                           == 
                                                                           (0x0000007fU 
                                                                            & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U]))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((IData)(
                                                                                (0x00000067U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x00000063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((IData)(
                                                                                (0x00001063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((IData)(
                                                                                (0x00004063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                               ? 0x1eU
                                                                               : 
                                                                              ((IData)(
                                                                                (0x00005063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                ? 0x1fU
                                                                                : 
                                                                               ((IData)(
                                                                                (0x00006063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x00007063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x00002073U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x00001073U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE 
        = vlSelfRef.my_DE_stage__DOT____Vxrand___1;
    if ((1U & (~ (((((((((((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                           | (2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                          | (3U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                         | (4U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                        | (5U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (6U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (7U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (8U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (9U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x0aU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x0bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))))) {
        if ((((((((((((0x22U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                      | (0x23U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0x0cU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x0dU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x0eU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x0fU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x10U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x11U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (0x17U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (0x1aU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (0x1bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if ((((0x12U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                     | (0x13U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x14U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if (((0x15U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x16U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 3U;
        } else if ((0x18U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 4U;
        } else if ((0x19U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 2U;
        } else if (((((((0x1cU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                        | (0x1dU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0x1eU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0x1fU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0x20U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x21U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 5U;
        }
    }
    vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = vlSelfRef.my_DE_stage__DOT____Vxrand___0;
    if ((((((((((((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                  | (2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (3U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (4U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (5U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (6U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (7U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
            | (8U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
           | (9U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
          | (0x0aU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
         | (0x0bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 1U;
    } else if ((((((((((((0x22U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                         | (0x23U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                        | (0x0cU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0x0dU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0x0eU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0x0fU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x10U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x11U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x17U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x1aU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x1bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((((0x12U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                 | (0x13U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x14U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if (((0x15U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                | (0x16U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((0x18U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    } else if ((0x19U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 4U;
    } else if (((((((0x1cU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x1dU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x1eU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x1fU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x20U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x21U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    }
    vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE = 
        ((3U != (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE)) 
         & (0U != (0x0000001fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  >> 7U))));
    __Vtableidx1 = vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE;
    vlSelfRef.__PVT__my_DE_stage__DOT__use_rs1_DE = 
        Vpipeline__ConstPool__TABLE_h29143c0b_0[__Vtableidx1];
    vlSelfRef.__PVT__my_DE_stage__DOT__use_rs2_DE = 
        Vpipeline__ConstPool__TABLE_h5064a2f5_0[__Vtableidx1];
    vlSelfRef.__PVT__from_DE_to_FE = ((((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                        & (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                                           >> (0x0000001fU 
                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x0000000fU)))) 
                                       | ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                          & (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                                             >> (0x0000001fU 
                                                 & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 0x00000014U))))) 
                                      | (IData)(vlSelfRef.__PVT__from_AGEX_to_DE));
}

VL_ATTR_COLD void Vpipeline_pipeline___ctor_var_reset(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___ctor_var_reset\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__cycle_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 812857792956672393ull);
    vlSelf->__PVT__from_DE_to_FE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1414734384858919506ull);
    vlSelf->__PVT__from_AGEX_to_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2519706715303777601ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__imem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2590999655931444546ull);
    }
    VL_SCOPED_RAND_RESET_W(129, vlSelf->__PVT__my_FE_stage__DOT__FE_latch, __VscopeHash, 16724734215674187246ull);
    vlSelf->__PVT__my_FE_stage__DOT__valid_FE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 290766870283333770ull);
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14704622217992474899ull);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5511383234017988405ull);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_AGEX = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3794472240251782279ull);
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3959281638996983103ull);
    vlSelf->my_DE_stage__DOT____Vxrand___1 = VL_SCOPED_RAND_RESET_ASSIGN_I(3, __VscopeHash, 12061010148572372012ull);
    vlSelf->my_DE_stage__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(4, __VscopeHash, 7324809328672732923ull);
    VL_SCOPED_RAND_RESET_W(238, vlSelf->__PVT__my_DE_stage__DOT__DE_latch, __VscopeHash, 12720121764206633172ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2211754412344529817ull);
    }
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18007936897921350699ull);
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11218727599284980111ull);
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 783089451810364172ull);
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1249650228049212677ull);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3587661886766856571ull);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12338438627132944225ull);
    vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14209109425183318264ull);
    VL_SCOPED_RAND_RESET_W(141, vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch, __VscopeHash, 18426125699513857839ull);
    vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10689303648146888781ull);
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5716915382548216729ull);
    }
    VL_SCOPED_RAND_RESET_W(141, vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch, __VscopeHash, 13271297185850210100ull);
    vlSelf->__PVT__my_MEM_stage__DOT__memaddr_MEM = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14305271512680009500ull);
    vlSelf->__PVT__my_MEM_stage__DOT__wr_val_MEM = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 644561309312150194ull);
    vlSelf->__PVT__my_MEM_stage__DOT__wr_mem_MEM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16761868367510446205ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_17 = 0;
    VL_ZERO_RESET_W(129, vlSelf->__Vdly__my_FE_stage__DOT__FE_latch);
}

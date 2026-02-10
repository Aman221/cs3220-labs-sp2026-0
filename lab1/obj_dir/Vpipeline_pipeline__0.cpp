// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

void Vpipeline_pipeline___nba_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__inst_count_FE;
    __Vdly__my_FE_stage__DOT__inst_count_FE = 0;
    IData/*31:0*/ __VdlyVal__my_MEM_stage__DOT__dmem__v0;
    __VdlyVal__my_MEM_stage__DOT__dmem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__my_MEM_stage__DOT__dmem__v0;
    __VdlyDim0__my_MEM_stage__DOT__dmem__v0 = 0;
    CData/*0:0*/ __VdlySet__my_MEM_stage__DOT__dmem__v0;
    __VdlySet__my_MEM_stage__DOT__dmem__v0 = 0;
    // Body
    __VdlySet__my_MEM_stage__DOT__dmem__v0 = 0U;
    __Vdly__my_FE_stage__DOT__inst_count_FE = vlSelfRef.__PVT__my_FE_stage__DOT__inst_count_FE;
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U];
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U];
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U];
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U];
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U];
    if (vlSelfRef.__PVT__my_MEM_stage__DOT__wr_mem_MEM) {
        __VdlyVal__my_MEM_stage__DOT__dmem__v0 = vlSelfRef.__PVT__my_MEM_stage__DOT__wr_val_MEM;
        __VdlyDim0__my_MEM_stage__DOT__dmem__v0 = (0x00003fffU 
                                                   & (vlSelfRef.__PVT__my_MEM_stage__DOT__memaddr_MEM 
                                                      >> 2U));
        __VdlySet__my_MEM_stage__DOT__dmem__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__cycle_count = 0U;
        __Vdly__my_FE_stage__DOT__inst_count_FE = 1U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch = 0x00000200U;
        vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs = 0U;
    } else {
        vlSelfRef.__PVT__cycle_count = ((IData)(1U) 
                                        + vlSelfRef.__PVT__cycle_count);
        if ((1U & (~ (IData)(vlSelfRef.__PVT__from_AGEX_to_DE)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__from_DE_to_FE)))) {
                __Vdly__my_FE_stage__DOT__inst_count_FE 
                    = ((IData)(1U) + vlSelfRef.__PVT__my_FE_stage__DOT__inst_count_FE);
            }
        }
        if (vlSelfRef.__PVT__from_AGEX_to_DE) {
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
            vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                = ((0x1bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 7U)))
                    ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                         << 0x00000019U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 7U)) 
                       + ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                           << 0x00000019U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                              >> 7U)))
                    : vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0);
        } else if (vlSelfRef.__PVT__from_DE_to_FE) {
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U];
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U];
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U];
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U];
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U];
            vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                = vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch;
        } else {
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                = (IData)((((QData)((IData)(((IData)(4U) 
                                             + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__inst_count_FE))));
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                = (IData)(((((QData)((IData)(((IData)(4U) 
                                              + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__inst_count_FE))) 
                           >> 0x00000020U));
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                = (IData)((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__imem
                                            [(0x00003fffU 
                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                 >> 2U))])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))));
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                = (IData)(((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__imem
                                             [(0x00003fffU 
                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                  >> 2U))])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                           >> 0x00000020U));
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__valid_FE;
            vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                = vlSelfRef.__PVT__my_FE_stage__DOT__pcplus_FE;
        }
        if (((~ (IData)(vlSelfRef.__PVT__from_DE_to_FE)) 
             & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                = (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                   | (0x00000000ffffffffULL & ((IData)(1U) 
                                               << (0x0000001fU 
                                                   & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 7U)))));
        }
        if ((0x00000020U & vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U])) {
            vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                = ((~ ((IData)(1U) << (0x0000001fU 
                                       & vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U]))) 
                   & vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs);
        }
    }
    if (__VdlySet__my_MEM_stage__DOT__dmem__v0) {
        vlSelfRef.__PVT__my_MEM_stage__DOT__dmem[__VdlyDim0__my_MEM_stage__DOT__dmem__v0] 
            = __VdlyVal__my_MEM_stage__DOT__dmem__v0;
    }
    vlSelfRef.__PVT__my_FE_stage__DOT__inst_count_FE 
        = __Vdly__my_FE_stage__DOT__inst_count_FE;
    vlSelfRef.__PVT__my_FE_stage__DOT__pcplus_FE = 
        ((IData)(4U) + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch);
}

extern const VlWide<8>/*255:0*/ Vpipeline__ConstPool__CONST_hee2f1268_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h29143c0b_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h5064a2f5_0;

void Vpipeline_pipeline___nba_sequent__TOP__pipeline__1(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__1\n"); );
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
    VlWide<4>/*127:0*/ __Vtemp_13;
    // Body
    __Vtemp_13[0U] = ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                       ? (((- (IData)((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x0000001fU))) 
                           << 0x0000000bU) | (0x000007ffU 
                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x00000014U)))
                       : ((5U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                           ? (((- (IData)((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x0000001fU))) 
                               << 0x0000000cU) | ((0x00000800U 
                                                   & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      << 4U)) 
                                                  | ((0x000007e0U 
                                                      & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x00000014U)) 
                                                     | (0x0000001eU 
                                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 7U)))))
                           : ((4U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                               ? (((- (IData)((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x0000001fU))) 
                                   << 0x0000000bU) 
                                  | ((0x000007e0U & 
                                      (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x00000014U)) 
                                     | (0x0000001fU 
                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 7U))))
                               : ((3U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                   ? (0xfffff000U & 
                                      vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])
                                   : ((2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                       ? (((- (IData)(
                                                      (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x0000001fU))) 
                                           << 0x00000014U) 
                                          | ((((0x000001feU 
                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x0000000bU)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x00000014U))) 
                                              << 0x0000000bU) 
                                             | (0x000007feU 
                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x00000014U))))
                                       : 0U)))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[3U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[4U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[0U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[1U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[2U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[3U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[4U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[5U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[6U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[7U];
    } else {
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
            = vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U];
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
            = vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U];
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
            = vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U];
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
            = vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U];
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
            = vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U];
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX)) 
                        << 6U) | (QData)((IData)((0x0000003fU 
                                                  & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U])))));
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
            = (((IData)((0x0000003fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                   << 0x00000019U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                     >> 7U)))) 
                << 6U) | (IData)(((((QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX)) 
                                    << 6U) | (QData)((IData)(
                                                             (0x0000003fU 
                                                              & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U])))) 
                                  >> 0x00000020U)));
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
            = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                 << 0x0000001fU) | (0x7ffff000U & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 1U))) 
               | (((IData)((0x0000003fffffffffULL & 
                            (((QData)((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                              << 0x00000019U) | ((QData)((IData)(
                                                                 vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                 >> 7U)))) 
                   >> 0x0000001aU) | ((IData)(((0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                    << 0x00000019U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                      >> 7U))) 
                                               >> 0x00000020U)) 
                                      << 6U)));
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
            = ((0x00000fffU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                               >> 1U)) | ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           << 0x0000001fU) 
                                          | (0x7ffff000U 
                                             & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                >> 1U))));
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
            = ((0x00000fffU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                               >> 1U)) | (0x00001000U 
                                          & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                             >> 1U)));
        if (vlSelfRef.__PVT__from_DE_to_FE) {
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                = Vpipeline__ConstPool__CONST_hee2f1268_0[0U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                = Vpipeline__ConstPool__CONST_hee2f1268_0[1U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                = Vpipeline__ConstPool__CONST_hee2f1268_0[2U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                = Vpipeline__ConstPool__CONST_hee2f1268_0[3U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                = Vpipeline__ConstPool__CONST_hee2f1268_0[4U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                = Vpipeline__ConstPool__CONST_hee2f1268_0[5U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                = Vpipeline__ConstPool__CONST_hee2f1268_0[6U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                = Vpipeline__ConstPool__CONST_hee2f1268_0[7U];
        } else {
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                = ((__Vtemp_13[0U] << 7U) | ((((0x1cU 
                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                               | ((0x1dU 
                                                   == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                  | ((0x1eU 
                                                      == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     | ((0x1fU 
                                                         == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                        | ((0x20U 
                                                            == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                           | ((0x21U 
                                                               == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                              | ((0x19U 
                                                                  == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                 | (0x1bU 
                                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                                 << 5U) 
                                                | (0x0000001fU 
                                                   & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 7U)))));
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                = ((__Vtemp_13[0U] >> 0x00000019U) 
                   | (vlSelfRef.__PVT__my_DE_stage__DOT__regs
                      [(0x0000001fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x00000014U))] 
                      << 7U));
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                = ((vlSelfRef.__PVT__my_DE_stage__DOT__regs
                    [(0x0000001fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                     >> 0x00000014U))] 
                    >> 0x00000019U) | ((IData)((((QData)((IData)(
                                                                 vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.__PVT__my_DE_stage__DOT__regs
                                                                  [
                                                                  (0x0000001fU 
                                                                   & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 0x0000000fU))])))) 
                                       << 7U));
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.__PVT__my_DE_stage__DOT__regs
                                                                [
                                                                (0x0000001fU 
                                                                 & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x0000000fU))])))) 
                    >> 0x00000019U) | ((IData)(((((QData)((IData)(
                                                                  vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.__PVT__my_DE_stage__DOT__regs
                                                                   [
                                                                   (0x0000001fU 
                                                                    & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x0000000fU))]))) 
                                                >> 0x00000020U)) 
                                       << 7U));
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                = (((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                     << 0x0000000dU) | ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE) 
                                        << 7U)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.__PVT__my_DE_stage__DOT__regs
                                                                               [
                                                                               (0x0000001fU 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000000fU))]))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000019U));
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                = (((0x0000007fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                    >> 0x00000013U)) 
                    | ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE) 
                       >> 0x00000019U)) | ((0x00001f80U 
                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                               >> 0x00000013U)) 
                                           | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                              << 0x0000000dU)));
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                = ((0x0000007fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                   >> 0x00000013U)) 
                   | ((0x00001f80U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                      >> 0x00000013U)) 
                      | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                         << 0x0000000dU)));
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                = ((0x0000007fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                   >> 0x00000013U)) 
                   | ((0x00001f80U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      >> 0x00000013U)) 
                      | (0x00002000U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 0x0000000dU))));
        }
    }
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U];
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

void Vpipeline_pipeline___nba_sequent__TOP__pipeline__2(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__2\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__my_DE_stage__DOT__regs__v0;
    __VdlySet__my_DE_stage__DOT__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__my_DE_stage__DOT__regs__v32;
    __VdlyVal__my_DE_stage__DOT__regs__v32 = 0;
    CData/*4:0*/ __VdlyDim0__my_DE_stage__DOT__regs__v32;
    __VdlyDim0__my_DE_stage__DOT__regs__v32 = 0;
    CData/*0:0*/ __VdlySet__my_DE_stage__DOT__regs__v32;
    __VdlySet__my_DE_stage__DOT__regs__v32 = 0;
    // Body
    __VdlySet__my_DE_stage__DOT__regs__v0 = 0U;
    __VdlySet__my_DE_stage__DOT__regs__v32 = 0U;
    if (vlSymsp->TOP.reset) {
        __VdlySet__my_DE_stage__DOT__regs__v0 = 1U;
    } else if ((0x00000020U & vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U])) {
        __VdlyVal__my_DE_stage__DOT__regs__v32 = ((
                                                   vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                   << 0x0000001aU) 
                                                  | (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                     >> 6U));
        __VdlyDim0__my_DE_stage__DOT__regs__v32 = (0x0000001fU 
                                                   & vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U]);
        __VdlySet__my_DE_stage__DOT__regs__v32 = 1U;
    }
    if (__VdlySet__my_DE_stage__DOT__regs__v0) {
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[1U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[2U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[3U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[4U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[5U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[6U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[7U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[8U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[9U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x0aU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x0bU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x0cU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x0dU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x0eU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x0fU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x10U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x11U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x12U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x13U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x14U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x15U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x16U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x17U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x18U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x19U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1aU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1bU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1cU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1dU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1eU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1fU] = 0U;
    }
    if (__VdlySet__my_DE_stage__DOT__regs__v32) {
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[__VdlyDim0__my_DE_stage__DOT__regs__v32] 
            = __VdlyVal__my_DE_stage__DOT__regs__v32;
    }
}

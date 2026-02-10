// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vadder_var_seq.h for the primary calling header

#ifndef VERILATED_VADDER_VAR_SEQ___024ROOT_H_
#define VERILATED_VADDER_VAR_SEQ___024ROOT_H_  // guard

#include "verilated.h"


class Vadder_var_seq__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vadder_var_seq___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(i_valid,1,0);
    VL_OUT8(o_valid,0,0);
    VL_IN8(i_en,0,0);
    CData/*0:0*/ adder_var_seq__DOT__calcuate_en;
    CData/*0:0*/ adder_var_seq__DOT__o_valid_inner;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    VL_IN(i_data,31,0);
    VL_OUT(o_data,16,0);
    IData/*16:0*/ adder_var_seq__DOT__o_data_inner;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vadder_var_seq__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vadder_var_seq___024root(Vadder_var_seq__Syms* symsp, const char* namep);
    ~Vadder_var_seq___024root();
    VL_UNCOPYABLE(Vadder_var_seq___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder_var_seq.h for the primary calling header

#include "Vadder_var_seq__pch.h"

void Vadder_var_seq___024root___ctor_var_reset(Vadder_var_seq___024root* vlSelf);

Vadder_var_seq___024root::Vadder_var_seq___024root(Vadder_var_seq__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vadder_var_seq___024root___ctor_var_reset(this);
}

void Vadder_var_seq___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vadder_var_seq___024root::~Vadder_var_seq___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

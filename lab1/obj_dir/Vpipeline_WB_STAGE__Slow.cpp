// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

void Vpipeline_WB_STAGE___ctor_var_reset(Vpipeline_WB_STAGE* vlSelf);

void Vpipeline_WB_STAGE::ctor(Vpipeline__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vpipeline_WB_STAGE___ctor_var_reset(this);
}

void Vpipeline_WB_STAGE::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vpipeline_WB_STAGE::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

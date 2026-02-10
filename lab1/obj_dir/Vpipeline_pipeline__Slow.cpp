// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

void Vpipeline_pipeline___ctor_var_reset(Vpipeline_pipeline* vlSelf);

void Vpipeline_pipeline::ctor(Vpipeline__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vpipeline_pipeline___ctor_var_reset(this);
}

void Vpipeline_pipeline::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vpipeline_pipeline::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

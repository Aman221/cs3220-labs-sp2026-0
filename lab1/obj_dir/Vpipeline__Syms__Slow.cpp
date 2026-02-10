// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vpipeline__pch.h"

Vpipeline__Syms::Vpipeline__Syms(VerilatedContext* contextp, const char* namep, Vpipeline* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(300);
    // Setup sub module instances
    TOP__pipeline.ctor(this, "pipeline");
    TOP__pipeline__my_WB_stage.ctor(this, "pipeline.my_WB_stage");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.pipeline = &TOP__pipeline;
    TOP__pipeline.my_WB_stage = &TOP__pipeline__my_WB_stage;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__pipeline.__Vconfigure(true);
    TOP__pipeline__my_WB_stage.__Vconfigure(true);
    // Setup scopes
    __Vscopep_pipeline__my_WB_stage = new VerilatedScope{this, "pipeline.my_WB_stage", "my_WB_stage", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_pipeline__my_WB_stage->varInsert("WB_counters", &(TOP__pipeline__my_WB_stage.WB_counters), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 2 ,7,0 ,31,0);
    __Vscopep_pipeline__my_WB_stage->varInsert("last_WB_value", &(TOP__pipeline__my_WB_stage.last_WB_value), false, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 2 ,31,0 ,31,0);
}

Vpipeline__Syms::~Vpipeline__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_pipeline__my_WB_stage, __Vscopep_pipeline__my_WB_stage = nullptr);
    // Tear down sub module instances
    TOP__pipeline__my_WB_stage.dtor();
    TOP__pipeline.dtor();
}

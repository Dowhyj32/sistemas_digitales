// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vregister_tb__pch.h"

//============================================================
// Constructors

Vregister_tb::Vregister_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vregister_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vregister_tb::Vregister_tb(const char* _vcname__)
    : Vregister_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vregister_tb::~Vregister_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vregister_tb___024root___eval_debug_assertions(Vregister_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vregister_tb___024root___eval_static(Vregister_tb___024root* vlSelf);
void Vregister_tb___024root___eval_initial(Vregister_tb___024root* vlSelf);
void Vregister_tb___024root___eval_settle(Vregister_tb___024root* vlSelf);
void Vregister_tb___024root___eval(Vregister_tb___024root* vlSelf);

void Vregister_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vregister_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vregister_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vregister_tb___024root___eval_static(&(vlSymsp->TOP));
        Vregister_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vregister_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vregister_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vregister_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vregister_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vregister_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vregister_tb___024root___eval_final(Vregister_tb___024root* vlSelf);

VL_ATTR_COLD void Vregister_tb::final() {
    contextp()->executingFinal(true);
    Vregister_tb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vregister_tb::hierName() const { return vlSymsp->name(); }
const char* Vregister_tb::modelName() const { return "Vregister_tb"; }
unsigned Vregister_tb::threads() const { return 1; }
void Vregister_tb::prepareClone() const { contextp()->prepareClone(); }
void Vregister_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

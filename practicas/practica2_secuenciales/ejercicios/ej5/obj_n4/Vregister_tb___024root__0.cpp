// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_tb.h for the primary calling header

#include "Vregister_tb__pch.h"

VlCoroutine Vregister_tb___024root___eval_initial__TOP__Vtiming__0(Vregister_tb___024root* vlSelf);
VlCoroutine Vregister_tb___024root___eval_initial__TOP__Vtiming__1(Vregister_tb___024root* vlSelf);

void Vregister_tb___024root___eval_initial(Vregister_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_initial\n"); );
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vregister_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vregister_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vregister_tb___024root___eval_initial__TOP__Vtiming__0(Vregister_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.register_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "register_tb.sv", 
                                             24);
        vlSelfRef.register_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.register_tb__DOT__clk)));
    }
    co_return;
}

void Vregister_tb___024root____VbeforeTrig_ha20119a5__0(Vregister_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vregister_tb___024root___eval_initial__TOP__Vtiming__1(Vregister_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtask_register_tb__DOT__paso__0__esperado;
    __Vtask_register_tb__DOT__paso__0__esperado = 0;
    CData/*0:0*/ __Vtask_register_tb__DOT__paso__1__rst;
    __Vtask_register_tb__DOT__paso__1__rst = 0;
    CData/*0:0*/ __Vtask_register_tb__DOT__paso__1__we;
    __Vtask_register_tb__DOT__paso__1__we = 0;
    CData/*3:0*/ __Vtask_register_tb__DOT__paso__1__din;
    __Vtask_register_tb__DOT__paso__1__din = 0;
    CData/*3:0*/ __Vtask_register_tb__DOT__paso__1__esperado;
    __Vtask_register_tb__DOT__paso__1__esperado = 0;
    CData/*0:0*/ __Vtask_register_tb__DOT__paso__2__rst;
    __Vtask_register_tb__DOT__paso__2__rst = 0;
    CData/*0:0*/ __Vtask_register_tb__DOT__paso__2__we;
    __Vtask_register_tb__DOT__paso__2__we = 0;
    CData/*3:0*/ __Vtask_register_tb__DOT__paso__2__din;
    __Vtask_register_tb__DOT__paso__2__din = 0;
    CData/*3:0*/ __Vtask_register_tb__DOT__paso__2__esperado;
    __Vtask_register_tb__DOT__paso__2__esperado = 0;
    CData/*0:0*/ __Vtask_register_tb__DOT__paso__3__rst;
    __Vtask_register_tb__DOT__paso__3__rst = 0;
    CData/*0:0*/ __Vtask_register_tb__DOT__paso__3__we;
    __Vtask_register_tb__DOT__paso__3__we = 0;
    CData/*3:0*/ __Vtask_register_tb__DOT__paso__3__din;
    __Vtask_register_tb__DOT__paso__3__din = 0;
    CData/*3:0*/ __Vtask_register_tb__DOT__paso__3__esperado;
    __Vtask_register_tb__DOT__paso__3__esperado = 0;
    CData/*0:0*/ __Vtask_register_tb__DOT__paso__4__rst;
    __Vtask_register_tb__DOT__paso__4__rst = 0;
    CData/*0:0*/ __Vtask_register_tb__DOT__paso__4__we;
    __Vtask_register_tb__DOT__paso__4__we = 0;
    CData/*3:0*/ __Vtask_register_tb__DOT__paso__4__din;
    __Vtask_register_tb__DOT__paso__4__din = 0;
    CData/*3:0*/ __Vtask_register_tb__DOT__paso__4__esperado;
    __Vtask_register_tb__DOT__paso__4__esperado = 0;
    CData/*0:0*/ __Vtask_register_tb__DOT__paso__5__rst;
    __Vtask_register_tb__DOT__paso__5__rst = 0;
    CData/*0:0*/ __Vtask_register_tb__DOT__paso__5__we;
    __Vtask_register_tb__DOT__paso__5__we = 0;
    CData/*3:0*/ __Vtask_register_tb__DOT__paso__5__din;
    __Vtask_register_tb__DOT__paso__5__din = 0;
    CData/*3:0*/ __Vtask_register_tb__DOT__paso__5__esperado;
    __Vtask_register_tb__DOT__paso__5__esperado = 0;
    CData/*0:0*/ __Vtask_register_tb__DOT__paso__6__rst;
    __Vtask_register_tb__DOT__paso__6__rst = 0;
    CData/*0:0*/ __Vtask_register_tb__DOT__paso__6__we;
    __Vtask_register_tb__DOT__paso__6__we = 0;
    CData/*3:0*/ __Vtask_register_tb__DOT__paso__6__din;
    __Vtask_register_tb__DOT__paso__6__din = 0;
    CData/*3:0*/ __Vtask_register_tb__DOT__paso__6__esperado;
    __Vtask_register_tb__DOT__paso__6__esperado = 0;
    // Body
    vlSelfRef.__Vtask_register_tb__DOT__paso__0__caso = "reset con prioridad sobre we"s;
    __Vtask_register_tb__DOT__paso__0__esperado = 0U;
    vlSelfRef.register_tb__DOT__reset = 1U;
    vlSelfRef.register_tb__DOT__write_enable = 1U;
    vlSelfRef.register_tb__DOT__data_in = 5U;
    Vregister_tb___024root____VbeforeTrig_ha20119a5__0(vlSelf, 
                                                       "@(posedge register_tb.clk)");
    co_await vlSelfRef.__VtrigSched_ha20119a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_tb.clk)", 
                                                         "register_tb.sv", 
                                                         33);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "register_tb.sv", 
                                         34);
    if (VL_UNLIKELY((((IData)(vlSelfRef.register_tb__DOT__data_out) 
                      != (IData)(__Vtask_register_tb__DOT__paso__0__esperado))))) {
        VL_WRITEF_NX("[%0t] %%Error: register_tb.sv:36: Assertion failed in %m: [N=4] %s: data_out = %b, esperado = %b\n",6, 'M',vlSymsp->name(),"register_tb.paso", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_register_tb__DOT__paso__0__caso)
                     , '#',4,(IData)(vlSelfRef.register_tb__DOT__data_out)
                     , '#',4,__Vtask_register_tb__DOT__paso__0__esperado);
        VL_STOP_MT("register_tb.sv", 36, "");
        vlSelfRef.register_tb__DOT__errores = ((IData)(1U) 
                                               + vlSelfRef.register_tb__DOT__errores);
    } else {
        VL_WRITEF_NX("[N=4] OK  %s: data_out = %b\n",2
                     , 'S',&(vlSelfRef.__Vtask_register_tb__DOT__paso__0__caso)
                     , '#',4,(IData)(vlSelfRef.register_tb__DOT__data_out));
    }
    vlSelfRef.__Vtask_register_tb__DOT__paso__1__caso = "conserva despues del reset"s;
    __Vtask_register_tb__DOT__paso__1__esperado = 0U;
    __Vtask_register_tb__DOT__paso__1__din = 0x0fU;
    __Vtask_register_tb__DOT__paso__1__we = 0U;
    __Vtask_register_tb__DOT__paso__1__rst = 0U;
    vlSelfRef.register_tb__DOT__reset = __Vtask_register_tb__DOT__paso__1__rst;
    vlSelfRef.register_tb__DOT__write_enable = __Vtask_register_tb__DOT__paso__1__we;
    vlSelfRef.register_tb__DOT__data_in = __Vtask_register_tb__DOT__paso__1__din;
    Vregister_tb___024root____VbeforeTrig_ha20119a5__0(vlSelf, 
                                                       "@(posedge register_tb.clk)");
    co_await vlSelfRef.__VtrigSched_ha20119a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_tb.clk)", 
                                                         "register_tb.sv", 
                                                         33);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "register_tb.sv", 
                                         34);
    if (VL_UNLIKELY((((IData)(vlSelfRef.register_tb__DOT__data_out) 
                      != (IData)(__Vtask_register_tb__DOT__paso__1__esperado))))) {
        VL_WRITEF_NX("[%0t] %%Error: register_tb.sv:36: Assertion failed in %m: [N=4] %s: data_out = %b, esperado = %b\n",6, 'M',vlSymsp->name(),"register_tb.paso", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_register_tb__DOT__paso__1__caso)
                     , '#',4,(IData)(vlSelfRef.register_tb__DOT__data_out)
                     , '#',4,__Vtask_register_tb__DOT__paso__1__esperado);
        VL_STOP_MT("register_tb.sv", 36, "");
        vlSelfRef.register_tb__DOT__errores = ((IData)(1U) 
                                               + vlSelfRef.register_tb__DOT__errores);
    } else {
        VL_WRITEF_NX("[N=4] OK  %s: data_out = %b\n",2
                     , 'S',&(vlSelfRef.__Vtask_register_tb__DOT__paso__1__caso)
                     , '#',4,(IData)(vlSelfRef.register_tb__DOT__data_out));
    }
    vlSelfRef.__Vtask_register_tb__DOT__paso__2__caso = "carga data_in"s;
    __Vtask_register_tb__DOT__paso__2__esperado = 0x0cU;
    __Vtask_register_tb__DOT__paso__2__din = 0x0cU;
    __Vtask_register_tb__DOT__paso__2__we = 1U;
    __Vtask_register_tb__DOT__paso__2__rst = 0U;
    vlSelfRef.register_tb__DOT__reset = __Vtask_register_tb__DOT__paso__2__rst;
    vlSelfRef.register_tb__DOT__write_enable = __Vtask_register_tb__DOT__paso__2__we;
    vlSelfRef.register_tb__DOT__data_in = __Vtask_register_tb__DOT__paso__2__din;
    Vregister_tb___024root____VbeforeTrig_ha20119a5__0(vlSelf, 
                                                       "@(posedge register_tb.clk)");
    co_await vlSelfRef.__VtrigSched_ha20119a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_tb.clk)", 
                                                         "register_tb.sv", 
                                                         33);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "register_tb.sv", 
                                         34);
    if (VL_UNLIKELY((((IData)(vlSelfRef.register_tb__DOT__data_out) 
                      != (IData)(__Vtask_register_tb__DOT__paso__2__esperado))))) {
        VL_WRITEF_NX("[%0t] %%Error: register_tb.sv:36: Assertion failed in %m: [N=4] %s: data_out = %b, esperado = %b\n",6, 'M',vlSymsp->name(),"register_tb.paso", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_register_tb__DOT__paso__2__caso)
                     , '#',4,(IData)(vlSelfRef.register_tb__DOT__data_out)
                     , '#',4,__Vtask_register_tb__DOT__paso__2__esperado);
        VL_STOP_MT("register_tb.sv", 36, "");
        vlSelfRef.register_tb__DOT__errores = ((IData)(1U) 
                                               + vlSelfRef.register_tb__DOT__errores);
    } else {
        VL_WRITEF_NX("[N=4] OK  %s: data_out = %b\n",2
                     , 'S',&(vlSelfRef.__Vtask_register_tb__DOT__paso__2__caso)
                     , '#',4,(IData)(vlSelfRef.register_tb__DOT__data_out));
    }
    vlSelfRef.__Vtask_register_tb__DOT__paso__3__caso = "conserva lo cargado"s;
    __Vtask_register_tb__DOT__paso__3__esperado = 0x0cU;
    __Vtask_register_tb__DOT__paso__3__din = 6U;
    __Vtask_register_tb__DOT__paso__3__we = 0U;
    __Vtask_register_tb__DOT__paso__3__rst = 0U;
    vlSelfRef.register_tb__DOT__reset = __Vtask_register_tb__DOT__paso__3__rst;
    vlSelfRef.register_tb__DOT__write_enable = __Vtask_register_tb__DOT__paso__3__we;
    vlSelfRef.register_tb__DOT__data_in = __Vtask_register_tb__DOT__paso__3__din;
    Vregister_tb___024root____VbeforeTrig_ha20119a5__0(vlSelf, 
                                                       "@(posedge register_tb.clk)");
    co_await vlSelfRef.__VtrigSched_ha20119a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_tb.clk)", 
                                                         "register_tb.sv", 
                                                         33);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "register_tb.sv", 
                                         34);
    if (VL_UNLIKELY((((IData)(vlSelfRef.register_tb__DOT__data_out) 
                      != (IData)(__Vtask_register_tb__DOT__paso__3__esperado))))) {
        VL_WRITEF_NX("[%0t] %%Error: register_tb.sv:36: Assertion failed in %m: [N=4] %s: data_out = %b, esperado = %b\n",6, 'M',vlSymsp->name(),"register_tb.paso", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_register_tb__DOT__paso__3__caso)
                     , '#',4,(IData)(vlSelfRef.register_tb__DOT__data_out)
                     , '#',4,__Vtask_register_tb__DOT__paso__3__esperado);
        VL_STOP_MT("register_tb.sv", 36, "");
        vlSelfRef.register_tb__DOT__errores = ((IData)(1U) 
                                               + vlSelfRef.register_tb__DOT__errores);
    } else {
        VL_WRITEF_NX("[N=4] OK  %s: data_out = %b\n",2
                     , 'S',&(vlSelfRef.__Vtask_register_tb__DOT__paso__3__caso)
                     , '#',4,(IData)(vlSelfRef.register_tb__DOT__data_out));
    }
    vlSelfRef.__Vtask_register_tb__DOT__paso__4__caso = "carga un valor nuevo"s;
    __Vtask_register_tb__DOT__paso__4__esperado = 3U;
    __Vtask_register_tb__DOT__paso__4__din = 3U;
    __Vtask_register_tb__DOT__paso__4__we = 1U;
    __Vtask_register_tb__DOT__paso__4__rst = 0U;
    vlSelfRef.register_tb__DOT__reset = __Vtask_register_tb__DOT__paso__4__rst;
    vlSelfRef.register_tb__DOT__write_enable = __Vtask_register_tb__DOT__paso__4__we;
    vlSelfRef.register_tb__DOT__data_in = __Vtask_register_tb__DOT__paso__4__din;
    Vregister_tb___024root____VbeforeTrig_ha20119a5__0(vlSelf, 
                                                       "@(posedge register_tb.clk)");
    co_await vlSelfRef.__VtrigSched_ha20119a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_tb.clk)", 
                                                         "register_tb.sv", 
                                                         33);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "register_tb.sv", 
                                         34);
    if (VL_UNLIKELY((((IData)(vlSelfRef.register_tb__DOT__data_out) 
                      != (IData)(__Vtask_register_tb__DOT__paso__4__esperado))))) {
        VL_WRITEF_NX("[%0t] %%Error: register_tb.sv:36: Assertion failed in %m: [N=4] %s: data_out = %b, esperado = %b\n",6, 'M',vlSymsp->name(),"register_tb.paso", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_register_tb__DOT__paso__4__caso)
                     , '#',4,(IData)(vlSelfRef.register_tb__DOT__data_out)
                     , '#',4,__Vtask_register_tb__DOT__paso__4__esperado);
        VL_STOP_MT("register_tb.sv", 36, "");
        vlSelfRef.register_tb__DOT__errores = ((IData)(1U) 
                                               + vlSelfRef.register_tb__DOT__errores);
    } else {
        VL_WRITEF_NX("[N=4] OK  %s: data_out = %b\n",2
                     , 'S',&(vlSelfRef.__Vtask_register_tb__DOT__paso__4__caso)
                     , '#',4,(IData)(vlSelfRef.register_tb__DOT__data_out));
    }
    vlSelfRef.__Vtask_register_tb__DOT__paso__5__caso = "reset"s;
    __Vtask_register_tb__DOT__paso__5__esperado = 0U;
    __Vtask_register_tb__DOT__paso__5__din = 0x0aU;
    __Vtask_register_tb__DOT__paso__5__we = 0U;
    __Vtask_register_tb__DOT__paso__5__rst = 1U;
    vlSelfRef.register_tb__DOT__reset = __Vtask_register_tb__DOT__paso__5__rst;
    vlSelfRef.register_tb__DOT__write_enable = __Vtask_register_tb__DOT__paso__5__we;
    vlSelfRef.register_tb__DOT__data_in = __Vtask_register_tb__DOT__paso__5__din;
    Vregister_tb___024root____VbeforeTrig_ha20119a5__0(vlSelf, 
                                                       "@(posedge register_tb.clk)");
    co_await vlSelfRef.__VtrigSched_ha20119a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_tb.clk)", 
                                                         "register_tb.sv", 
                                                         33);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "register_tb.sv", 
                                         34);
    if (VL_UNLIKELY((((IData)(vlSelfRef.register_tb__DOT__data_out) 
                      != (IData)(__Vtask_register_tb__DOT__paso__5__esperado))))) {
        VL_WRITEF_NX("[%0t] %%Error: register_tb.sv:36: Assertion failed in %m: [N=4] %s: data_out = %b, esperado = %b\n",6, 'M',vlSymsp->name(),"register_tb.paso", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_register_tb__DOT__paso__5__caso)
                     , '#',4,(IData)(vlSelfRef.register_tb__DOT__data_out)
                     , '#',4,__Vtask_register_tb__DOT__paso__5__esperado);
        VL_STOP_MT("register_tb.sv", 36, "");
        vlSelfRef.register_tb__DOT__errores = ((IData)(1U) 
                                               + vlSelfRef.register_tb__DOT__errores);
    } else {
        VL_WRITEF_NX("[N=4] OK  %s: data_out = %b\n",2
                     , 'S',&(vlSelfRef.__Vtask_register_tb__DOT__paso__5__caso)
                     , '#',4,(IData)(vlSelfRef.register_tb__DOT__data_out));
    }
    vlSelfRef.__Vtask_register_tb__DOT__paso__6__caso = "carga todos unos"s;
    __Vtask_register_tb__DOT__paso__6__esperado = 0x0fU;
    __Vtask_register_tb__DOT__paso__6__din = 0x0fU;
    __Vtask_register_tb__DOT__paso__6__we = 1U;
    __Vtask_register_tb__DOT__paso__6__rst = 0U;
    vlSelfRef.register_tb__DOT__reset = __Vtask_register_tb__DOT__paso__6__rst;
    vlSelfRef.register_tb__DOT__write_enable = __Vtask_register_tb__DOT__paso__6__we;
    vlSelfRef.register_tb__DOT__data_in = __Vtask_register_tb__DOT__paso__6__din;
    Vregister_tb___024root____VbeforeTrig_ha20119a5__0(vlSelf, 
                                                       "@(posedge register_tb.clk)");
    co_await vlSelfRef.__VtrigSched_ha20119a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_tb.clk)", 
                                                         "register_tb.sv", 
                                                         33);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "register_tb.sv", 
                                         34);
    if (VL_UNLIKELY((((IData)(vlSelfRef.register_tb__DOT__data_out) 
                      != (IData)(__Vtask_register_tb__DOT__paso__6__esperado))))) {
        VL_WRITEF_NX("[%0t] %%Error: register_tb.sv:36: Assertion failed in %m: [N=4] %s: data_out = %b, esperado = %b\n",6, 'M',vlSymsp->name(),"register_tb.paso", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_register_tb__DOT__paso__6__caso)
                     , '#',4,(IData)(vlSelfRef.register_tb__DOT__data_out)
                     , '#',4,__Vtask_register_tb__DOT__paso__6__esperado);
        VL_STOP_MT("register_tb.sv", 36, "");
        vlSelfRef.register_tb__DOT__errores = ((IData)(1U) 
                                               + vlSelfRef.register_tb__DOT__errores);
    } else {
        VL_WRITEF_NX("[N=4] OK  %s: data_out = %b\n",2
                     , 'S',&(vlSelfRef.__Vtask_register_tb__DOT__paso__6__caso)
                     , '#',4,(IData)(vlSelfRef.register_tb__DOT__data_out));
    }
    if ((0U == vlSelfRef.register_tb__DOT__errores)) {
        VL_WRITEF_NX("[N=4] Todos los tests pasaron\n",0);
    } else {
        VL_WRITEF_NX("[N=4] %0d tests fallaron\n",1
                     , '~',32,vlSelfRef.register_tb__DOT__errores);
    }
    VL_FINISH_MT("register_tb.sv", 62, "");
    co_return;
}

bool Vregister_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vregister_tb___024root___timing_ready(Vregister_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___timing_ready\n"); );
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_ha20119a5__0.ready("@(posedge register_tb.clk)");
    }
}

void Vregister_tb___024root___timing_resume(Vregister_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___timing_resume\n"); );
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_ha20119a5__0.moveToResumeQueue(
                                                          "@(posedge register_tb.clk)");
    vlSelfRef.__VtrigSched_ha20119a5__0.resume("@(posedge register_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vregister_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vregister_tb___024root___eval_phase__act(Vregister_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_phase__act\n"); );
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.register_tb__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__register_tb__DOT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__register_tb__DOT__clk__0 
            = vlSelfRef.register_tb__DOT__clk;
    }
    Vregister_tb___024root___timing_ready(vlSelf);
    Vregister_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregister_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vregister_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vregister_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vregister_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vregister_tb___024root___eval_phase__inact(Vregister_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_phase__inact\n"); );
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("register_tb.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vregister_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vregister_tb___024root___eval_phase__nba(Vregister_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_phase__nba\n"); );
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vregister_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    if (vlSelfRef.register_tb__DOT__reset) {
                        vlSelfRef.register_tb__DOT__data_out = 0U;
                    } else if (vlSelfRef.register_tb__DOT__write_enable) {
                        vlSelfRef.register_tb__DOT__data_out 
                            = vlSelfRef.register_tb__DOT__data_in;
                    }
                }
            }
        }
        Vregister_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vregister_tb___024root___eval(Vregister_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval\n"); );
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vregister_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("register_tb.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("register_tb.sv", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vregister_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("register_tb.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vregister_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vregister_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vregister_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vregister_tb___024root____VbeforeTrig_ha20119a5__0(Vregister_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root____VbeforeTrig_ha20119a5__0\n"); );
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.register_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__register_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__register_tb__DOT__clk__0 
        = vlSelfRef.register_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_ha20119a5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha20119a5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha20119a5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha20119a5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha20119a5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha20119a5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha20119a5__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vregister_tb___024root___eval_debug_assertions(Vregister_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_debug_assertions\n"); );
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

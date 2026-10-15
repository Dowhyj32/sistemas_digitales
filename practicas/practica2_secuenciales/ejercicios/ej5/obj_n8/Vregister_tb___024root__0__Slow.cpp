// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_tb.h for the primary calling header

#include "Vregister_tb__pch.h"

void Vregister_tb___024root___timing_ready(Vregister_tb___024root* vlSelf);

VL_ATTR_COLD void Vregister_tb___024root___eval_static(Vregister_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_static\n"); );
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.register_tb__DOT__errores = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__register_tb__DOT__clk__0 
        = vlSelfRef.register_tb__DOT__clk;
    Vregister_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vregister_tb___024root___eval_final(Vregister_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_final\n"); );
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vregister_tb___024root___eval_settle(Vregister_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___eval_settle\n"); );
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vregister_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vregister_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge register_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregister_tb___024root___ctor_var_reset(Vregister_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_tb___024root___ctor_var_reset\n"); );
    Vregister_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->register_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14159453895030219074ull);
    vlSelf->register_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12389282434299742224ull);
    vlSelf->register_tb__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6047694838906033662ull);
    vlSelf->register_tb__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2954630046384936636ull);
    vlSelf->register_tb__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16132451565483648653ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__register_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}

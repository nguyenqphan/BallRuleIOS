#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Purchaser
struct Purchaser_t212450161;
// System.String
struct String_t;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t2959286891;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t2030462110;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t3858045197;
// UnityEngine.Purchasing.Product
struct Product_t16267110;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Init1104172581.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc3942721256.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc3858045197.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Produc16267110.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc2274432868.h"

// System.Void Purchaser::.ctor()
extern "C"  void Purchaser__ctor_m413051162 (Purchaser_t212450161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Purchaser::.cctor()
extern "C"  void Purchaser__cctor_m3732555219 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Purchaser::Start()
extern "C"  void Purchaser_Start_m3655156250 (Purchaser_t212450161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Purchaser::InitializePurchasing()
extern "C"  void Purchaser_InitializePurchasing_m559697048 (Purchaser_t212450161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Purchaser::IsInitialized()
extern "C"  bool Purchaser_IsInitialized_m613397942 (Purchaser_t212450161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Purchaser::BuyConsumable()
extern "C"  void Purchaser_BuyConsumable_m2816045697 (Purchaser_t212450161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Purchaser::BuyNonConsumable()
extern "C"  void Purchaser_BuyNonConsumable_m126485780 (Purchaser_t212450161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Purchaser::BuySubscription()
extern "C"  void Purchaser_BuySubscription_m1504650107 (Purchaser_t212450161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Purchaser::BuyProductID(System.String)
extern "C"  void Purchaser_BuyProductID_m843237492 (Purchaser_t212450161 * __this, String_t* ___productId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Purchaser::RestorePurchases()
extern "C"  void Purchaser_RestorePurchases_m3480826638 (Purchaser_t212450161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Purchaser::OnInitialized(UnityEngine.Purchasing.IStoreController,UnityEngine.Purchasing.IExtensionProvider)
extern "C"  void Purchaser_OnInitialized_m1003936036 (Purchaser_t212450161 * __this, Il2CppObject * ___controller, Il2CppObject * ___extensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Purchaser::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void Purchaser_OnInitializeFailed_m1812547681 (Purchaser_t212450161 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchaseProcessingResult Purchaser::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t Purchaser_ProcessPurchase_m1990665364 (Purchaser_t212450161 * __this, PurchaseEventArgs_t3858045197 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Purchaser::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void Purchaser_OnPurchaseFailed_m3761700001 (Purchaser_t212450161 * __this, Product_t16267110 * ___product, int32_t ___failureReason, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Purchaser::<RestorePurchases>m__B(System.Boolean)
extern "C"  void Purchaser_U3CRestorePurchasesU3Em__B_m3921058708 (Il2CppObject * __this /* static, unused */, bool ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

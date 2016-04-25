#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.IRawStoreProvider
struct IRawStoreProvider_t1819103146;
// Uniject.IUtil
struct IUtil_t1019857343;
// UnityEngine.ILogger
struct ILogger_t4167641990;
// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_t2916625178;

#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Exte1577084462.h"
#include "Stores_UnityEngine_Purchasing_AndroidStore2117641833.h"
#include "UnityEngine_UnityEngine_RuntimePlatform1574985880.h"
#include "Stores_UnityEngine_Purchasing_FakeStoreUIMode2289974874.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.StandardPurchasingModule
struct  StandardPurchasingModule_t3337363742  : public AbstractPurchasingModule_t1577084462
{
public:
	// UnityEngine.Purchasing.AndroidStore UnityEngine.Purchasing.StandardPurchasingModule::m_AndroidPlatform
	int32_t ___m_AndroidPlatform_1;
	// UnityEngine.Purchasing.IRawStoreProvider UnityEngine.Purchasing.StandardPurchasingModule::m_PlatformProvider
	Il2CppObject * ___m_PlatformProvider_2;
	// UnityEngine.RuntimePlatform UnityEngine.Purchasing.StandardPurchasingModule::m_RuntimePlatform
	int32_t ___m_RuntimePlatform_3;
	// Uniject.IUtil UnityEngine.Purchasing.StandardPurchasingModule::m_Util
	Il2CppObject * ___m_Util_4;
	// UnityEngine.ILogger UnityEngine.Purchasing.StandardPurchasingModule::m_Logger
	Il2CppObject * ___m_Logger_5;
	// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreUIMode>k__BackingField
	int32_t ___U3CuseFakeStoreUIModeU3Ek__BackingField_6;
	// UnityEngine.Purchasing.WinRTStore UnityEngine.Purchasing.StandardPurchasingModule::windowsStore
	WinRTStore_t2916625178 * ___windowsStore_7;

public:
	inline static int32_t get_offset_of_m_AndroidPlatform_1() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t3337363742, ___m_AndroidPlatform_1)); }
	inline int32_t get_m_AndroidPlatform_1() const { return ___m_AndroidPlatform_1; }
	inline int32_t* get_address_of_m_AndroidPlatform_1() { return &___m_AndroidPlatform_1; }
	inline void set_m_AndroidPlatform_1(int32_t value)
	{
		___m_AndroidPlatform_1 = value;
	}

	inline static int32_t get_offset_of_m_PlatformProvider_2() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t3337363742, ___m_PlatformProvider_2)); }
	inline Il2CppObject * get_m_PlatformProvider_2() const { return ___m_PlatformProvider_2; }
	inline Il2CppObject ** get_address_of_m_PlatformProvider_2() { return &___m_PlatformProvider_2; }
	inline void set_m_PlatformProvider_2(Il2CppObject * value)
	{
		___m_PlatformProvider_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlatformProvider_2, value);
	}

	inline static int32_t get_offset_of_m_RuntimePlatform_3() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t3337363742, ___m_RuntimePlatform_3)); }
	inline int32_t get_m_RuntimePlatform_3() const { return ___m_RuntimePlatform_3; }
	inline int32_t* get_address_of_m_RuntimePlatform_3() { return &___m_RuntimePlatform_3; }
	inline void set_m_RuntimePlatform_3(int32_t value)
	{
		___m_RuntimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_m_Util_4() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t3337363742, ___m_Util_4)); }
	inline Il2CppObject * get_m_Util_4() const { return ___m_Util_4; }
	inline Il2CppObject ** get_address_of_m_Util_4() { return &___m_Util_4; }
	inline void set_m_Util_4(Il2CppObject * value)
	{
		___m_Util_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Util_4, value);
	}

	inline static int32_t get_offset_of_m_Logger_5() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t3337363742, ___m_Logger_5)); }
	inline Il2CppObject * get_m_Logger_5() const { return ___m_Logger_5; }
	inline Il2CppObject ** get_address_of_m_Logger_5() { return &___m_Logger_5; }
	inline void set_m_Logger_5(Il2CppObject * value)
	{
		___m_Logger_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Logger_5, value);
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreUIModeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t3337363742, ___U3CuseFakeStoreUIModeU3Ek__BackingField_6)); }
	inline int32_t get_U3CuseFakeStoreUIModeU3Ek__BackingField_6() const { return ___U3CuseFakeStoreUIModeU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CuseFakeStoreUIModeU3Ek__BackingField_6() { return &___U3CuseFakeStoreUIModeU3Ek__BackingField_6; }
	inline void set_U3CuseFakeStoreUIModeU3Ek__BackingField_6(int32_t value)
	{
		___U3CuseFakeStoreUIModeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_windowsStore_7() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t3337363742, ___windowsStore_7)); }
	inline WinRTStore_t2916625178 * get_windowsStore_7() const { return ___windowsStore_7; }
	inline WinRTStore_t2916625178 ** get_address_of_windowsStore_7() { return &___windowsStore_7; }
	inline void set_windowsStore_7(WinRTStore_t2916625178 * value)
	{
		___windowsStore_7 = value;
		Il2CppCodeGenWriteBarrier(&___windowsStore_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

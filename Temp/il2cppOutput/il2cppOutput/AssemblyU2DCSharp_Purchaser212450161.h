#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ShowPanels
struct ShowPanels_t2673010796;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t2959286891;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t2030462110;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t359458046;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Purchaser
struct  Purchaser_t212450161  : public MonoBehaviour_t3012272455
{
public:
	// ShowPanels Purchaser::showPanels
	ShowPanels_t2673010796 * ___showPanels_2;

public:
	inline static int32_t get_offset_of_showPanels_2() { return static_cast<int32_t>(offsetof(Purchaser_t212450161, ___showPanels_2)); }
	inline ShowPanels_t2673010796 * get_showPanels_2() const { return ___showPanels_2; }
	inline ShowPanels_t2673010796 ** get_address_of_showPanels_2() { return &___showPanels_2; }
	inline void set_showPanels_2(ShowPanels_t2673010796 * value)
	{
		___showPanels_2 = value;
		Il2CppCodeGenWriteBarrier(&___showPanels_2, value);
	}
};

struct Purchaser_t212450161_StaticFields
{
public:
	// UnityEngine.Purchasing.IStoreController Purchaser::m_StoreController
	Il2CppObject * ___m_StoreController_3;
	// UnityEngine.Purchasing.IExtensionProvider Purchaser::m_StoreExtensionProvider
	Il2CppObject * ___m_StoreExtensionProvider_4;
	// System.String Purchaser::kProductIDConsumable
	String_t* ___kProductIDConsumable_5;
	// System.String Purchaser::kProductIDNonConsumable
	String_t* ___kProductIDNonConsumable_6;
	// System.String Purchaser::kProductIDSubscription
	String_t* ___kProductIDSubscription_7;
	// System.String Purchaser::kProductNameAppleConsumable
	String_t* ___kProductNameAppleConsumable_8;
	// System.String Purchaser::kProductNameAppleNonConsumable
	String_t* ___kProductNameAppleNonConsumable_9;
	// System.String Purchaser::kProductNameAppleSubscription
	String_t* ___kProductNameAppleSubscription_10;
	// System.String Purchaser::kProductNameGooglePlayConsumable
	String_t* ___kProductNameGooglePlayConsumable_11;
	// System.String Purchaser::kProductNameGooglePlayNonConsumable
	String_t* ___kProductNameGooglePlayNonConsumable_12;
	// System.String Purchaser::kProductNameGooglePlaySubscription
	String_t* ___kProductNameGooglePlaySubscription_13;
	// System.Action`1<System.Boolean> Purchaser::<>f__am$cacheC
	Action_1_t359458046 * ___U3CU3Ef__amU24cacheC_14;

public:
	inline static int32_t get_offset_of_m_StoreController_3() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___m_StoreController_3)); }
	inline Il2CppObject * get_m_StoreController_3() const { return ___m_StoreController_3; }
	inline Il2CppObject ** get_address_of_m_StoreController_3() { return &___m_StoreController_3; }
	inline void set_m_StoreController_3(Il2CppObject * value)
	{
		___m_StoreController_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_StoreController_3, value);
	}

	inline static int32_t get_offset_of_m_StoreExtensionProvider_4() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___m_StoreExtensionProvider_4)); }
	inline Il2CppObject * get_m_StoreExtensionProvider_4() const { return ___m_StoreExtensionProvider_4; }
	inline Il2CppObject ** get_address_of_m_StoreExtensionProvider_4() { return &___m_StoreExtensionProvider_4; }
	inline void set_m_StoreExtensionProvider_4(Il2CppObject * value)
	{
		___m_StoreExtensionProvider_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_StoreExtensionProvider_4, value);
	}

	inline static int32_t get_offset_of_kProductIDConsumable_5() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___kProductIDConsumable_5)); }
	inline String_t* get_kProductIDConsumable_5() const { return ___kProductIDConsumable_5; }
	inline String_t** get_address_of_kProductIDConsumable_5() { return &___kProductIDConsumable_5; }
	inline void set_kProductIDConsumable_5(String_t* value)
	{
		___kProductIDConsumable_5 = value;
		Il2CppCodeGenWriteBarrier(&___kProductIDConsumable_5, value);
	}

	inline static int32_t get_offset_of_kProductIDNonConsumable_6() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___kProductIDNonConsumable_6)); }
	inline String_t* get_kProductIDNonConsumable_6() const { return ___kProductIDNonConsumable_6; }
	inline String_t** get_address_of_kProductIDNonConsumable_6() { return &___kProductIDNonConsumable_6; }
	inline void set_kProductIDNonConsumable_6(String_t* value)
	{
		___kProductIDNonConsumable_6 = value;
		Il2CppCodeGenWriteBarrier(&___kProductIDNonConsumable_6, value);
	}

	inline static int32_t get_offset_of_kProductIDSubscription_7() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___kProductIDSubscription_7)); }
	inline String_t* get_kProductIDSubscription_7() const { return ___kProductIDSubscription_7; }
	inline String_t** get_address_of_kProductIDSubscription_7() { return &___kProductIDSubscription_7; }
	inline void set_kProductIDSubscription_7(String_t* value)
	{
		___kProductIDSubscription_7 = value;
		Il2CppCodeGenWriteBarrier(&___kProductIDSubscription_7, value);
	}

	inline static int32_t get_offset_of_kProductNameAppleConsumable_8() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___kProductNameAppleConsumable_8)); }
	inline String_t* get_kProductNameAppleConsumable_8() const { return ___kProductNameAppleConsumable_8; }
	inline String_t** get_address_of_kProductNameAppleConsumable_8() { return &___kProductNameAppleConsumable_8; }
	inline void set_kProductNameAppleConsumable_8(String_t* value)
	{
		___kProductNameAppleConsumable_8 = value;
		Il2CppCodeGenWriteBarrier(&___kProductNameAppleConsumable_8, value);
	}

	inline static int32_t get_offset_of_kProductNameAppleNonConsumable_9() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___kProductNameAppleNonConsumable_9)); }
	inline String_t* get_kProductNameAppleNonConsumable_9() const { return ___kProductNameAppleNonConsumable_9; }
	inline String_t** get_address_of_kProductNameAppleNonConsumable_9() { return &___kProductNameAppleNonConsumable_9; }
	inline void set_kProductNameAppleNonConsumable_9(String_t* value)
	{
		___kProductNameAppleNonConsumable_9 = value;
		Il2CppCodeGenWriteBarrier(&___kProductNameAppleNonConsumable_9, value);
	}

	inline static int32_t get_offset_of_kProductNameAppleSubscription_10() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___kProductNameAppleSubscription_10)); }
	inline String_t* get_kProductNameAppleSubscription_10() const { return ___kProductNameAppleSubscription_10; }
	inline String_t** get_address_of_kProductNameAppleSubscription_10() { return &___kProductNameAppleSubscription_10; }
	inline void set_kProductNameAppleSubscription_10(String_t* value)
	{
		___kProductNameAppleSubscription_10 = value;
		Il2CppCodeGenWriteBarrier(&___kProductNameAppleSubscription_10, value);
	}

	inline static int32_t get_offset_of_kProductNameGooglePlayConsumable_11() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___kProductNameGooglePlayConsumable_11)); }
	inline String_t* get_kProductNameGooglePlayConsumable_11() const { return ___kProductNameGooglePlayConsumable_11; }
	inline String_t** get_address_of_kProductNameGooglePlayConsumable_11() { return &___kProductNameGooglePlayConsumable_11; }
	inline void set_kProductNameGooglePlayConsumable_11(String_t* value)
	{
		___kProductNameGooglePlayConsumable_11 = value;
		Il2CppCodeGenWriteBarrier(&___kProductNameGooglePlayConsumable_11, value);
	}

	inline static int32_t get_offset_of_kProductNameGooglePlayNonConsumable_12() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___kProductNameGooglePlayNonConsumable_12)); }
	inline String_t* get_kProductNameGooglePlayNonConsumable_12() const { return ___kProductNameGooglePlayNonConsumable_12; }
	inline String_t** get_address_of_kProductNameGooglePlayNonConsumable_12() { return &___kProductNameGooglePlayNonConsumable_12; }
	inline void set_kProductNameGooglePlayNonConsumable_12(String_t* value)
	{
		___kProductNameGooglePlayNonConsumable_12 = value;
		Il2CppCodeGenWriteBarrier(&___kProductNameGooglePlayNonConsumable_12, value);
	}

	inline static int32_t get_offset_of_kProductNameGooglePlaySubscription_13() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___kProductNameGooglePlaySubscription_13)); }
	inline String_t* get_kProductNameGooglePlaySubscription_13() const { return ___kProductNameGooglePlaySubscription_13; }
	inline String_t** get_address_of_kProductNameGooglePlaySubscription_13() { return &___kProductNameGooglePlaySubscription_13; }
	inline void set_kProductNameGooglePlaySubscription_13(String_t* value)
	{
		___kProductNameGooglePlaySubscription_13 = value;
		Il2CppCodeGenWriteBarrier(&___kProductNameGooglePlaySubscription_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheC_14() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___U3CU3Ef__amU24cacheC_14)); }
	inline Action_1_t359458046 * get_U3CU3Ef__amU24cacheC_14() const { return ___U3CU3Ef__amU24cacheC_14; }
	inline Action_1_t359458046 ** get_address_of_U3CU3Ef__amU24cacheC_14() { return &___U3CU3Ef__amU24cacheC_14; }
	inline void set_U3CU3Ef__amU24cacheC_14(Action_1_t359458046 * value)
	{
		___U3CU3Ef__amU24cacheC_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheC_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

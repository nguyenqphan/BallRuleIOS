#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// ShowPanels
struct ShowPanels_t2673010796;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityAdsManager
struct  UnityAdsManager_t3288720914  : public MonoBehaviour_t3012272455
{
public:
	// System.String UnityAdsManager::gameID
	String_t* ___gameID_2;
	// ShowPanels UnityAdsManager::showPanels
	ShowPanels_t2673010796 * ___showPanels_3;

public:
	inline static int32_t get_offset_of_gameID_2() { return static_cast<int32_t>(offsetof(UnityAdsManager_t3288720914, ___gameID_2)); }
	inline String_t* get_gameID_2() const { return ___gameID_2; }
	inline String_t** get_address_of_gameID_2() { return &___gameID_2; }
	inline void set_gameID_2(String_t* value)
	{
		___gameID_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameID_2, value);
	}

	inline static int32_t get_offset_of_showPanels_3() { return static_cast<int32_t>(offsetof(UnityAdsManager_t3288720914, ___showPanels_3)); }
	inline ShowPanels_t2673010796 * get_showPanels_3() const { return ___showPanels_3; }
	inline ShowPanels_t2673010796 ** get_address_of_showPanels_3() { return &___showPanels_3; }
	inline void set_showPanels_3(ShowPanels_t2673010796 * value)
	{
		___showPanels_3 = value;
		Il2CppCodeGenWriteBarrier(&___showPanels_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

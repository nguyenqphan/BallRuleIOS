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

public:
	inline static int32_t get_offset_of_gameID_2() { return static_cast<int32_t>(offsetof(UnityAdsManager_t3288720914, ___gameID_2)); }
	inline String_t* get_gameID_2() const { return ___gameID_2; }
	inline String_t** get_address_of_gameID_2() { return &___gameID_2; }
	inline void set_gameID_2(String_t* value)
	{
		___gameID_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameID_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WeatherMan
struct WeatherMan_t2413190374;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WeatherDetecter
struct  WeatherDetecter_t2833725060  : public MonoBehaviour_t3012272455
{
public:
	// WeatherMan WeatherDetecter::weatherMan
	WeatherMan_t2413190374 * ___weatherMan_2;

public:
	inline static int32_t get_offset_of_weatherMan_2() { return static_cast<int32_t>(offsetof(WeatherDetecter_t2833725060, ___weatherMan_2)); }
	inline WeatherMan_t2413190374 * get_weatherMan_2() const { return ___weatherMan_2; }
	inline WeatherMan_t2413190374 ** get_address_of_weatherMan_2() { return &___weatherMan_2; }
	inline void set_weatherMan_2(WeatherMan_t2413190374 * value)
	{
		___weatherMan_2 = value;
		Il2CppCodeGenWriteBarrier(&___weatherMan_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

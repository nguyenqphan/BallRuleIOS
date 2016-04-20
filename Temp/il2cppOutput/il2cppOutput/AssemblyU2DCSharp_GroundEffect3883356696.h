#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GroundEffect
struct  GroundEffect_t3883356696  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] GroundEffect::ground
	GameObjectU5BU5D_t3499186955* ___ground_2;

public:
	inline static int32_t get_offset_of_ground_2() { return static_cast<int32_t>(offsetof(GroundEffect_t3883356696, ___ground_2)); }
	inline GameObjectU5BU5D_t3499186955* get_ground_2() const { return ___ground_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_ground_2() { return &___ground_2; }
	inline void set_ground_2(GameObjectU5BU5D_t3499186955* value)
	{
		___ground_2 = value;
		Il2CppCodeGenWriteBarrier(&___ground_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

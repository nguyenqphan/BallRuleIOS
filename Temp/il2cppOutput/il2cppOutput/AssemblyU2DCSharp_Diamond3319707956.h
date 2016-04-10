#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Diamond/ActionBreaking
struct ActionBreaking_t3455992569;
// Diamond/EmissiveAction
struct EmissiveAction_t997068685;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_DiamondProperty1654949673.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Diamond
struct  Diamond_t3319707956  : public MonoBehaviour_t3012272455
{
public:
	// DiamondProperty Diamond::diamondP
	DiamondProperty_t1654949673  ___diamondP_2;

public:
	inline static int32_t get_offset_of_diamondP_2() { return static_cast<int32_t>(offsetof(Diamond_t3319707956, ___diamondP_2)); }
	inline DiamondProperty_t1654949673  get_diamondP_2() const { return ___diamondP_2; }
	inline DiamondProperty_t1654949673 * get_address_of_diamondP_2() { return &___diamondP_2; }
	inline void set_diamondP_2(DiamondProperty_t1654949673  value)
	{
		___diamondP_2 = value;
	}
};

struct Diamond_t3319707956_StaticFields
{
public:
	// Diamond/ActionBreaking Diamond::BreakingDiamond
	ActionBreaking_t3455992569 * ___BreakingDiamond_3;
	// Diamond/EmissiveAction Diamond::EmissiveDiamond
	EmissiveAction_t997068685 * ___EmissiveDiamond_4;

public:
	inline static int32_t get_offset_of_BreakingDiamond_3() { return static_cast<int32_t>(offsetof(Diamond_t3319707956_StaticFields, ___BreakingDiamond_3)); }
	inline ActionBreaking_t3455992569 * get_BreakingDiamond_3() const { return ___BreakingDiamond_3; }
	inline ActionBreaking_t3455992569 ** get_address_of_BreakingDiamond_3() { return &___BreakingDiamond_3; }
	inline void set_BreakingDiamond_3(ActionBreaking_t3455992569 * value)
	{
		___BreakingDiamond_3 = value;
		Il2CppCodeGenWriteBarrier(&___BreakingDiamond_3, value);
	}

	inline static int32_t get_offset_of_EmissiveDiamond_4() { return static_cast<int32_t>(offsetof(Diamond_t3319707956_StaticFields, ___EmissiveDiamond_4)); }
	inline EmissiveAction_t997068685 * get_EmissiveDiamond_4() const { return ___EmissiveDiamond_4; }
	inline EmissiveAction_t997068685 ** get_address_of_EmissiveDiamond_4() { return &___EmissiveDiamond_4; }
	inline void set_EmissiveDiamond_4(EmissiveAction_t997068685 * value)
	{
		___EmissiveDiamond_4 = value;
		Il2CppCodeGenWriteBarrier(&___EmissiveDiamond_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

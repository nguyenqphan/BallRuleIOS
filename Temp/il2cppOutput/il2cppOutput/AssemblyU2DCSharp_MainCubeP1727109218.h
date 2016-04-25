#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainCubeP
struct  MainCubeP_t1727109218 
{
public:
	// System.Single MainCubeP::movingSpeed
	float ___movingSpeed_0;
	// UnityEngine.Transform MainCubeP::mainCubeTransform
	Transform_t284553113 * ___mainCubeTransform_1;

public:
	inline static int32_t get_offset_of_movingSpeed_0() { return static_cast<int32_t>(offsetof(MainCubeP_t1727109218, ___movingSpeed_0)); }
	inline float get_movingSpeed_0() const { return ___movingSpeed_0; }
	inline float* get_address_of_movingSpeed_0() { return &___movingSpeed_0; }
	inline void set_movingSpeed_0(float value)
	{
		___movingSpeed_0 = value;
	}

	inline static int32_t get_offset_of_mainCubeTransform_1() { return static_cast<int32_t>(offsetof(MainCubeP_t1727109218, ___mainCubeTransform_1)); }
	inline Transform_t284553113 * get_mainCubeTransform_1() const { return ___mainCubeTransform_1; }
	inline Transform_t284553113 ** get_address_of_mainCubeTransform_1() { return &___mainCubeTransform_1; }
	inline void set_mainCubeTransform_1(Transform_t284553113 * value)
	{
		___mainCubeTransform_1 = value;
		Il2CppCodeGenWriteBarrier(&___mainCubeTransform_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

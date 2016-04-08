#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveTowadsTest
struct  MoveTowadsTest_t477145943  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector3 MoveTowadsTest::currentPos
	Vector3_t3525329789  ___currentPos_2;
	// System.Single MoveTowadsTest::speed
	float ___speed_3;

public:
	inline static int32_t get_offset_of_currentPos_2() { return static_cast<int32_t>(offsetof(MoveTowadsTest_t477145943, ___currentPos_2)); }
	inline Vector3_t3525329789  get_currentPos_2() const { return ___currentPos_2; }
	inline Vector3_t3525329789 * get_address_of_currentPos_2() { return &___currentPos_2; }
	inline void set_currentPos_2(Vector3_t3525329789  value)
	{
		___currentPos_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(MoveTowadsTest_t477145943, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

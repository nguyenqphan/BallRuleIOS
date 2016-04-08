#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollUV
struct  ScrollUV_t3957446222  : public MonoBehaviour_t3012272455
{
public:
	// System.Single ScrollUV::scrollSpeed_X
	float ___scrollSpeed_X_2;
	// System.Single ScrollUV::scrollSpeed_Y
	float ___scrollSpeed_Y_3;

public:
	inline static int32_t get_offset_of_scrollSpeed_X_2() { return static_cast<int32_t>(offsetof(ScrollUV_t3957446222, ___scrollSpeed_X_2)); }
	inline float get_scrollSpeed_X_2() const { return ___scrollSpeed_X_2; }
	inline float* get_address_of_scrollSpeed_X_2() { return &___scrollSpeed_X_2; }
	inline void set_scrollSpeed_X_2(float value)
	{
		___scrollSpeed_X_2 = value;
	}

	inline static int32_t get_offset_of_scrollSpeed_Y_3() { return static_cast<int32_t>(offsetof(ScrollUV_t3957446222, ___scrollSpeed_Y_3)); }
	inline float get_scrollSpeed_Y_3() const { return ___scrollSpeed_Y_3; }
	inline float* get_address_of_scrollSpeed_Y_3() { return &___scrollSpeed_Y_3; }
	inline void set_scrollSpeed_Y_3(float value)
	{
		___scrollSpeed_Y_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

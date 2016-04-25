#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeControllerP
struct  CubeControllerP_t322988191 
{
public:
	// System.Single CubeControllerP::rotateSpeed
	float ___rotateSpeed_0;
	// System.Single CubeControllerP::startTime
	float ___startTime_1;
	// System.Boolean CubeControllerP::rotating
	bool ___rotating_2;
	// UnityEngine.RaycastHit CubeControllerP::hit
	RaycastHit_t46221527  ___hit_3;
	// System.Single CubeControllerP::dirToRotate
	float ___dirToRotate_4;

public:
	inline static int32_t get_offset_of_rotateSpeed_0() { return static_cast<int32_t>(offsetof(CubeControllerP_t322988191, ___rotateSpeed_0)); }
	inline float get_rotateSpeed_0() const { return ___rotateSpeed_0; }
	inline float* get_address_of_rotateSpeed_0() { return &___rotateSpeed_0; }
	inline void set_rotateSpeed_0(float value)
	{
		___rotateSpeed_0 = value;
	}

	inline static int32_t get_offset_of_startTime_1() { return static_cast<int32_t>(offsetof(CubeControllerP_t322988191, ___startTime_1)); }
	inline float get_startTime_1() const { return ___startTime_1; }
	inline float* get_address_of_startTime_1() { return &___startTime_1; }
	inline void set_startTime_1(float value)
	{
		___startTime_1 = value;
	}

	inline static int32_t get_offset_of_rotating_2() { return static_cast<int32_t>(offsetof(CubeControllerP_t322988191, ___rotating_2)); }
	inline bool get_rotating_2() const { return ___rotating_2; }
	inline bool* get_address_of_rotating_2() { return &___rotating_2; }
	inline void set_rotating_2(bool value)
	{
		___rotating_2 = value;
	}

	inline static int32_t get_offset_of_hit_3() { return static_cast<int32_t>(offsetof(CubeControllerP_t322988191, ___hit_3)); }
	inline RaycastHit_t46221527  get_hit_3() const { return ___hit_3; }
	inline RaycastHit_t46221527 * get_address_of_hit_3() { return &___hit_3; }
	inline void set_hit_3(RaycastHit_t46221527  value)
	{
		___hit_3 = value;
	}

	inline static int32_t get_offset_of_dirToRotate_4() { return static_cast<int32_t>(offsetof(CubeControllerP_t322988191, ___dirToRotate_4)); }
	inline float get_dirToRotate_4() const { return ___dirToRotate_4; }
	inline float* get_address_of_dirToRotate_4() { return &___dirToRotate_4; }
	inline void set_dirToRotate_4(float value)
	{
		___dirToRotate_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

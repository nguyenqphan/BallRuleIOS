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
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraP
struct  CameraP_t2214017451 
{
public:
	// UnityEngine.Vector3 CameraP::velocity
	Vector3_t3525329789  ___velocity_0;
	// System.Single CameraP::smoothTime
	float ___smoothTime_1;
	// UnityEngine.Vector3 CameraP::playerPos
	Vector3_t3525329789  ___playerPos_2;
	// UnityEngine.Vector3 CameraP::playerPosNext
	Vector3_t3525329789  ___playerPosNext_3;
	// System.Single CameraP::distanceY
	float ___distanceY_4;
	// UnityEngine.Vector3 CameraP::playerStartPos
	Vector3_t3525329789  ___playerStartPos_5;
	// System.Single CameraP::distanceToMove
	float ___distanceToMove_6;
	// UnityEngine.Transform CameraP::camTransform
	Transform_t284553113 * ___camTransform_7;
	// UnityEngine.Transform CameraP::playerTransform
	Transform_t284553113 * ___playerTransform_8;

public:
	inline static int32_t get_offset_of_velocity_0() { return static_cast<int32_t>(offsetof(CameraP_t2214017451, ___velocity_0)); }
	inline Vector3_t3525329789  get_velocity_0() const { return ___velocity_0; }
	inline Vector3_t3525329789 * get_address_of_velocity_0() { return &___velocity_0; }
	inline void set_velocity_0(Vector3_t3525329789  value)
	{
		___velocity_0 = value;
	}

	inline static int32_t get_offset_of_smoothTime_1() { return static_cast<int32_t>(offsetof(CameraP_t2214017451, ___smoothTime_1)); }
	inline float get_smoothTime_1() const { return ___smoothTime_1; }
	inline float* get_address_of_smoothTime_1() { return &___smoothTime_1; }
	inline void set_smoothTime_1(float value)
	{
		___smoothTime_1 = value;
	}

	inline static int32_t get_offset_of_playerPos_2() { return static_cast<int32_t>(offsetof(CameraP_t2214017451, ___playerPos_2)); }
	inline Vector3_t3525329789  get_playerPos_2() const { return ___playerPos_2; }
	inline Vector3_t3525329789 * get_address_of_playerPos_2() { return &___playerPos_2; }
	inline void set_playerPos_2(Vector3_t3525329789  value)
	{
		___playerPos_2 = value;
	}

	inline static int32_t get_offset_of_playerPosNext_3() { return static_cast<int32_t>(offsetof(CameraP_t2214017451, ___playerPosNext_3)); }
	inline Vector3_t3525329789  get_playerPosNext_3() const { return ___playerPosNext_3; }
	inline Vector3_t3525329789 * get_address_of_playerPosNext_3() { return &___playerPosNext_3; }
	inline void set_playerPosNext_3(Vector3_t3525329789  value)
	{
		___playerPosNext_3 = value;
	}

	inline static int32_t get_offset_of_distanceY_4() { return static_cast<int32_t>(offsetof(CameraP_t2214017451, ___distanceY_4)); }
	inline float get_distanceY_4() const { return ___distanceY_4; }
	inline float* get_address_of_distanceY_4() { return &___distanceY_4; }
	inline void set_distanceY_4(float value)
	{
		___distanceY_4 = value;
	}

	inline static int32_t get_offset_of_playerStartPos_5() { return static_cast<int32_t>(offsetof(CameraP_t2214017451, ___playerStartPos_5)); }
	inline Vector3_t3525329789  get_playerStartPos_5() const { return ___playerStartPos_5; }
	inline Vector3_t3525329789 * get_address_of_playerStartPos_5() { return &___playerStartPos_5; }
	inline void set_playerStartPos_5(Vector3_t3525329789  value)
	{
		___playerStartPos_5 = value;
	}

	inline static int32_t get_offset_of_distanceToMove_6() { return static_cast<int32_t>(offsetof(CameraP_t2214017451, ___distanceToMove_6)); }
	inline float get_distanceToMove_6() const { return ___distanceToMove_6; }
	inline float* get_address_of_distanceToMove_6() { return &___distanceToMove_6; }
	inline void set_distanceToMove_6(float value)
	{
		___distanceToMove_6 = value;
	}

	inline static int32_t get_offset_of_camTransform_7() { return static_cast<int32_t>(offsetof(CameraP_t2214017451, ___camTransform_7)); }
	inline Transform_t284553113 * get_camTransform_7() const { return ___camTransform_7; }
	inline Transform_t284553113 ** get_address_of_camTransform_7() { return &___camTransform_7; }
	inline void set_camTransform_7(Transform_t284553113 * value)
	{
		___camTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&___camTransform_7, value);
	}

	inline static int32_t get_offset_of_playerTransform_8() { return static_cast<int32_t>(offsetof(CameraP_t2214017451, ___playerTransform_8)); }
	inline Transform_t284553113 * get_playerTransform_8() const { return ___playerTransform_8; }
	inline Transform_t284553113 ** get_address_of_playerTransform_8() { return &___playerTransform_8; }
	inline void set_playerTransform_8(Transform_t284553113 * value)
	{
		___playerTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&___playerTransform_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

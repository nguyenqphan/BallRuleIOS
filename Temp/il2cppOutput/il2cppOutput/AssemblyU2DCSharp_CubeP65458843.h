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

// CubeP
struct  CubeP_t65458843 
{
public:
	// System.Single CubeP::rotateSpeed
	float ___rotateSpeed_0;
	// System.Boolean CubeP::isRotating
	bool ___isRotating_1;
	// System.Single CubeP::startTime
	float ___startTime_2;
	// System.Single CubeP::startingY
	float ___startingY_3;
	// System.Single CubeP::newY
	float ___newY_4;
	// System.Boolean CubeP::isMovingDown
	bool ___isMovingDown_5;
	// System.Boolean CubeP::isMovingUp
	bool ___isMovingUp_6;
	// System.Single CubeP::movementDistance
	float ___movementDistance_7;
	// System.Single CubeP::floatSpeed
	float ___floatSpeed_8;
	// System.Boolean CubeP::isOneRound
	bool ___isOneRound_9;
	// UnityEngine.Transform CubeP::cubeTransform
	Transform_t284553113 * ___cubeTransform_10;

public:
	inline static int32_t get_offset_of_rotateSpeed_0() { return static_cast<int32_t>(offsetof(CubeP_t65458843, ___rotateSpeed_0)); }
	inline float get_rotateSpeed_0() const { return ___rotateSpeed_0; }
	inline float* get_address_of_rotateSpeed_0() { return &___rotateSpeed_0; }
	inline void set_rotateSpeed_0(float value)
	{
		___rotateSpeed_0 = value;
	}

	inline static int32_t get_offset_of_isRotating_1() { return static_cast<int32_t>(offsetof(CubeP_t65458843, ___isRotating_1)); }
	inline bool get_isRotating_1() const { return ___isRotating_1; }
	inline bool* get_address_of_isRotating_1() { return &___isRotating_1; }
	inline void set_isRotating_1(bool value)
	{
		___isRotating_1 = value;
	}

	inline static int32_t get_offset_of_startTime_2() { return static_cast<int32_t>(offsetof(CubeP_t65458843, ___startTime_2)); }
	inline float get_startTime_2() const { return ___startTime_2; }
	inline float* get_address_of_startTime_2() { return &___startTime_2; }
	inline void set_startTime_2(float value)
	{
		___startTime_2 = value;
	}

	inline static int32_t get_offset_of_startingY_3() { return static_cast<int32_t>(offsetof(CubeP_t65458843, ___startingY_3)); }
	inline float get_startingY_3() const { return ___startingY_3; }
	inline float* get_address_of_startingY_3() { return &___startingY_3; }
	inline void set_startingY_3(float value)
	{
		___startingY_3 = value;
	}

	inline static int32_t get_offset_of_newY_4() { return static_cast<int32_t>(offsetof(CubeP_t65458843, ___newY_4)); }
	inline float get_newY_4() const { return ___newY_4; }
	inline float* get_address_of_newY_4() { return &___newY_4; }
	inline void set_newY_4(float value)
	{
		___newY_4 = value;
	}

	inline static int32_t get_offset_of_isMovingDown_5() { return static_cast<int32_t>(offsetof(CubeP_t65458843, ___isMovingDown_5)); }
	inline bool get_isMovingDown_5() const { return ___isMovingDown_5; }
	inline bool* get_address_of_isMovingDown_5() { return &___isMovingDown_5; }
	inline void set_isMovingDown_5(bool value)
	{
		___isMovingDown_5 = value;
	}

	inline static int32_t get_offset_of_isMovingUp_6() { return static_cast<int32_t>(offsetof(CubeP_t65458843, ___isMovingUp_6)); }
	inline bool get_isMovingUp_6() const { return ___isMovingUp_6; }
	inline bool* get_address_of_isMovingUp_6() { return &___isMovingUp_6; }
	inline void set_isMovingUp_6(bool value)
	{
		___isMovingUp_6 = value;
	}

	inline static int32_t get_offset_of_movementDistance_7() { return static_cast<int32_t>(offsetof(CubeP_t65458843, ___movementDistance_7)); }
	inline float get_movementDistance_7() const { return ___movementDistance_7; }
	inline float* get_address_of_movementDistance_7() { return &___movementDistance_7; }
	inline void set_movementDistance_7(float value)
	{
		___movementDistance_7 = value;
	}

	inline static int32_t get_offset_of_floatSpeed_8() { return static_cast<int32_t>(offsetof(CubeP_t65458843, ___floatSpeed_8)); }
	inline float get_floatSpeed_8() const { return ___floatSpeed_8; }
	inline float* get_address_of_floatSpeed_8() { return &___floatSpeed_8; }
	inline void set_floatSpeed_8(float value)
	{
		___floatSpeed_8 = value;
	}

	inline static int32_t get_offset_of_isOneRound_9() { return static_cast<int32_t>(offsetof(CubeP_t65458843, ___isOneRound_9)); }
	inline bool get_isOneRound_9() const { return ___isOneRound_9; }
	inline bool* get_address_of_isOneRound_9() { return &___isOneRound_9; }
	inline void set_isOneRound_9(bool value)
	{
		___isOneRound_9 = value;
	}

	inline static int32_t get_offset_of_cubeTransform_10() { return static_cast<int32_t>(offsetof(CubeP_t65458843, ___cubeTransform_10)); }
	inline Transform_t284553113 * get_cubeTransform_10() const { return ___cubeTransform_10; }
	inline Transform_t284553113 ** get_address_of_cubeTransform_10() { return &___cubeTransform_10; }
	inline void set_cubeTransform_10(Transform_t284553113 * value)
	{
		___cubeTransform_10 = value;
		Il2CppCodeGenWriteBarrier(&___cubeTransform_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

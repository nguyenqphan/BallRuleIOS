#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AddTorgueTest
struct  AddTorgueTest_t2215257235  : public MonoBehaviour_t3012272455
{
public:
	// System.Single AddTorgueTest::torque
	float ___torque_2;
	// UnityEngine.Rigidbody AddTorgueTest::rb
	Rigidbody_t1972007546 * ___rb_3;
	// UnityEngine.RaycastHit AddTorgueTest::hit
	RaycastHit_t46221527  ___hit_4;
	// UnityEngine.LayerMask AddTorgueTest::cube
	LayerMask_t1862190090  ___cube_5;
	// System.Boolean AddTorgueTest::mousePress
	bool ___mousePress_6;

public:
	inline static int32_t get_offset_of_torque_2() { return static_cast<int32_t>(offsetof(AddTorgueTest_t2215257235, ___torque_2)); }
	inline float get_torque_2() const { return ___torque_2; }
	inline float* get_address_of_torque_2() { return &___torque_2; }
	inline void set_torque_2(float value)
	{
		___torque_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(AddTorgueTest_t2215257235, ___rb_3)); }
	inline Rigidbody_t1972007546 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody_t1972007546 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb_3, value);
	}

	inline static int32_t get_offset_of_hit_4() { return static_cast<int32_t>(offsetof(AddTorgueTest_t2215257235, ___hit_4)); }
	inline RaycastHit_t46221527  get_hit_4() const { return ___hit_4; }
	inline RaycastHit_t46221527 * get_address_of_hit_4() { return &___hit_4; }
	inline void set_hit_4(RaycastHit_t46221527  value)
	{
		___hit_4 = value;
	}

	inline static int32_t get_offset_of_cube_5() { return static_cast<int32_t>(offsetof(AddTorgueTest_t2215257235, ___cube_5)); }
	inline LayerMask_t1862190090  get_cube_5() const { return ___cube_5; }
	inline LayerMask_t1862190090 * get_address_of_cube_5() { return &___cube_5; }
	inline void set_cube_5(LayerMask_t1862190090  value)
	{
		___cube_5 = value;
	}

	inline static int32_t get_offset_of_mousePress_6() { return static_cast<int32_t>(offsetof(AddTorgueTest_t2215257235, ___mousePress_6)); }
	inline bool get_mousePress_6() const { return ___mousePress_6; }
	inline bool* get_address_of_mousePress_6() { return &___mousePress_6; }
	inline void set_mousePress_6(bool value)
	{
		___mousePress_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Ball/ActionScaling
struct ActionScaling_t4098096209;
// Ball/ActionExplode
struct ActionExplode_t878049707;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_BallP63949329.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ball
struct  Ball_t2062879  : public MonoBehaviour_t3012272455
{
public:
	// BallP Ball::ballP
	BallP_t63949329  ___ballP_2;

public:
	inline static int32_t get_offset_of_ballP_2() { return static_cast<int32_t>(offsetof(Ball_t2062879, ___ballP_2)); }
	inline BallP_t63949329  get_ballP_2() const { return ___ballP_2; }
	inline BallP_t63949329 * get_address_of_ballP_2() { return &___ballP_2; }
	inline void set_ballP_2(BallP_t63949329  value)
	{
		___ballP_2 = value;
	}
};

struct Ball_t2062879_StaticFields
{
public:
	// Ball/ActionScaling Ball::Scalling
	ActionScaling_t4098096209 * ___Scalling_3;
	// Ball/ActionExplode Ball::ExplodeBall
	ActionExplode_t878049707 * ___ExplodeBall_4;

public:
	inline static int32_t get_offset_of_Scalling_3() { return static_cast<int32_t>(offsetof(Ball_t2062879_StaticFields, ___Scalling_3)); }
	inline ActionScaling_t4098096209 * get_Scalling_3() const { return ___Scalling_3; }
	inline ActionScaling_t4098096209 ** get_address_of_Scalling_3() { return &___Scalling_3; }
	inline void set_Scalling_3(ActionScaling_t4098096209 * value)
	{
		___Scalling_3 = value;
		Il2CppCodeGenWriteBarrier(&___Scalling_3, value);
	}

	inline static int32_t get_offset_of_ExplodeBall_4() { return static_cast<int32_t>(offsetof(Ball_t2062879_StaticFields, ___ExplodeBall_4)); }
	inline ActionExplode_t878049707 * get_ExplodeBall_4() const { return ___ExplodeBall_4; }
	inline ActionExplode_t878049707 ** get_address_of_ExplodeBall_4() { return &___ExplodeBall_4; }
	inline void set_ExplodeBall_4(ActionExplode_t878049707 * value)
	{
		___ExplodeBall_4 = value;
		Il2CppCodeGenWriteBarrier(&___ExplodeBall_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SoundBreaking
struct SoundBreaking_t2714241170;
// Cube
struct Cube_t2111573;

#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeManagerP
struct  CubeManagerP_t508845496 
{
public:
	// SoundBreaking CubeManagerP::soundCubeClick
	SoundBreaking_t2714241170 * ___soundCubeClick_0;
	// System.Boolean CubeManagerP::getInput
	bool ___getInput_1;
	// UnityEngine.RaycastHit CubeManagerP::hit
	RaycastHit_t46221527  ___hit_2;
	// UnityEngine.Ray CubeManagerP::ray
	Ray_t1522967639  ___ray_3;
	// Cube CubeManagerP::cube
	Cube_t2111573 * ___cube_4;

public:
	inline static int32_t get_offset_of_soundCubeClick_0() { return static_cast<int32_t>(offsetof(CubeManagerP_t508845496, ___soundCubeClick_0)); }
	inline SoundBreaking_t2714241170 * get_soundCubeClick_0() const { return ___soundCubeClick_0; }
	inline SoundBreaking_t2714241170 ** get_address_of_soundCubeClick_0() { return &___soundCubeClick_0; }
	inline void set_soundCubeClick_0(SoundBreaking_t2714241170 * value)
	{
		___soundCubeClick_0 = value;
		Il2CppCodeGenWriteBarrier(&___soundCubeClick_0, value);
	}

	inline static int32_t get_offset_of_getInput_1() { return static_cast<int32_t>(offsetof(CubeManagerP_t508845496, ___getInput_1)); }
	inline bool get_getInput_1() const { return ___getInput_1; }
	inline bool* get_address_of_getInput_1() { return &___getInput_1; }
	inline void set_getInput_1(bool value)
	{
		___getInput_1 = value;
	}

	inline static int32_t get_offset_of_hit_2() { return static_cast<int32_t>(offsetof(CubeManagerP_t508845496, ___hit_2)); }
	inline RaycastHit_t46221527  get_hit_2() const { return ___hit_2; }
	inline RaycastHit_t46221527 * get_address_of_hit_2() { return &___hit_2; }
	inline void set_hit_2(RaycastHit_t46221527  value)
	{
		___hit_2 = value;
	}

	inline static int32_t get_offset_of_ray_3() { return static_cast<int32_t>(offsetof(CubeManagerP_t508845496, ___ray_3)); }
	inline Ray_t1522967639  get_ray_3() const { return ___ray_3; }
	inline Ray_t1522967639 * get_address_of_ray_3() { return &___ray_3; }
	inline void set_ray_3(Ray_t1522967639  value)
	{
		___ray_3 = value;
	}

	inline static int32_t get_offset_of_cube_4() { return static_cast<int32_t>(offsetof(CubeManagerP_t508845496, ___cube_4)); }
	inline Cube_t2111573 * get_cube_4() const { return ___cube_4; }
	inline Cube_t2111573 ** get_address_of_cube_4() { return &___cube_4; }
	inline void set_cube_4(Cube_t2111573 * value)
	{
		___cube_4 = value;
		Il2CppCodeGenWriteBarrier(&___cube_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

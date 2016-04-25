#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_CubeControllerP322988191.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeController
struct  CubeController_t1811534289  : public MonoBehaviour_t3012272455
{
public:
	// CubeControllerP CubeController::cubeControllerP
	CubeControllerP_t322988191  ___cubeControllerP_2;
	// UnityEngine.LayerMask CubeController::cube
	LayerMask_t1862190090  ___cube_3;
	// UnityEngine.AudioClip CubeController::cubeClick
	AudioClip_t3714538611 * ___cubeClick_4;
	// UnityEngine.AudioSource CubeController::cubeClickSource
	AudioSource_t3628549054 * ___cubeClickSource_5;

public:
	inline static int32_t get_offset_of_cubeControllerP_2() { return static_cast<int32_t>(offsetof(CubeController_t1811534289, ___cubeControllerP_2)); }
	inline CubeControllerP_t322988191  get_cubeControllerP_2() const { return ___cubeControllerP_2; }
	inline CubeControllerP_t322988191 * get_address_of_cubeControllerP_2() { return &___cubeControllerP_2; }
	inline void set_cubeControllerP_2(CubeControllerP_t322988191  value)
	{
		___cubeControllerP_2 = value;
	}

	inline static int32_t get_offset_of_cube_3() { return static_cast<int32_t>(offsetof(CubeController_t1811534289, ___cube_3)); }
	inline LayerMask_t1862190090  get_cube_3() const { return ___cube_3; }
	inline LayerMask_t1862190090 * get_address_of_cube_3() { return &___cube_3; }
	inline void set_cube_3(LayerMask_t1862190090  value)
	{
		___cube_3 = value;
	}

	inline static int32_t get_offset_of_cubeClick_4() { return static_cast<int32_t>(offsetof(CubeController_t1811534289, ___cubeClick_4)); }
	inline AudioClip_t3714538611 * get_cubeClick_4() const { return ___cubeClick_4; }
	inline AudioClip_t3714538611 ** get_address_of_cubeClick_4() { return &___cubeClick_4; }
	inline void set_cubeClick_4(AudioClip_t3714538611 * value)
	{
		___cubeClick_4 = value;
		Il2CppCodeGenWriteBarrier(&___cubeClick_4, value);
	}

	inline static int32_t get_offset_of_cubeClickSource_5() { return static_cast<int32_t>(offsetof(CubeController_t1811534289, ___cubeClickSource_5)); }
	inline AudioSource_t3628549054 * get_cubeClickSource_5() const { return ___cubeClickSource_5; }
	inline AudioSource_t3628549054 ** get_address_of_cubeClickSource_5() { return &___cubeClickSource_5; }
	inline void set_cubeClickSource_5(AudioSource_t3628549054 * value)
	{
		___cubeClickSource_5 = value;
		Il2CppCodeGenWriteBarrier(&___cubeClickSource_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

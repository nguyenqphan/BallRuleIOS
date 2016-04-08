#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_CameraP2214017451.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraTracker
struct  CameraTracker_t2740516915  : public MonoBehaviour_t3012272455
{
public:
	// CameraP CameraTracker::cameraP
	CameraP_t2214017451  ___cameraP_2;
	// UnityEngine.GameObject CameraTracker::player
	GameObject_t4012695102 * ___player_3;

public:
	inline static int32_t get_offset_of_cameraP_2() { return static_cast<int32_t>(offsetof(CameraTracker_t2740516915, ___cameraP_2)); }
	inline CameraP_t2214017451  get_cameraP_2() const { return ___cameraP_2; }
	inline CameraP_t2214017451 * get_address_of_cameraP_2() { return &___cameraP_2; }
	inline void set_cameraP_2(CameraP_t2214017451  value)
	{
		___cameraP_2 = value;
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(CameraTracker_t2740516915, ___player_3)); }
	inline GameObject_t4012695102 * get_player_3() const { return ___player_3; }
	inline GameObject_t4012695102 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(GameObject_t4012695102 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

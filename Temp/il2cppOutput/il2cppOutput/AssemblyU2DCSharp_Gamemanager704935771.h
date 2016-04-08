#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pause
struct Pause_t76887510;
// CubeManager
struct CubeManager_t4034287000;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gamemanager
struct  Gamemanager_t704935771  : public MonoBehaviour_t3012272455
{
public:
	// Pause Gamemanager::pause
	Pause_t76887510 * ___pause_2;
	// CubeManager Gamemanager::cubeManager
	CubeManager_t4034287000 * ___cubeManager_3;

public:
	inline static int32_t get_offset_of_pause_2() { return static_cast<int32_t>(offsetof(Gamemanager_t704935771, ___pause_2)); }
	inline Pause_t76887510 * get_pause_2() const { return ___pause_2; }
	inline Pause_t76887510 ** get_address_of_pause_2() { return &___pause_2; }
	inline void set_pause_2(Pause_t76887510 * value)
	{
		___pause_2 = value;
		Il2CppCodeGenWriteBarrier(&___pause_2, value);
	}

	inline static int32_t get_offset_of_cubeManager_3() { return static_cast<int32_t>(offsetof(Gamemanager_t704935771, ___cubeManager_3)); }
	inline CubeManager_t4034287000 * get_cubeManager_3() const { return ___cubeManager_3; }
	inline CubeManager_t4034287000 ** get_address_of_cubeManager_3() { return &___cubeManager_3; }
	inline void set_cubeManager_3(CubeManager_t4034287000 * value)
	{
		___cubeManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___cubeManager_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

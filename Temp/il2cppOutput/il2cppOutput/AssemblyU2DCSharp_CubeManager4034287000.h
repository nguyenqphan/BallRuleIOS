#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_CubeManagerP508845496.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeManager
struct  CubeManager_t4034287000  : public MonoBehaviour_t3012272455
{
public:
	// CubeManagerP CubeManager::cubeManagerP
	CubeManagerP_t508845496  ___cubeManagerP_2;
	// UnityEngine.LayerMask CubeManager::cubeLayerMask
	LayerMask_t1862190090  ___cubeLayerMask_3;

public:
	inline static int32_t get_offset_of_cubeManagerP_2() { return static_cast<int32_t>(offsetof(CubeManager_t4034287000, ___cubeManagerP_2)); }
	inline CubeManagerP_t508845496  get_cubeManagerP_2() const { return ___cubeManagerP_2; }
	inline CubeManagerP_t508845496 * get_address_of_cubeManagerP_2() { return &___cubeManagerP_2; }
	inline void set_cubeManagerP_2(CubeManagerP_t508845496  value)
	{
		___cubeManagerP_2 = value;
	}

	inline static int32_t get_offset_of_cubeLayerMask_3() { return static_cast<int32_t>(offsetof(CubeManager_t4034287000, ___cubeLayerMask_3)); }
	inline LayerMask_t1862190090  get_cubeLayerMask_3() const { return ___cubeLayerMask_3; }
	inline LayerMask_t1862190090 * get_address_of_cubeLayerMask_3() { return &___cubeLayerMask_3; }
	inline void set_cubeLayerMask_3(LayerMask_t1862190090  value)
	{
		___cubeLayerMask_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

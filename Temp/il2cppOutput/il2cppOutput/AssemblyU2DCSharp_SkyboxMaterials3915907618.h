#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material[]
struct MaterialU5BU5D_t3353847197;
// UnityEngine.Skybox
struct Skybox_t4001624439;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkyboxMaterials
struct  SkyboxMaterials_t3915907618  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Material[] SkyboxMaterials::materials
	MaterialU5BU5D_t3353847197* ___materials_2;
	// UnityEngine.Skybox SkyboxMaterials::skybox
	Skybox_t4001624439 * ___skybox_3;

public:
	inline static int32_t get_offset_of_materials_2() { return static_cast<int32_t>(offsetof(SkyboxMaterials_t3915907618, ___materials_2)); }
	inline MaterialU5BU5D_t3353847197* get_materials_2() const { return ___materials_2; }
	inline MaterialU5BU5D_t3353847197** get_address_of_materials_2() { return &___materials_2; }
	inline void set_materials_2(MaterialU5BU5D_t3353847197* value)
	{
		___materials_2 = value;
		Il2CppCodeGenWriteBarrier(&___materials_2, value);
	}

	inline static int32_t get_offset_of_skybox_3() { return static_cast<int32_t>(offsetof(SkyboxMaterials_t3915907618, ___skybox_3)); }
	inline Skybox_t4001624439 * get_skybox_3() const { return ___skybox_3; }
	inline Skybox_t4001624439 ** get_address_of_skybox_3() { return &___skybox_3; }
	inline void set_skybox_3(Skybox_t4001624439 * value)
	{
		___skybox_3 = value;
		Il2CppCodeGenWriteBarrier(&___skybox_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

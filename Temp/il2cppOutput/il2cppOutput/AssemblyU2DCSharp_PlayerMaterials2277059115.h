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
// UnityEngine.Renderer
struct Renderer_t1092684080;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMaterials
struct  PlayerMaterials_t2277059115  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Material[] PlayerMaterials::materials
	MaterialU5BU5D_t3353847197* ___materials_2;
	// UnityEngine.Renderer PlayerMaterials::renderMaterial
	Renderer_t1092684080 * ___renderMaterial_3;
	// System.Int32 PlayerMaterials::matIndex
	int32_t ___matIndex_4;

public:
	inline static int32_t get_offset_of_materials_2() { return static_cast<int32_t>(offsetof(PlayerMaterials_t2277059115, ___materials_2)); }
	inline MaterialU5BU5D_t3353847197* get_materials_2() const { return ___materials_2; }
	inline MaterialU5BU5D_t3353847197** get_address_of_materials_2() { return &___materials_2; }
	inline void set_materials_2(MaterialU5BU5D_t3353847197* value)
	{
		___materials_2 = value;
		Il2CppCodeGenWriteBarrier(&___materials_2, value);
	}

	inline static int32_t get_offset_of_renderMaterial_3() { return static_cast<int32_t>(offsetof(PlayerMaterials_t2277059115, ___renderMaterial_3)); }
	inline Renderer_t1092684080 * get_renderMaterial_3() const { return ___renderMaterial_3; }
	inline Renderer_t1092684080 ** get_address_of_renderMaterial_3() { return &___renderMaterial_3; }
	inline void set_renderMaterial_3(Renderer_t1092684080 * value)
	{
		___renderMaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&___renderMaterial_3, value);
	}

	inline static int32_t get_offset_of_matIndex_4() { return static_cast<int32_t>(offsetof(PlayerMaterials_t2277059115, ___matIndex_4)); }
	inline int32_t get_matIndex_4() const { return ___matIndex_4; }
	inline int32_t* get_address_of_matIndex_4() { return &___matIndex_4; }
	inline void set_matIndex_4(int32_t value)
	{
		___matIndex_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

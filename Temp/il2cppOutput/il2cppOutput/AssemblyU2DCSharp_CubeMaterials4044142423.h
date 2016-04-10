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

// CubeMaterials
struct  CubeMaterials_t4044142423  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 CubeMaterials::matIndex
	int32_t ___matIndex_2;
	// UnityEngine.Material[] CubeMaterials::cubeMats
	MaterialU5BU5D_t3353847197* ___cubeMats_3;
	// UnityEngine.Renderer CubeMaterials::renderMaterial
	Renderer_t1092684080 * ___renderMaterial_4;

public:
	inline static int32_t get_offset_of_matIndex_2() { return static_cast<int32_t>(offsetof(CubeMaterials_t4044142423, ___matIndex_2)); }
	inline int32_t get_matIndex_2() const { return ___matIndex_2; }
	inline int32_t* get_address_of_matIndex_2() { return &___matIndex_2; }
	inline void set_matIndex_2(int32_t value)
	{
		___matIndex_2 = value;
	}

	inline static int32_t get_offset_of_cubeMats_3() { return static_cast<int32_t>(offsetof(CubeMaterials_t4044142423, ___cubeMats_3)); }
	inline MaterialU5BU5D_t3353847197* get_cubeMats_3() const { return ___cubeMats_3; }
	inline MaterialU5BU5D_t3353847197** get_address_of_cubeMats_3() { return &___cubeMats_3; }
	inline void set_cubeMats_3(MaterialU5BU5D_t3353847197* value)
	{
		___cubeMats_3 = value;
		Il2CppCodeGenWriteBarrier(&___cubeMats_3, value);
	}

	inline static int32_t get_offset_of_renderMaterial_4() { return static_cast<int32_t>(offsetof(CubeMaterials_t4044142423, ___renderMaterial_4)); }
	inline Renderer_t1092684080 * get_renderMaterial_4() const { return ___renderMaterial_4; }
	inline Renderer_t1092684080 ** get_address_of_renderMaterial_4() { return &___renderMaterial_4; }
	inline void set_renderMaterial_4(Renderer_t1092684080 * value)
	{
		___renderMaterial_4 = value;
		Il2CppCodeGenWriteBarrier(&___renderMaterial_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

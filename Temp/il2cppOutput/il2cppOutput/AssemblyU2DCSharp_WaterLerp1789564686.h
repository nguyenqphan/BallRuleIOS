#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer
struct Renderer_t1092684080;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaterLerp
struct  WaterLerp_t1789564686  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Renderer WaterLerp::render
	Renderer_t1092684080 * ___render_2;
	// UnityEngine.Vector4 WaterLerp::colorValue
	Vector4_t3525329790  ___colorValue_3;
	// UnityEngine.Color WaterLerp::newColor
	Color_t1588175760  ___newColor_4;

public:
	inline static int32_t get_offset_of_render_2() { return static_cast<int32_t>(offsetof(WaterLerp_t1789564686, ___render_2)); }
	inline Renderer_t1092684080 * get_render_2() const { return ___render_2; }
	inline Renderer_t1092684080 ** get_address_of_render_2() { return &___render_2; }
	inline void set_render_2(Renderer_t1092684080 * value)
	{
		___render_2 = value;
		Il2CppCodeGenWriteBarrier(&___render_2, value);
	}

	inline static int32_t get_offset_of_colorValue_3() { return static_cast<int32_t>(offsetof(WaterLerp_t1789564686, ___colorValue_3)); }
	inline Vector4_t3525329790  get_colorValue_3() const { return ___colorValue_3; }
	inline Vector4_t3525329790 * get_address_of_colorValue_3() { return &___colorValue_3; }
	inline void set_colorValue_3(Vector4_t3525329790  value)
	{
		___colorValue_3 = value;
	}

	inline static int32_t get_offset_of_newColor_4() { return static_cast<int32_t>(offsetof(WaterLerp_t1789564686, ___newColor_4)); }
	inline Color_t1588175760  get_newColor_4() const { return ___newColor_4; }
	inline Color_t1588175760 * get_address_of_newColor_4() { return &___newColor_4; }
	inline void set_newColor_4(Color_t1588175760  value)
	{
		___newColor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

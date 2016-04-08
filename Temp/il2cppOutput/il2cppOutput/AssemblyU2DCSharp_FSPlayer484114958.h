#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Light[]
struct LightU5BU5D_t3653382738;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3353847197;
// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FSPlayer
struct  FSPlayer_t484114958  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Light[] FSPlayer::m_LightList
	LightU5BU5D_t3653382738* ___m_LightList_2;
	// UnityEngine.Material[] FSPlayer::m_SkyboxList
	MaterialU5BU5D_t3353847197* ___m_SkyboxList_3;
	// UnityEngine.Color[] FSPlayer::FogColorList
	ColorU5BU5D_t3477081137* ___FogColorList_4;
	// UnityEngine.Color[] FSPlayer::AmbientLightList
	ColorU5BU5D_t3477081137* ___AmbientLightList_5;
	// System.Int32 FSPlayer::m_CurrentSkyBox
	int32_t ___m_CurrentSkyBox_6;

public:
	inline static int32_t get_offset_of_m_LightList_2() { return static_cast<int32_t>(offsetof(FSPlayer_t484114958, ___m_LightList_2)); }
	inline LightU5BU5D_t3653382738* get_m_LightList_2() const { return ___m_LightList_2; }
	inline LightU5BU5D_t3653382738** get_address_of_m_LightList_2() { return &___m_LightList_2; }
	inline void set_m_LightList_2(LightU5BU5D_t3653382738* value)
	{
		___m_LightList_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_LightList_2, value);
	}

	inline static int32_t get_offset_of_m_SkyboxList_3() { return static_cast<int32_t>(offsetof(FSPlayer_t484114958, ___m_SkyboxList_3)); }
	inline MaterialU5BU5D_t3353847197* get_m_SkyboxList_3() const { return ___m_SkyboxList_3; }
	inline MaterialU5BU5D_t3353847197** get_address_of_m_SkyboxList_3() { return &___m_SkyboxList_3; }
	inline void set_m_SkyboxList_3(MaterialU5BU5D_t3353847197* value)
	{
		___m_SkyboxList_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_SkyboxList_3, value);
	}

	inline static int32_t get_offset_of_FogColorList_4() { return static_cast<int32_t>(offsetof(FSPlayer_t484114958, ___FogColorList_4)); }
	inline ColorU5BU5D_t3477081137* get_FogColorList_4() const { return ___FogColorList_4; }
	inline ColorU5BU5D_t3477081137** get_address_of_FogColorList_4() { return &___FogColorList_4; }
	inline void set_FogColorList_4(ColorU5BU5D_t3477081137* value)
	{
		___FogColorList_4 = value;
		Il2CppCodeGenWriteBarrier(&___FogColorList_4, value);
	}

	inline static int32_t get_offset_of_AmbientLightList_5() { return static_cast<int32_t>(offsetof(FSPlayer_t484114958, ___AmbientLightList_5)); }
	inline ColorU5BU5D_t3477081137* get_AmbientLightList_5() const { return ___AmbientLightList_5; }
	inline ColorU5BU5D_t3477081137** get_address_of_AmbientLightList_5() { return &___AmbientLightList_5; }
	inline void set_AmbientLightList_5(ColorU5BU5D_t3477081137* value)
	{
		___AmbientLightList_5 = value;
		Il2CppCodeGenWriteBarrier(&___AmbientLightList_5, value);
	}

	inline static int32_t get_offset_of_m_CurrentSkyBox_6() { return static_cast<int32_t>(offsetof(FSPlayer_t484114958, ___m_CurrentSkyBox_6)); }
	inline int32_t get_m_CurrentSkyBox_6() const { return ___m_CurrentSkyBox_6; }
	inline int32_t* get_address_of_m_CurrentSkyBox_6() { return &___m_CurrentSkyBox_6; }
	inline void set_m_CurrentSkyBox_6(int32_t value)
	{
		___m_CurrentSkyBox_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

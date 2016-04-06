#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.UI.Image
struct Image_t3354615620;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollDetailTexture
struct  ScrollDetailTexture_t3150826909  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean ScrollDetailTexture::uniqueMaterial
	bool ___uniqueMaterial_2;
	// UnityEngine.Vector2 ScrollDetailTexture::scrollPerSecond
	Vector2_t3525329788  ___scrollPerSecond_3;
	// UnityEngine.Matrix4x4 ScrollDetailTexture::m_Matrix
	Matrix4x4_t277289660  ___m_Matrix_4;
	// UnityEngine.Material ScrollDetailTexture::mCopy
	Material_t1886596500 * ___mCopy_5;
	// UnityEngine.Material ScrollDetailTexture::mOriginal
	Material_t1886596500 * ___mOriginal_6;
	// UnityEngine.UI.Image ScrollDetailTexture::mSprite
	Image_t3354615620 * ___mSprite_7;
	// UnityEngine.Material ScrollDetailTexture::m_Mat
	Material_t1886596500 * ___m_Mat_8;

public:
	inline static int32_t get_offset_of_uniqueMaterial_2() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t3150826909, ___uniqueMaterial_2)); }
	inline bool get_uniqueMaterial_2() const { return ___uniqueMaterial_2; }
	inline bool* get_address_of_uniqueMaterial_2() { return &___uniqueMaterial_2; }
	inline void set_uniqueMaterial_2(bool value)
	{
		___uniqueMaterial_2 = value;
	}

	inline static int32_t get_offset_of_scrollPerSecond_3() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t3150826909, ___scrollPerSecond_3)); }
	inline Vector2_t3525329788  get_scrollPerSecond_3() const { return ___scrollPerSecond_3; }
	inline Vector2_t3525329788 * get_address_of_scrollPerSecond_3() { return &___scrollPerSecond_3; }
	inline void set_scrollPerSecond_3(Vector2_t3525329788  value)
	{
		___scrollPerSecond_3 = value;
	}

	inline static int32_t get_offset_of_m_Matrix_4() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t3150826909, ___m_Matrix_4)); }
	inline Matrix4x4_t277289660  get_m_Matrix_4() const { return ___m_Matrix_4; }
	inline Matrix4x4_t277289660 * get_address_of_m_Matrix_4() { return &___m_Matrix_4; }
	inline void set_m_Matrix_4(Matrix4x4_t277289660  value)
	{
		___m_Matrix_4 = value;
	}

	inline static int32_t get_offset_of_mCopy_5() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t3150826909, ___mCopy_5)); }
	inline Material_t1886596500 * get_mCopy_5() const { return ___mCopy_5; }
	inline Material_t1886596500 ** get_address_of_mCopy_5() { return &___mCopy_5; }
	inline void set_mCopy_5(Material_t1886596500 * value)
	{
		___mCopy_5 = value;
		Il2CppCodeGenWriteBarrier(&___mCopy_5, value);
	}

	inline static int32_t get_offset_of_mOriginal_6() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t3150826909, ___mOriginal_6)); }
	inline Material_t1886596500 * get_mOriginal_6() const { return ___mOriginal_6; }
	inline Material_t1886596500 ** get_address_of_mOriginal_6() { return &___mOriginal_6; }
	inline void set_mOriginal_6(Material_t1886596500 * value)
	{
		___mOriginal_6 = value;
		Il2CppCodeGenWriteBarrier(&___mOriginal_6, value);
	}

	inline static int32_t get_offset_of_mSprite_7() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t3150826909, ___mSprite_7)); }
	inline Image_t3354615620 * get_mSprite_7() const { return ___mSprite_7; }
	inline Image_t3354615620 ** get_address_of_mSprite_7() { return &___mSprite_7; }
	inline void set_mSprite_7(Image_t3354615620 * value)
	{
		___mSprite_7 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_7, value);
	}

	inline static int32_t get_offset_of_m_Mat_8() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t3150826909, ___m_Mat_8)); }
	inline Material_t1886596500 * get_m_Mat_8() const { return ___m_Mat_8; }
	inline Material_t1886596500 ** get_address_of_m_Mat_8() { return &___m_Mat_8; }
	inline void set_m_Mat_8(Material_t1886596500 * value)
	{
		___m_Mat_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Mat_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

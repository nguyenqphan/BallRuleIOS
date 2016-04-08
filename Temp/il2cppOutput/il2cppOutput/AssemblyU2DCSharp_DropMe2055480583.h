﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t3354615620;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DropMe
struct  DropMe_t2055480583  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Image DropMe::containerImage
	Image_t3354615620 * ___containerImage_2;
	// UnityEngine.UI.Image DropMe::receivingImage
	Image_t3354615620 * ___receivingImage_3;
	// UnityEngine.Color DropMe::normalColor
	Color_t1588175760  ___normalColor_4;
	// UnityEngine.Color DropMe::highlightColor
	Color_t1588175760  ___highlightColor_5;

public:
	inline static int32_t get_offset_of_containerImage_2() { return static_cast<int32_t>(offsetof(DropMe_t2055480583, ___containerImage_2)); }
	inline Image_t3354615620 * get_containerImage_2() const { return ___containerImage_2; }
	inline Image_t3354615620 ** get_address_of_containerImage_2() { return &___containerImage_2; }
	inline void set_containerImage_2(Image_t3354615620 * value)
	{
		___containerImage_2 = value;
		Il2CppCodeGenWriteBarrier(&___containerImage_2, value);
	}

	inline static int32_t get_offset_of_receivingImage_3() { return static_cast<int32_t>(offsetof(DropMe_t2055480583, ___receivingImage_3)); }
	inline Image_t3354615620 * get_receivingImage_3() const { return ___receivingImage_3; }
	inline Image_t3354615620 ** get_address_of_receivingImage_3() { return &___receivingImage_3; }
	inline void set_receivingImage_3(Image_t3354615620 * value)
	{
		___receivingImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___receivingImage_3, value);
	}

	inline static int32_t get_offset_of_normalColor_4() { return static_cast<int32_t>(offsetof(DropMe_t2055480583, ___normalColor_4)); }
	inline Color_t1588175760  get_normalColor_4() const { return ___normalColor_4; }
	inline Color_t1588175760 * get_address_of_normalColor_4() { return &___normalColor_4; }
	inline void set_normalColor_4(Color_t1588175760  value)
	{
		___normalColor_4 = value;
	}

	inline static int32_t get_offset_of_highlightColor_5() { return static_cast<int32_t>(offsetof(DropMe_t2055480583, ___highlightColor_5)); }
	inline Color_t1588175760  get_highlightColor_5() const { return ___highlightColor_5; }
	inline Color_t1588175760 * get_address_of_highlightColor_5() { return &___highlightColor_5; }
	inline void set_highlightColor_5(Color_t1588175760  value)
	{
		___highlightColor_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

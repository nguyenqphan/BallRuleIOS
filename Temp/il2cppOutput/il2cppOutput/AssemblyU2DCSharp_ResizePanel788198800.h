#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3317474837;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResizePanel
struct  ResizePanel_t788198800  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector2 ResizePanel::minSize
	Vector2_t3525329788  ___minSize_2;
	// UnityEngine.Vector2 ResizePanel::maxSize
	Vector2_t3525329788  ___maxSize_3;
	// UnityEngine.RectTransform ResizePanel::panelRectTransform
	RectTransform_t3317474837 * ___panelRectTransform_4;
	// UnityEngine.Vector2 ResizePanel::originalLocalPointerPosition
	Vector2_t3525329788  ___originalLocalPointerPosition_5;
	// UnityEngine.Vector2 ResizePanel::originalSizeDelta
	Vector2_t3525329788  ___originalSizeDelta_6;

public:
	inline static int32_t get_offset_of_minSize_2() { return static_cast<int32_t>(offsetof(ResizePanel_t788198800, ___minSize_2)); }
	inline Vector2_t3525329788  get_minSize_2() const { return ___minSize_2; }
	inline Vector2_t3525329788 * get_address_of_minSize_2() { return &___minSize_2; }
	inline void set_minSize_2(Vector2_t3525329788  value)
	{
		___minSize_2 = value;
	}

	inline static int32_t get_offset_of_maxSize_3() { return static_cast<int32_t>(offsetof(ResizePanel_t788198800, ___maxSize_3)); }
	inline Vector2_t3525329788  get_maxSize_3() const { return ___maxSize_3; }
	inline Vector2_t3525329788 * get_address_of_maxSize_3() { return &___maxSize_3; }
	inline void set_maxSize_3(Vector2_t3525329788  value)
	{
		___maxSize_3 = value;
	}

	inline static int32_t get_offset_of_panelRectTransform_4() { return static_cast<int32_t>(offsetof(ResizePanel_t788198800, ___panelRectTransform_4)); }
	inline RectTransform_t3317474837 * get_panelRectTransform_4() const { return ___panelRectTransform_4; }
	inline RectTransform_t3317474837 ** get_address_of_panelRectTransform_4() { return &___panelRectTransform_4; }
	inline void set_panelRectTransform_4(RectTransform_t3317474837 * value)
	{
		___panelRectTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___panelRectTransform_4, value);
	}

	inline static int32_t get_offset_of_originalLocalPointerPosition_5() { return static_cast<int32_t>(offsetof(ResizePanel_t788198800, ___originalLocalPointerPosition_5)); }
	inline Vector2_t3525329788  get_originalLocalPointerPosition_5() const { return ___originalLocalPointerPosition_5; }
	inline Vector2_t3525329788 * get_address_of_originalLocalPointerPosition_5() { return &___originalLocalPointerPosition_5; }
	inline void set_originalLocalPointerPosition_5(Vector2_t3525329788  value)
	{
		___originalLocalPointerPosition_5 = value;
	}

	inline static int32_t get_offset_of_originalSizeDelta_6() { return static_cast<int32_t>(offsetof(ResizePanel_t788198800, ___originalSizeDelta_6)); }
	inline Vector2_t3525329788  get_originalSizeDelta_6() const { return ___originalSizeDelta_6; }
	inline Vector2_t3525329788 * get_address_of_originalSizeDelta_6() { return &___originalSizeDelta_6; }
	inline void set_originalSizeDelta_6(Vector2_t3525329788  value)
	{
		___originalSizeDelta_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

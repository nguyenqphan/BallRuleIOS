#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t208538589;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RectTransform>
struct Dictionary_2_t3808285620;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragMe
struct  DragMe_t2055054860  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean DragMe::dragOnSurfaces
	bool ___dragOnSurfaces_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject> DragMe::m_DraggingIcons
	Dictionary_2_t208538589 * ___m_DraggingIcons_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RectTransform> DragMe::m_DraggingPlanes
	Dictionary_2_t3808285620 * ___m_DraggingPlanes_4;

public:
	inline static int32_t get_offset_of_dragOnSurfaces_2() { return static_cast<int32_t>(offsetof(DragMe_t2055054860, ___dragOnSurfaces_2)); }
	inline bool get_dragOnSurfaces_2() const { return ___dragOnSurfaces_2; }
	inline bool* get_address_of_dragOnSurfaces_2() { return &___dragOnSurfaces_2; }
	inline void set_dragOnSurfaces_2(bool value)
	{
		___dragOnSurfaces_2 = value;
	}

	inline static int32_t get_offset_of_m_DraggingIcons_3() { return static_cast<int32_t>(offsetof(DragMe_t2055054860, ___m_DraggingIcons_3)); }
	inline Dictionary_2_t208538589 * get_m_DraggingIcons_3() const { return ___m_DraggingIcons_3; }
	inline Dictionary_2_t208538589 ** get_address_of_m_DraggingIcons_3() { return &___m_DraggingIcons_3; }
	inline void set_m_DraggingIcons_3(Dictionary_2_t208538589 * value)
	{
		___m_DraggingIcons_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_DraggingIcons_3, value);
	}

	inline static int32_t get_offset_of_m_DraggingPlanes_4() { return static_cast<int32_t>(offsetof(DragMe_t2055054860, ___m_DraggingPlanes_4)); }
	inline Dictionary_2_t3808285620 * get_m_DraggingPlanes_4() const { return ___m_DraggingPlanes_4; }
	inline Dictionary_2_t3808285620 ** get_address_of_m_DraggingPlanes_4() { return &___m_DraggingPlanes_4; }
	inline void set_m_DraggingPlanes_4(Dictionary_2_t3808285620 * value)
	{
		___m_DraggingPlanes_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_DraggingPlanes_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

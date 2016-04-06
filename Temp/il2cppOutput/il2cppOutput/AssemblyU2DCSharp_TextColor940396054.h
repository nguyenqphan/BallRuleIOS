#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextColor
struct  TextColor_t940396054  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text TextColor::scoreTextColor
	Text_t3286458198 * ___scoreTextColor_2;
	// UnityEngine.UI.Text TextColor::bestTextColor
	Text_t3286458198 * ___bestTextColor_3;
	// UnityEngine.UI.Text TextColor::scoreDisplay
	Text_t3286458198 * ___scoreDisplay_4;
	// UnityEngine.UI.Text TextColor::bestDisplay
	Text_t3286458198 * ___bestDisplay_5;
	// UnityEngine.UI.Text TextColor::liveScoreDisplay
	Text_t3286458198 * ___liveScoreDisplay_6;

public:
	inline static int32_t get_offset_of_scoreTextColor_2() { return static_cast<int32_t>(offsetof(TextColor_t940396054, ___scoreTextColor_2)); }
	inline Text_t3286458198 * get_scoreTextColor_2() const { return ___scoreTextColor_2; }
	inline Text_t3286458198 ** get_address_of_scoreTextColor_2() { return &___scoreTextColor_2; }
	inline void set_scoreTextColor_2(Text_t3286458198 * value)
	{
		___scoreTextColor_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreTextColor_2, value);
	}

	inline static int32_t get_offset_of_bestTextColor_3() { return static_cast<int32_t>(offsetof(TextColor_t940396054, ___bestTextColor_3)); }
	inline Text_t3286458198 * get_bestTextColor_3() const { return ___bestTextColor_3; }
	inline Text_t3286458198 ** get_address_of_bestTextColor_3() { return &___bestTextColor_3; }
	inline void set_bestTextColor_3(Text_t3286458198 * value)
	{
		___bestTextColor_3 = value;
		Il2CppCodeGenWriteBarrier(&___bestTextColor_3, value);
	}

	inline static int32_t get_offset_of_scoreDisplay_4() { return static_cast<int32_t>(offsetof(TextColor_t940396054, ___scoreDisplay_4)); }
	inline Text_t3286458198 * get_scoreDisplay_4() const { return ___scoreDisplay_4; }
	inline Text_t3286458198 ** get_address_of_scoreDisplay_4() { return &___scoreDisplay_4; }
	inline void set_scoreDisplay_4(Text_t3286458198 * value)
	{
		___scoreDisplay_4 = value;
		Il2CppCodeGenWriteBarrier(&___scoreDisplay_4, value);
	}

	inline static int32_t get_offset_of_bestDisplay_5() { return static_cast<int32_t>(offsetof(TextColor_t940396054, ___bestDisplay_5)); }
	inline Text_t3286458198 * get_bestDisplay_5() const { return ___bestDisplay_5; }
	inline Text_t3286458198 ** get_address_of_bestDisplay_5() { return &___bestDisplay_5; }
	inline void set_bestDisplay_5(Text_t3286458198 * value)
	{
		___bestDisplay_5 = value;
		Il2CppCodeGenWriteBarrier(&___bestDisplay_5, value);
	}

	inline static int32_t get_offset_of_liveScoreDisplay_6() { return static_cast<int32_t>(offsetof(TextColor_t940396054, ___liveScoreDisplay_6)); }
	inline Text_t3286458198 * get_liveScoreDisplay_6() const { return ___liveScoreDisplay_6; }
	inline Text_t3286458198 ** get_address_of_liveScoreDisplay_6() { return &___liveScoreDisplay_6; }
	inline void set_liveScoreDisplay_6(Text_t3286458198 * value)
	{
		___liveScoreDisplay_6 = value;
		Il2CppCodeGenWriteBarrier(&___liveScoreDisplay_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

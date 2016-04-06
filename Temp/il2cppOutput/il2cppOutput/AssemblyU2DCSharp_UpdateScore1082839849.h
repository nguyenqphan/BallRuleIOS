﻿#pragma once

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

// UpdateScore
struct  UpdateScore_t1082839849  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text UpdateScore::scoreLabel
	Text_t3286458198 * ___scoreLabel_2;
	// UnityEngine.UI.Text UpdateScore::bestScoreLabel
	Text_t3286458198 * ___bestScoreLabel_3;
	// UnityEngine.UI.Text UpdateScore::liveScoreLable
	Text_t3286458198 * ___liveScoreLable_4;
	// UnityEngine.UI.Text UpdateScore::timerLabel
	Text_t3286458198 * ___timerLabel_5;
	// UnityEngine.UI.Text UpdateScore::timerChallenge
	Text_t3286458198 * ___timerChallenge_6;

public:
	inline static int32_t get_offset_of_scoreLabel_2() { return static_cast<int32_t>(offsetof(UpdateScore_t1082839849, ___scoreLabel_2)); }
	inline Text_t3286458198 * get_scoreLabel_2() const { return ___scoreLabel_2; }
	inline Text_t3286458198 ** get_address_of_scoreLabel_2() { return &___scoreLabel_2; }
	inline void set_scoreLabel_2(Text_t3286458198 * value)
	{
		___scoreLabel_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreLabel_2, value);
	}

	inline static int32_t get_offset_of_bestScoreLabel_3() { return static_cast<int32_t>(offsetof(UpdateScore_t1082839849, ___bestScoreLabel_3)); }
	inline Text_t3286458198 * get_bestScoreLabel_3() const { return ___bestScoreLabel_3; }
	inline Text_t3286458198 ** get_address_of_bestScoreLabel_3() { return &___bestScoreLabel_3; }
	inline void set_bestScoreLabel_3(Text_t3286458198 * value)
	{
		___bestScoreLabel_3 = value;
		Il2CppCodeGenWriteBarrier(&___bestScoreLabel_3, value);
	}

	inline static int32_t get_offset_of_liveScoreLable_4() { return static_cast<int32_t>(offsetof(UpdateScore_t1082839849, ___liveScoreLable_4)); }
	inline Text_t3286458198 * get_liveScoreLable_4() const { return ___liveScoreLable_4; }
	inline Text_t3286458198 ** get_address_of_liveScoreLable_4() { return &___liveScoreLable_4; }
	inline void set_liveScoreLable_4(Text_t3286458198 * value)
	{
		___liveScoreLable_4 = value;
		Il2CppCodeGenWriteBarrier(&___liveScoreLable_4, value);
	}

	inline static int32_t get_offset_of_timerLabel_5() { return static_cast<int32_t>(offsetof(UpdateScore_t1082839849, ___timerLabel_5)); }
	inline Text_t3286458198 * get_timerLabel_5() const { return ___timerLabel_5; }
	inline Text_t3286458198 ** get_address_of_timerLabel_5() { return &___timerLabel_5; }
	inline void set_timerLabel_5(Text_t3286458198 * value)
	{
		___timerLabel_5 = value;
		Il2CppCodeGenWriteBarrier(&___timerLabel_5, value);
	}

	inline static int32_t get_offset_of_timerChallenge_6() { return static_cast<int32_t>(offsetof(UpdateScore_t1082839849, ___timerChallenge_6)); }
	inline Text_t3286458198 * get_timerChallenge_6() const { return ___timerChallenge_6; }
	inline Text_t3286458198 ** get_address_of_timerChallenge_6() { return &___timerChallenge_6; }
	inline void set_timerChallenge_6(Text_t3286458198 * value)
	{
		___timerChallenge_6 = value;
		Il2CppCodeGenWriteBarrier(&___timerChallenge_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

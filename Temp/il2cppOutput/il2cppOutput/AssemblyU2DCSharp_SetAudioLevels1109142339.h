#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Audio.AudioMixer
struct AudioMixer_t2872434200;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SetAudioLevels
struct  SetAudioLevels_t1109142339  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Audio.AudioMixer SetAudioLevels::mainMixer
	AudioMixer_t2872434200 * ___mainMixer_2;

public:
	inline static int32_t get_offset_of_mainMixer_2() { return static_cast<int32_t>(offsetof(SetAudioLevels_t1109142339, ___mainMixer_2)); }
	inline AudioMixer_t2872434200 * get_mainMixer_2() const { return ___mainMixer_2; }
	inline AudioMixer_t2872434200 ** get_address_of_mainMixer_2() { return &___mainMixer_2; }
	inline void set_mainMixer_2(AudioMixer_t2872434200 * value)
	{
		___mainMixer_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainMixer_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

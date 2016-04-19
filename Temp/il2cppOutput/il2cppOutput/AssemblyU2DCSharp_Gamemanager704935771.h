#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pause
struct Pause_t76887510;
// PlayMusic
struct PlayMusic_t109867825;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gamemanager
struct  Gamemanager_t704935771  : public MonoBehaviour_t3012272455
{
public:
	// Pause Gamemanager::pause
	Pause_t76887510 * ___pause_2;
	// PlayMusic Gamemanager::playMusic
	PlayMusic_t109867825 * ___playMusic_3;

public:
	inline static int32_t get_offset_of_pause_2() { return static_cast<int32_t>(offsetof(Gamemanager_t704935771, ___pause_2)); }
	inline Pause_t76887510 * get_pause_2() const { return ___pause_2; }
	inline Pause_t76887510 ** get_address_of_pause_2() { return &___pause_2; }
	inline void set_pause_2(Pause_t76887510 * value)
	{
		___pause_2 = value;
		Il2CppCodeGenWriteBarrier(&___pause_2, value);
	}

	inline static int32_t get_offset_of_playMusic_3() { return static_cast<int32_t>(offsetof(Gamemanager_t704935771, ___playMusic_3)); }
	inline PlayMusic_t109867825 * get_playMusic_3() const { return ___playMusic_3; }
	inline PlayMusic_t109867825 ** get_address_of_playMusic_3() { return &___playMusic_3; }
	inline void set_playMusic_3(PlayMusic_t109867825 * value)
	{
		___playMusic_3 = value;
		Il2CppCodeGenWriteBarrier(&___playMusic_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

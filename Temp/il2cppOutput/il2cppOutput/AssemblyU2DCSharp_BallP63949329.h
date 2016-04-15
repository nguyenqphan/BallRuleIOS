#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SoundBreaking
struct SoundBreaking_t2714241170;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallP
struct  BallP_t63949329 
{
public:
	// System.Single BallP::movingSpeed
	float ___movingSpeed_0;
	// System.Single BallP::scale
	float ___scale_1;
	// System.Single BallP::startScale
	float ___startScale_2;
	// System.Boolean BallP::isBigger
	bool ___isBigger_3;
	// System.Single BallP::scaleSpeed
	float ___scaleSpeed_4;
	// System.Single BallP::newScale
	float ___newScale_5;
	// SoundBreaking BallP::ballExplodeClip
	SoundBreaking_t2714241170 * ___ballExplodeClip_6;

public:
	inline static int32_t get_offset_of_movingSpeed_0() { return static_cast<int32_t>(offsetof(BallP_t63949329, ___movingSpeed_0)); }
	inline float get_movingSpeed_0() const { return ___movingSpeed_0; }
	inline float* get_address_of_movingSpeed_0() { return &___movingSpeed_0; }
	inline void set_movingSpeed_0(float value)
	{
		___movingSpeed_0 = value;
	}

	inline static int32_t get_offset_of_scale_1() { return static_cast<int32_t>(offsetof(BallP_t63949329, ___scale_1)); }
	inline float get_scale_1() const { return ___scale_1; }
	inline float* get_address_of_scale_1() { return &___scale_1; }
	inline void set_scale_1(float value)
	{
		___scale_1 = value;
	}

	inline static int32_t get_offset_of_startScale_2() { return static_cast<int32_t>(offsetof(BallP_t63949329, ___startScale_2)); }
	inline float get_startScale_2() const { return ___startScale_2; }
	inline float* get_address_of_startScale_2() { return &___startScale_2; }
	inline void set_startScale_2(float value)
	{
		___startScale_2 = value;
	}

	inline static int32_t get_offset_of_isBigger_3() { return static_cast<int32_t>(offsetof(BallP_t63949329, ___isBigger_3)); }
	inline bool get_isBigger_3() const { return ___isBigger_3; }
	inline bool* get_address_of_isBigger_3() { return &___isBigger_3; }
	inline void set_isBigger_3(bool value)
	{
		___isBigger_3 = value;
	}

	inline static int32_t get_offset_of_scaleSpeed_4() { return static_cast<int32_t>(offsetof(BallP_t63949329, ___scaleSpeed_4)); }
	inline float get_scaleSpeed_4() const { return ___scaleSpeed_4; }
	inline float* get_address_of_scaleSpeed_4() { return &___scaleSpeed_4; }
	inline void set_scaleSpeed_4(float value)
	{
		___scaleSpeed_4 = value;
	}

	inline static int32_t get_offset_of_newScale_5() { return static_cast<int32_t>(offsetof(BallP_t63949329, ___newScale_5)); }
	inline float get_newScale_5() const { return ___newScale_5; }
	inline float* get_address_of_newScale_5() { return &___newScale_5; }
	inline void set_newScale_5(float value)
	{
		___newScale_5 = value;
	}

	inline static int32_t get_offset_of_ballExplodeClip_6() { return static_cast<int32_t>(offsetof(BallP_t63949329, ___ballExplodeClip_6)); }
	inline SoundBreaking_t2714241170 * get_ballExplodeClip_6() const { return ___ballExplodeClip_6; }
	inline SoundBreaking_t2714241170 ** get_address_of_ballExplodeClip_6() { return &___ballExplodeClip_6; }
	inline void set_ballExplodeClip_6(SoundBreaking_t2714241170 * value)
	{
		___ballExplodeClip_6 = value;
		Il2CppCodeGenWriteBarrier(&___ballExplodeClip_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

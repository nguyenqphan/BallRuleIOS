#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Flashing
struct Flashing_t1690224146;
// EventManager
struct EventManager_t1907836883;
// Deactivator/EffectAction
struct EffectAction_t3544139591;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Deactivator
struct  Deactivator_t4192724884  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Deactivator::time
	float ___time_2;
	// System.Single Deactivator::resetTime
	float ___resetTime_3;
	// Flashing Deactivator::flashing
	Flashing_t1690224146 * ___flashing_4;
	// EventManager Deactivator::eventManager
	EventManager_t1907836883 * ___eventManager_5;
	// System.Boolean Deactivator::isFlashing
	bool ___isFlashing_6;

public:
	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(Deactivator_t4192724884, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_resetTime_3() { return static_cast<int32_t>(offsetof(Deactivator_t4192724884, ___resetTime_3)); }
	inline float get_resetTime_3() const { return ___resetTime_3; }
	inline float* get_address_of_resetTime_3() { return &___resetTime_3; }
	inline void set_resetTime_3(float value)
	{
		___resetTime_3 = value;
	}

	inline static int32_t get_offset_of_flashing_4() { return static_cast<int32_t>(offsetof(Deactivator_t4192724884, ___flashing_4)); }
	inline Flashing_t1690224146 * get_flashing_4() const { return ___flashing_4; }
	inline Flashing_t1690224146 ** get_address_of_flashing_4() { return &___flashing_4; }
	inline void set_flashing_4(Flashing_t1690224146 * value)
	{
		___flashing_4 = value;
		Il2CppCodeGenWriteBarrier(&___flashing_4, value);
	}

	inline static int32_t get_offset_of_eventManager_5() { return static_cast<int32_t>(offsetof(Deactivator_t4192724884, ___eventManager_5)); }
	inline EventManager_t1907836883 * get_eventManager_5() const { return ___eventManager_5; }
	inline EventManager_t1907836883 ** get_address_of_eventManager_5() { return &___eventManager_5; }
	inline void set_eventManager_5(EventManager_t1907836883 * value)
	{
		___eventManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___eventManager_5, value);
	}

	inline static int32_t get_offset_of_isFlashing_6() { return static_cast<int32_t>(offsetof(Deactivator_t4192724884, ___isFlashing_6)); }
	inline bool get_isFlashing_6() const { return ___isFlashing_6; }
	inline bool* get_address_of_isFlashing_6() { return &___isFlashing_6; }
	inline void set_isFlashing_6(bool value)
	{
		___isFlashing_6 = value;
	}
};

struct Deactivator_t4192724884_StaticFields
{
public:
	// Deactivator/EffectAction Deactivator::Emissive
	EffectAction_t3544139591 * ___Emissive_7;

public:
	inline static int32_t get_offset_of_Emissive_7() { return static_cast<int32_t>(offsetof(Deactivator_t4192724884_StaticFields, ___Emissive_7)); }
	inline EffectAction_t3544139591 * get_Emissive_7() const { return ___Emissive_7; }
	inline EffectAction_t3544139591 ** get_address_of_Emissive_7() { return &___Emissive_7; }
	inline void set_Emissive_7(EffectAction_t3544139591 * value)
	{
		___Emissive_7 = value;
		Il2CppCodeGenWriteBarrier(&___Emissive_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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
// UpdateScore
struct UpdateScore_t1082839849;
// Cube
struct Cube_t2111573;
// EventManager/EventAction
struct EventAction_t1244047696;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventManager
struct  EventManager_t1907836883  : public MonoBehaviour_t3012272455
{
public:
	// SoundBreaking EventManager::soundDropBall
	SoundBreaking_t2714241170 * ___soundDropBall_2;
	// UpdateScore EventManager::updateScore
	UpdateScore_t1082839849 * ___updateScore_3;
	// Cube EventManager::cube
	Cube_t2111573 * ___cube_4;
	// System.Boolean EventManager::isCollided
	bool ___isCollided_5;

public:
	inline static int32_t get_offset_of_soundDropBall_2() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___soundDropBall_2)); }
	inline SoundBreaking_t2714241170 * get_soundDropBall_2() const { return ___soundDropBall_2; }
	inline SoundBreaking_t2714241170 ** get_address_of_soundDropBall_2() { return &___soundDropBall_2; }
	inline void set_soundDropBall_2(SoundBreaking_t2714241170 * value)
	{
		___soundDropBall_2 = value;
		Il2CppCodeGenWriteBarrier(&___soundDropBall_2, value);
	}

	inline static int32_t get_offset_of_updateScore_3() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___updateScore_3)); }
	inline UpdateScore_t1082839849 * get_updateScore_3() const { return ___updateScore_3; }
	inline UpdateScore_t1082839849 ** get_address_of_updateScore_3() { return &___updateScore_3; }
	inline void set_updateScore_3(UpdateScore_t1082839849 * value)
	{
		___updateScore_3 = value;
		Il2CppCodeGenWriteBarrier(&___updateScore_3, value);
	}

	inline static int32_t get_offset_of_cube_4() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___cube_4)); }
	inline Cube_t2111573 * get_cube_4() const { return ___cube_4; }
	inline Cube_t2111573 ** get_address_of_cube_4() { return &___cube_4; }
	inline void set_cube_4(Cube_t2111573 * value)
	{
		___cube_4 = value;
		Il2CppCodeGenWriteBarrier(&___cube_4, value);
	}

	inline static int32_t get_offset_of_isCollided_5() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___isCollided_5)); }
	inline bool get_isCollided_5() const { return ___isCollided_5; }
	inline bool* get_address_of_isCollided_5() { return &___isCollided_5; }
	inline void set_isCollided_5(bool value)
	{
		___isCollided_5 = value;
	}
};

struct EventManager_t1907836883_StaticFields
{
public:
	// EventManager/EventAction EventManager::OnCamMove
	EventAction_t1244047696 * ___OnCamMove_6;
	// EventManager/EventAction EventManager::OnPlayerEnter
	EventAction_t1244047696 * ___OnPlayerEnter_7;

public:
	inline static int32_t get_offset_of_OnCamMove_6() { return static_cast<int32_t>(offsetof(EventManager_t1907836883_StaticFields, ___OnCamMove_6)); }
	inline EventAction_t1244047696 * get_OnCamMove_6() const { return ___OnCamMove_6; }
	inline EventAction_t1244047696 ** get_address_of_OnCamMove_6() { return &___OnCamMove_6; }
	inline void set_OnCamMove_6(EventAction_t1244047696 * value)
	{
		___OnCamMove_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnCamMove_6, value);
	}

	inline static int32_t get_offset_of_OnPlayerEnter_7() { return static_cast<int32_t>(offsetof(EventManager_t1907836883_StaticFields, ___OnPlayerEnter_7)); }
	inline EventAction_t1244047696 * get_OnPlayerEnter_7() const { return ___OnPlayerEnter_7; }
	inline EventAction_t1244047696 ** get_address_of_OnPlayerEnter_7() { return &___OnPlayerEnter_7; }
	inline void set_OnPlayerEnter_7(EventAction_t1244047696 * value)
	{
		___OnPlayerEnter_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnPlayerEnter_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

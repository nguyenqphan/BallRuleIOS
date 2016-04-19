#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ShowPanels
struct ShowPanels_t2673010796;
// SoundBreaking
struct SoundBreaking_t2714241170;
// UpdateScore
struct UpdateScore_t1082839849;
// CubeManager
struct CubeManager_t4034287000;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Destroyer
struct  Destroyer_t3990730247  : public MonoBehaviour_t3012272455
{
public:
	// ShowPanels Destroyer::showUI
	ShowPanels_t2673010796 * ___showUI_2;
	// SoundBreaking Destroyer::soundBallDrop
	SoundBreaking_t2714241170 * ___soundBallDrop_3;
	// UpdateScore Destroyer::updateScore
	UpdateScore_t1082839849 * ___updateScore_4;
	// CubeManager Destroyer::cubeManager
	CubeManager_t4034287000 * ___cubeManager_5;
	// System.Boolean Destroyer::isTimeRunning
	bool ___isTimeRunning_6;

public:
	inline static int32_t get_offset_of_showUI_2() { return static_cast<int32_t>(offsetof(Destroyer_t3990730247, ___showUI_2)); }
	inline ShowPanels_t2673010796 * get_showUI_2() const { return ___showUI_2; }
	inline ShowPanels_t2673010796 ** get_address_of_showUI_2() { return &___showUI_2; }
	inline void set_showUI_2(ShowPanels_t2673010796 * value)
	{
		___showUI_2 = value;
		Il2CppCodeGenWriteBarrier(&___showUI_2, value);
	}

	inline static int32_t get_offset_of_soundBallDrop_3() { return static_cast<int32_t>(offsetof(Destroyer_t3990730247, ___soundBallDrop_3)); }
	inline SoundBreaking_t2714241170 * get_soundBallDrop_3() const { return ___soundBallDrop_3; }
	inline SoundBreaking_t2714241170 ** get_address_of_soundBallDrop_3() { return &___soundBallDrop_3; }
	inline void set_soundBallDrop_3(SoundBreaking_t2714241170 * value)
	{
		___soundBallDrop_3 = value;
		Il2CppCodeGenWriteBarrier(&___soundBallDrop_3, value);
	}

	inline static int32_t get_offset_of_updateScore_4() { return static_cast<int32_t>(offsetof(Destroyer_t3990730247, ___updateScore_4)); }
	inline UpdateScore_t1082839849 * get_updateScore_4() const { return ___updateScore_4; }
	inline UpdateScore_t1082839849 ** get_address_of_updateScore_4() { return &___updateScore_4; }
	inline void set_updateScore_4(UpdateScore_t1082839849 * value)
	{
		___updateScore_4 = value;
		Il2CppCodeGenWriteBarrier(&___updateScore_4, value);
	}

	inline static int32_t get_offset_of_cubeManager_5() { return static_cast<int32_t>(offsetof(Destroyer_t3990730247, ___cubeManager_5)); }
	inline CubeManager_t4034287000 * get_cubeManager_5() const { return ___cubeManager_5; }
	inline CubeManager_t4034287000 ** get_address_of_cubeManager_5() { return &___cubeManager_5; }
	inline void set_cubeManager_5(CubeManager_t4034287000 * value)
	{
		___cubeManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___cubeManager_5, value);
	}

	inline static int32_t get_offset_of_isTimeRunning_6() { return static_cast<int32_t>(offsetof(Destroyer_t3990730247, ___isTimeRunning_6)); }
	inline bool get_isTimeRunning_6() const { return ___isTimeRunning_6; }
	inline bool* get_address_of_isTimeRunning_6() { return &___isTimeRunning_6; }
	inline void set_isTimeRunning_6(bool value)
	{
		___isTimeRunning_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

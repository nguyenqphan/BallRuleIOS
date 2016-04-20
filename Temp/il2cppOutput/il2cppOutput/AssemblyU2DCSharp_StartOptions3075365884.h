#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayMusic
struct PlayMusic_t109867825;
// ShowPanels
struct ShowPanels_t2673010796;
// TextColor
struct TextColor_t940396054;
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

// StartOptions
struct  StartOptions_t3075365884  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 StartOptions::sceneToStart
	int32_t ___sceneToStart_2;
	// System.Boolean StartOptions::changeScenes
	bool ___changeScenes_3;
	// System.Boolean StartOptions::changeMusicOnStart
	bool ___changeMusicOnStart_4;
	// System.Boolean StartOptions::inMainMenu
	bool ___inMainMenu_5;
	// PlayMusic StartOptions::playMusic
	PlayMusic_t109867825 * ___playMusic_6;
	// System.Single StartOptions::fastFadeIn
	float ___fastFadeIn_7;
	// ShowPanels StartOptions::showPanels
	ShowPanels_t2673010796 * ___showPanels_8;
	// TextColor StartOptions::textColor
	TextColor_t940396054 * ___textColor_9;
	// UpdateScore StartOptions::updateScore
	UpdateScore_t1082839849 * ___updateScore_10;
	// CubeManager StartOptions::cubeManager
	CubeManager_t4034287000 * ___cubeManager_11;

public:
	inline static int32_t get_offset_of_sceneToStart_2() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___sceneToStart_2)); }
	inline int32_t get_sceneToStart_2() const { return ___sceneToStart_2; }
	inline int32_t* get_address_of_sceneToStart_2() { return &___sceneToStart_2; }
	inline void set_sceneToStart_2(int32_t value)
	{
		___sceneToStart_2 = value;
	}

	inline static int32_t get_offset_of_changeScenes_3() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___changeScenes_3)); }
	inline bool get_changeScenes_3() const { return ___changeScenes_3; }
	inline bool* get_address_of_changeScenes_3() { return &___changeScenes_3; }
	inline void set_changeScenes_3(bool value)
	{
		___changeScenes_3 = value;
	}

	inline static int32_t get_offset_of_changeMusicOnStart_4() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___changeMusicOnStart_4)); }
	inline bool get_changeMusicOnStart_4() const { return ___changeMusicOnStart_4; }
	inline bool* get_address_of_changeMusicOnStart_4() { return &___changeMusicOnStart_4; }
	inline void set_changeMusicOnStart_4(bool value)
	{
		___changeMusicOnStart_4 = value;
	}

	inline static int32_t get_offset_of_inMainMenu_5() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___inMainMenu_5)); }
	inline bool get_inMainMenu_5() const { return ___inMainMenu_5; }
	inline bool* get_address_of_inMainMenu_5() { return &___inMainMenu_5; }
	inline void set_inMainMenu_5(bool value)
	{
		___inMainMenu_5 = value;
	}

	inline static int32_t get_offset_of_playMusic_6() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___playMusic_6)); }
	inline PlayMusic_t109867825 * get_playMusic_6() const { return ___playMusic_6; }
	inline PlayMusic_t109867825 ** get_address_of_playMusic_6() { return &___playMusic_6; }
	inline void set_playMusic_6(PlayMusic_t109867825 * value)
	{
		___playMusic_6 = value;
		Il2CppCodeGenWriteBarrier(&___playMusic_6, value);
	}

	inline static int32_t get_offset_of_fastFadeIn_7() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___fastFadeIn_7)); }
	inline float get_fastFadeIn_7() const { return ___fastFadeIn_7; }
	inline float* get_address_of_fastFadeIn_7() { return &___fastFadeIn_7; }
	inline void set_fastFadeIn_7(float value)
	{
		___fastFadeIn_7 = value;
	}

	inline static int32_t get_offset_of_showPanels_8() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___showPanels_8)); }
	inline ShowPanels_t2673010796 * get_showPanels_8() const { return ___showPanels_8; }
	inline ShowPanels_t2673010796 ** get_address_of_showPanels_8() { return &___showPanels_8; }
	inline void set_showPanels_8(ShowPanels_t2673010796 * value)
	{
		___showPanels_8 = value;
		Il2CppCodeGenWriteBarrier(&___showPanels_8, value);
	}

	inline static int32_t get_offset_of_textColor_9() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___textColor_9)); }
	inline TextColor_t940396054 * get_textColor_9() const { return ___textColor_9; }
	inline TextColor_t940396054 ** get_address_of_textColor_9() { return &___textColor_9; }
	inline void set_textColor_9(TextColor_t940396054 * value)
	{
		___textColor_9 = value;
		Il2CppCodeGenWriteBarrier(&___textColor_9, value);
	}

	inline static int32_t get_offset_of_updateScore_10() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___updateScore_10)); }
	inline UpdateScore_t1082839849 * get_updateScore_10() const { return ___updateScore_10; }
	inline UpdateScore_t1082839849 ** get_address_of_updateScore_10() { return &___updateScore_10; }
	inline void set_updateScore_10(UpdateScore_t1082839849 * value)
	{
		___updateScore_10 = value;
		Il2CppCodeGenWriteBarrier(&___updateScore_10, value);
	}

	inline static int32_t get_offset_of_cubeManager_11() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___cubeManager_11)); }
	inline CubeManager_t4034287000 * get_cubeManager_11() const { return ___cubeManager_11; }
	inline CubeManager_t4034287000 ** get_address_of_cubeManager_11() { return &___cubeManager_11; }
	inline void set_cubeManager_11(CubeManager_t4034287000 * value)
	{
		___cubeManager_11 = value;
		Il2CppCodeGenWriteBarrier(&___cubeManager_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.AnimationClip
struct AnimationClip_t57566497;
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
// UnityAdsManager
struct UnityAdsManager_t3288720914;

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
	// UnityEngine.Animator StartOptions::animColorFade
	Animator_t792326996 * ___animColorFade_6;
	// UnityEngine.Animator StartOptions::animMenuAlpha
	Animator_t792326996 * ___animMenuAlpha_7;
	// UnityEngine.AnimationClip StartOptions::fadeColorAnimationClip
	AnimationClip_t57566497 * ___fadeColorAnimationClip_8;
	// UnityEngine.AnimationClip StartOptions::fadeAlphaAnimationClip
	AnimationClip_t57566497 * ___fadeAlphaAnimationClip_9;
	// PlayMusic StartOptions::playMusic
	PlayMusic_t109867825 * ___playMusic_10;
	// System.Single StartOptions::fastFadeIn
	float ___fastFadeIn_11;
	// ShowPanels StartOptions::showPanels
	ShowPanels_t2673010796 * ___showPanels_12;
	// TextColor StartOptions::textColor
	TextColor_t940396054 * ___textColor_13;
	// UpdateScore StartOptions::updateScore
	UpdateScore_t1082839849 * ___updateScore_14;
	// CubeManager StartOptions::cubeManager
	CubeManager_t4034287000 * ___cubeManager_15;
	// UnityAdsManager StartOptions::unityAdsManager
	UnityAdsManager_t3288720914 * ___unityAdsManager_16;

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

	inline static int32_t get_offset_of_animColorFade_6() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___animColorFade_6)); }
	inline Animator_t792326996 * get_animColorFade_6() const { return ___animColorFade_6; }
	inline Animator_t792326996 ** get_address_of_animColorFade_6() { return &___animColorFade_6; }
	inline void set_animColorFade_6(Animator_t792326996 * value)
	{
		___animColorFade_6 = value;
		Il2CppCodeGenWriteBarrier(&___animColorFade_6, value);
	}

	inline static int32_t get_offset_of_animMenuAlpha_7() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___animMenuAlpha_7)); }
	inline Animator_t792326996 * get_animMenuAlpha_7() const { return ___animMenuAlpha_7; }
	inline Animator_t792326996 ** get_address_of_animMenuAlpha_7() { return &___animMenuAlpha_7; }
	inline void set_animMenuAlpha_7(Animator_t792326996 * value)
	{
		___animMenuAlpha_7 = value;
		Il2CppCodeGenWriteBarrier(&___animMenuAlpha_7, value);
	}

	inline static int32_t get_offset_of_fadeColorAnimationClip_8() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___fadeColorAnimationClip_8)); }
	inline AnimationClip_t57566497 * get_fadeColorAnimationClip_8() const { return ___fadeColorAnimationClip_8; }
	inline AnimationClip_t57566497 ** get_address_of_fadeColorAnimationClip_8() { return &___fadeColorAnimationClip_8; }
	inline void set_fadeColorAnimationClip_8(AnimationClip_t57566497 * value)
	{
		___fadeColorAnimationClip_8 = value;
		Il2CppCodeGenWriteBarrier(&___fadeColorAnimationClip_8, value);
	}

	inline static int32_t get_offset_of_fadeAlphaAnimationClip_9() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___fadeAlphaAnimationClip_9)); }
	inline AnimationClip_t57566497 * get_fadeAlphaAnimationClip_9() const { return ___fadeAlphaAnimationClip_9; }
	inline AnimationClip_t57566497 ** get_address_of_fadeAlphaAnimationClip_9() { return &___fadeAlphaAnimationClip_9; }
	inline void set_fadeAlphaAnimationClip_9(AnimationClip_t57566497 * value)
	{
		___fadeAlphaAnimationClip_9 = value;
		Il2CppCodeGenWriteBarrier(&___fadeAlphaAnimationClip_9, value);
	}

	inline static int32_t get_offset_of_playMusic_10() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___playMusic_10)); }
	inline PlayMusic_t109867825 * get_playMusic_10() const { return ___playMusic_10; }
	inline PlayMusic_t109867825 ** get_address_of_playMusic_10() { return &___playMusic_10; }
	inline void set_playMusic_10(PlayMusic_t109867825 * value)
	{
		___playMusic_10 = value;
		Il2CppCodeGenWriteBarrier(&___playMusic_10, value);
	}

	inline static int32_t get_offset_of_fastFadeIn_11() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___fastFadeIn_11)); }
	inline float get_fastFadeIn_11() const { return ___fastFadeIn_11; }
	inline float* get_address_of_fastFadeIn_11() { return &___fastFadeIn_11; }
	inline void set_fastFadeIn_11(float value)
	{
		___fastFadeIn_11 = value;
	}

	inline static int32_t get_offset_of_showPanels_12() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___showPanels_12)); }
	inline ShowPanels_t2673010796 * get_showPanels_12() const { return ___showPanels_12; }
	inline ShowPanels_t2673010796 ** get_address_of_showPanels_12() { return &___showPanels_12; }
	inline void set_showPanels_12(ShowPanels_t2673010796 * value)
	{
		___showPanels_12 = value;
		Il2CppCodeGenWriteBarrier(&___showPanels_12, value);
	}

	inline static int32_t get_offset_of_textColor_13() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___textColor_13)); }
	inline TextColor_t940396054 * get_textColor_13() const { return ___textColor_13; }
	inline TextColor_t940396054 ** get_address_of_textColor_13() { return &___textColor_13; }
	inline void set_textColor_13(TextColor_t940396054 * value)
	{
		___textColor_13 = value;
		Il2CppCodeGenWriteBarrier(&___textColor_13, value);
	}

	inline static int32_t get_offset_of_updateScore_14() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___updateScore_14)); }
	inline UpdateScore_t1082839849 * get_updateScore_14() const { return ___updateScore_14; }
	inline UpdateScore_t1082839849 ** get_address_of_updateScore_14() { return &___updateScore_14; }
	inline void set_updateScore_14(UpdateScore_t1082839849 * value)
	{
		___updateScore_14 = value;
		Il2CppCodeGenWriteBarrier(&___updateScore_14, value);
	}

	inline static int32_t get_offset_of_cubeManager_15() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___cubeManager_15)); }
	inline CubeManager_t4034287000 * get_cubeManager_15() const { return ___cubeManager_15; }
	inline CubeManager_t4034287000 ** get_address_of_cubeManager_15() { return &___cubeManager_15; }
	inline void set_cubeManager_15(CubeManager_t4034287000 * value)
	{
		___cubeManager_15 = value;
		Il2CppCodeGenWriteBarrier(&___cubeManager_15, value);
	}

	inline static int32_t get_offset_of_unityAdsManager_16() { return static_cast<int32_t>(offsetof(StartOptions_t3075365884, ___unityAdsManager_16)); }
	inline UnityAdsManager_t3288720914 * get_unityAdsManager_16() const { return ___unityAdsManager_16; }
	inline UnityAdsManager_t3288720914 ** get_address_of_unityAdsManager_16() { return &___unityAdsManager_16; }
	inline void set_unityAdsManager_16(UnityAdsManager_t3288720914 * value)
	{
		___unityAdsManager_16 = value;
		Il2CppCodeGenWriteBarrier(&___unityAdsManager_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

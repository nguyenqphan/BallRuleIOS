#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameCenterAPI
struct GameCenterAPI_t660842899;
// System.String
struct String_t;
// ShowPanels
struct ShowPanels_t2673010796;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityAdsManager
struct  UnityAdsManager_t3288720914  : public MonoBehaviour_t3012272455
{
public:
	// GameCenterAPI UnityAdsManager::gameCenterAPI
	GameCenterAPI_t660842899 * ___gameCenterAPI_2;
	// System.String UnityAdsManager::gameID
	String_t* ___gameID_3;
	// ShowPanels UnityAdsManager::showPanels
	ShowPanels_t2673010796 * ___showPanels_4;
	// System.String UnityAdsManager::iosGameId
	String_t* ___iosGameId_5;
	// System.String UnityAdsManager::androidGameId
	String_t* ___androidGameId_6;
	// System.Boolean UnityAdsManager::enableTestMode
	bool ___enableTestMode_7;

public:
	inline static int32_t get_offset_of_gameCenterAPI_2() { return static_cast<int32_t>(offsetof(UnityAdsManager_t3288720914, ___gameCenterAPI_2)); }
	inline GameCenterAPI_t660842899 * get_gameCenterAPI_2() const { return ___gameCenterAPI_2; }
	inline GameCenterAPI_t660842899 ** get_address_of_gameCenterAPI_2() { return &___gameCenterAPI_2; }
	inline void set_gameCenterAPI_2(GameCenterAPI_t660842899 * value)
	{
		___gameCenterAPI_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameCenterAPI_2, value);
	}

	inline static int32_t get_offset_of_gameID_3() { return static_cast<int32_t>(offsetof(UnityAdsManager_t3288720914, ___gameID_3)); }
	inline String_t* get_gameID_3() const { return ___gameID_3; }
	inline String_t** get_address_of_gameID_3() { return &___gameID_3; }
	inline void set_gameID_3(String_t* value)
	{
		___gameID_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameID_3, value);
	}

	inline static int32_t get_offset_of_showPanels_4() { return static_cast<int32_t>(offsetof(UnityAdsManager_t3288720914, ___showPanels_4)); }
	inline ShowPanels_t2673010796 * get_showPanels_4() const { return ___showPanels_4; }
	inline ShowPanels_t2673010796 ** get_address_of_showPanels_4() { return &___showPanels_4; }
	inline void set_showPanels_4(ShowPanels_t2673010796 * value)
	{
		___showPanels_4 = value;
		Il2CppCodeGenWriteBarrier(&___showPanels_4, value);
	}

	inline static int32_t get_offset_of_iosGameId_5() { return static_cast<int32_t>(offsetof(UnityAdsManager_t3288720914, ___iosGameId_5)); }
	inline String_t* get_iosGameId_5() const { return ___iosGameId_5; }
	inline String_t** get_address_of_iosGameId_5() { return &___iosGameId_5; }
	inline void set_iosGameId_5(String_t* value)
	{
		___iosGameId_5 = value;
		Il2CppCodeGenWriteBarrier(&___iosGameId_5, value);
	}

	inline static int32_t get_offset_of_androidGameId_6() { return static_cast<int32_t>(offsetof(UnityAdsManager_t3288720914, ___androidGameId_6)); }
	inline String_t* get_androidGameId_6() const { return ___androidGameId_6; }
	inline String_t** get_address_of_androidGameId_6() { return &___androidGameId_6; }
	inline void set_androidGameId_6(String_t* value)
	{
		___androidGameId_6 = value;
		Il2CppCodeGenWriteBarrier(&___androidGameId_6, value);
	}

	inline static int32_t get_offset_of_enableTestMode_7() { return static_cast<int32_t>(offsetof(UnityAdsManager_t3288720914, ___enableTestMode_7)); }
	inline bool get_enableTestMode_7() const { return ___enableTestMode_7; }
	inline bool* get_address_of_enableTestMode_7() { return &___enableTestMode_7; }
	inline void set_enableTestMode_7(bool value)
	{
		___enableTestMode_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

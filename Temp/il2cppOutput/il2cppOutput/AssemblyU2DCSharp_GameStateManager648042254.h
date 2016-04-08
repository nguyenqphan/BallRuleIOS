#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameStateManager
struct GameStateManager_t648042254;
// GameStateManager/InstanceStep
struct InstanceStep_t3721597217;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameStateManager
struct  GameStateManager_t648042254  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 GameStateManager::lives
	int32_t ___lives_7;
	// System.Int32 GameStateManager::numberOfGame
	int32_t ___numberOfGame_10;
	// System.Int32 GameStateManager::sceneMaterialNum
	int32_t ___sceneMaterialNum_11;
	// System.Int32 GameStateManager::score
	int32_t ___score_12;
	// System.Int32 GameStateManager::StartingScore
	int32_t ___StartingScore_13;
	// System.Nullable`1<System.Int32> GameStateManager::highScore
	Nullable_1_t1438485399  ___highScore_14;
	// System.Int32 GameStateManager::bestScore
	int32_t ___bestScore_17;
	// System.Int32 GameStateManager::bestChallengeScore
	int32_t ___bestChallengeScore_18;
	// System.Int32 GameStateManager::ballTimer
	int32_t ___ballTimer_19;
	// System.Int32 GameStateManager::challengeTimer
	int32_t ___challengeTimer_20;
	// System.Int32 GameStateManager::numCoins
	int32_t ___numCoins_21;
	// System.Int32 GameStateManager::startCoints
	int32_t ___startCoints_22;
	// System.Int32 GameStateManager::indexMaterial
	int32_t ___indexMaterial_23;
	// UnityEngine.GameObject GameStateManager::cube
	GameObject_t4012695102 * ___cube_24;
	// System.Boolean GameStateManager::isStarted
	bool ___isStarted_25;
	// System.Boolean GameStateManager::isChallened
	bool ___isChallened_26;
	// System.Boolean GameStateManager::isAdvanced
	bool ___isAdvanced_27;
	// System.Boolean GameStateManager::isOutOfTime
	bool ___isOutOfTime_28;

public:
	inline static int32_t get_offset_of_lives_7() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___lives_7)); }
	inline int32_t get_lives_7() const { return ___lives_7; }
	inline int32_t* get_address_of_lives_7() { return &___lives_7; }
	inline void set_lives_7(int32_t value)
	{
		___lives_7 = value;
	}

	inline static int32_t get_offset_of_numberOfGame_10() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___numberOfGame_10)); }
	inline int32_t get_numberOfGame_10() const { return ___numberOfGame_10; }
	inline int32_t* get_address_of_numberOfGame_10() { return &___numberOfGame_10; }
	inline void set_numberOfGame_10(int32_t value)
	{
		___numberOfGame_10 = value;
	}

	inline static int32_t get_offset_of_sceneMaterialNum_11() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___sceneMaterialNum_11)); }
	inline int32_t get_sceneMaterialNum_11() const { return ___sceneMaterialNum_11; }
	inline int32_t* get_address_of_sceneMaterialNum_11() { return &___sceneMaterialNum_11; }
	inline void set_sceneMaterialNum_11(int32_t value)
	{
		___sceneMaterialNum_11 = value;
	}

	inline static int32_t get_offset_of_score_12() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___score_12)); }
	inline int32_t get_score_12() const { return ___score_12; }
	inline int32_t* get_address_of_score_12() { return &___score_12; }
	inline void set_score_12(int32_t value)
	{
		___score_12 = value;
	}

	inline static int32_t get_offset_of_StartingScore_13() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___StartingScore_13)); }
	inline int32_t get_StartingScore_13() const { return ___StartingScore_13; }
	inline int32_t* get_address_of_StartingScore_13() { return &___StartingScore_13; }
	inline void set_StartingScore_13(int32_t value)
	{
		___StartingScore_13 = value;
	}

	inline static int32_t get_offset_of_highScore_14() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___highScore_14)); }
	inline Nullable_1_t1438485399  get_highScore_14() const { return ___highScore_14; }
	inline Nullable_1_t1438485399 * get_address_of_highScore_14() { return &___highScore_14; }
	inline void set_highScore_14(Nullable_1_t1438485399  value)
	{
		___highScore_14 = value;
	}

	inline static int32_t get_offset_of_bestScore_17() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___bestScore_17)); }
	inline int32_t get_bestScore_17() const { return ___bestScore_17; }
	inline int32_t* get_address_of_bestScore_17() { return &___bestScore_17; }
	inline void set_bestScore_17(int32_t value)
	{
		___bestScore_17 = value;
	}

	inline static int32_t get_offset_of_bestChallengeScore_18() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___bestChallengeScore_18)); }
	inline int32_t get_bestChallengeScore_18() const { return ___bestChallengeScore_18; }
	inline int32_t* get_address_of_bestChallengeScore_18() { return &___bestChallengeScore_18; }
	inline void set_bestChallengeScore_18(int32_t value)
	{
		___bestChallengeScore_18 = value;
	}

	inline static int32_t get_offset_of_ballTimer_19() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___ballTimer_19)); }
	inline int32_t get_ballTimer_19() const { return ___ballTimer_19; }
	inline int32_t* get_address_of_ballTimer_19() { return &___ballTimer_19; }
	inline void set_ballTimer_19(int32_t value)
	{
		___ballTimer_19 = value;
	}

	inline static int32_t get_offset_of_challengeTimer_20() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___challengeTimer_20)); }
	inline int32_t get_challengeTimer_20() const { return ___challengeTimer_20; }
	inline int32_t* get_address_of_challengeTimer_20() { return &___challengeTimer_20; }
	inline void set_challengeTimer_20(int32_t value)
	{
		___challengeTimer_20 = value;
	}

	inline static int32_t get_offset_of_numCoins_21() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___numCoins_21)); }
	inline int32_t get_numCoins_21() const { return ___numCoins_21; }
	inline int32_t* get_address_of_numCoins_21() { return &___numCoins_21; }
	inline void set_numCoins_21(int32_t value)
	{
		___numCoins_21 = value;
	}

	inline static int32_t get_offset_of_startCoints_22() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___startCoints_22)); }
	inline int32_t get_startCoints_22() const { return ___startCoints_22; }
	inline int32_t* get_address_of_startCoints_22() { return &___startCoints_22; }
	inline void set_startCoints_22(int32_t value)
	{
		___startCoints_22 = value;
	}

	inline static int32_t get_offset_of_indexMaterial_23() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___indexMaterial_23)); }
	inline int32_t get_indexMaterial_23() const { return ___indexMaterial_23; }
	inline int32_t* get_address_of_indexMaterial_23() { return &___indexMaterial_23; }
	inline void set_indexMaterial_23(int32_t value)
	{
		___indexMaterial_23 = value;
	}

	inline static int32_t get_offset_of_cube_24() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___cube_24)); }
	inline GameObject_t4012695102 * get_cube_24() const { return ___cube_24; }
	inline GameObject_t4012695102 ** get_address_of_cube_24() { return &___cube_24; }
	inline void set_cube_24(GameObject_t4012695102 * value)
	{
		___cube_24 = value;
		Il2CppCodeGenWriteBarrier(&___cube_24, value);
	}

	inline static int32_t get_offset_of_isStarted_25() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___isStarted_25)); }
	inline bool get_isStarted_25() const { return ___isStarted_25; }
	inline bool* get_address_of_isStarted_25() { return &___isStarted_25; }
	inline void set_isStarted_25(bool value)
	{
		___isStarted_25 = value;
	}

	inline static int32_t get_offset_of_isChallened_26() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___isChallened_26)); }
	inline bool get_isChallened_26() const { return ___isChallened_26; }
	inline bool* get_address_of_isChallened_26() { return &___isChallened_26; }
	inline void set_isChallened_26(bool value)
	{
		___isChallened_26 = value;
	}

	inline static int32_t get_offset_of_isAdvanced_27() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___isAdvanced_27)); }
	inline bool get_isAdvanced_27() const { return ___isAdvanced_27; }
	inline bool* get_address_of_isAdvanced_27() { return &___isAdvanced_27; }
	inline void set_isAdvanced_27(bool value)
	{
		___isAdvanced_27 = value;
	}

	inline static int32_t get_offset_of_isOutOfTime_28() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254, ___isOutOfTime_28)); }
	inline bool get_isOutOfTime_28() const { return ___isOutOfTime_28; }
	inline bool* get_address_of_isOutOfTime_28() { return &___isOutOfTime_28; }
	inline void set_isOutOfTime_28(bool value)
	{
		___isOutOfTime_28 = value;
	}
};

struct GameStateManager_t648042254_StaticFields
{
public:
	// GameStateManager GameStateManager::instance
	GameStateManager_t648042254 * ___instance_2;
	// GameStateManager/InstanceStep GameStateManager::init
	InstanceStep_t3721597217 * ___init_3;
	// GameStateManager/InstanceStep GameStateManager::final
	InstanceStep_t3721597217 * ___final_4;
	// GameStateManager/InstanceStep GameStateManager::current
	InstanceStep_t3721597217 * ___current_5;
	// System.Int32 GameStateManager::StartingLives
	int32_t ___StartingLives_6;
	// System.Boolean GameStateManager::ScoresReady
	bool ___ScoresReady_8;
	// System.Collections.Generic.List`1<System.Object> GameStateManager::scores
	List_1_t1634065389 * ___scores_9;
	// System.Boolean GameStateManager::ScoringLockout
	bool ___ScoringLockout_15;
	// System.Boolean GameStateManager::highScorePending
	bool ___highScorePending_16;
	// GameStateManager/InstanceStep GameStateManager::<>f__am$cache1B
	InstanceStep_t3721597217 * ___U3CU3Ef__amU24cache1B_29;
	// GameStateManager/InstanceStep GameStateManager::<>f__am$cache1C
	InstanceStep_t3721597217 * ___U3CU3Ef__amU24cache1C_30;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254_StaticFields, ___instance_2)); }
	inline GameStateManager_t648042254 * get_instance_2() const { return ___instance_2; }
	inline GameStateManager_t648042254 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GameStateManager_t648042254 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_init_3() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254_StaticFields, ___init_3)); }
	inline InstanceStep_t3721597217 * get_init_3() const { return ___init_3; }
	inline InstanceStep_t3721597217 ** get_address_of_init_3() { return &___init_3; }
	inline void set_init_3(InstanceStep_t3721597217 * value)
	{
		___init_3 = value;
		Il2CppCodeGenWriteBarrier(&___init_3, value);
	}

	inline static int32_t get_offset_of_final_4() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254_StaticFields, ___final_4)); }
	inline InstanceStep_t3721597217 * get_final_4() const { return ___final_4; }
	inline InstanceStep_t3721597217 ** get_address_of_final_4() { return &___final_4; }
	inline void set_final_4(InstanceStep_t3721597217 * value)
	{
		___final_4 = value;
		Il2CppCodeGenWriteBarrier(&___final_4, value);
	}

	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254_StaticFields, ___current_5)); }
	inline InstanceStep_t3721597217 * get_current_5() const { return ___current_5; }
	inline InstanceStep_t3721597217 ** get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(InstanceStep_t3721597217 * value)
	{
		___current_5 = value;
		Il2CppCodeGenWriteBarrier(&___current_5, value);
	}

	inline static int32_t get_offset_of_StartingLives_6() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254_StaticFields, ___StartingLives_6)); }
	inline int32_t get_StartingLives_6() const { return ___StartingLives_6; }
	inline int32_t* get_address_of_StartingLives_6() { return &___StartingLives_6; }
	inline void set_StartingLives_6(int32_t value)
	{
		___StartingLives_6 = value;
	}

	inline static int32_t get_offset_of_ScoresReady_8() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254_StaticFields, ___ScoresReady_8)); }
	inline bool get_ScoresReady_8() const { return ___ScoresReady_8; }
	inline bool* get_address_of_ScoresReady_8() { return &___ScoresReady_8; }
	inline void set_ScoresReady_8(bool value)
	{
		___ScoresReady_8 = value;
	}

	inline static int32_t get_offset_of_scores_9() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254_StaticFields, ___scores_9)); }
	inline List_1_t1634065389 * get_scores_9() const { return ___scores_9; }
	inline List_1_t1634065389 ** get_address_of_scores_9() { return &___scores_9; }
	inline void set_scores_9(List_1_t1634065389 * value)
	{
		___scores_9 = value;
		Il2CppCodeGenWriteBarrier(&___scores_9, value);
	}

	inline static int32_t get_offset_of_ScoringLockout_15() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254_StaticFields, ___ScoringLockout_15)); }
	inline bool get_ScoringLockout_15() const { return ___ScoringLockout_15; }
	inline bool* get_address_of_ScoringLockout_15() { return &___ScoringLockout_15; }
	inline void set_ScoringLockout_15(bool value)
	{
		___ScoringLockout_15 = value;
	}

	inline static int32_t get_offset_of_highScorePending_16() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254_StaticFields, ___highScorePending_16)); }
	inline bool get_highScorePending_16() const { return ___highScorePending_16; }
	inline bool* get_address_of_highScorePending_16() { return &___highScorePending_16; }
	inline void set_highScorePending_16(bool value)
	{
		___highScorePending_16 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1B_29() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254_StaticFields, ___U3CU3Ef__amU24cache1B_29)); }
	inline InstanceStep_t3721597217 * get_U3CU3Ef__amU24cache1B_29() const { return ___U3CU3Ef__amU24cache1B_29; }
	inline InstanceStep_t3721597217 ** get_address_of_U3CU3Ef__amU24cache1B_29() { return &___U3CU3Ef__amU24cache1B_29; }
	inline void set_U3CU3Ef__amU24cache1B_29(InstanceStep_t3721597217 * value)
	{
		___U3CU3Ef__amU24cache1B_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1B_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1C_30() { return static_cast<int32_t>(offsetof(GameStateManager_t648042254_StaticFields, ___U3CU3Ef__amU24cache1C_30)); }
	inline InstanceStep_t3721597217 * get_U3CU3Ef__amU24cache1C_30() const { return ___U3CU3Ef__amU24cache1C_30; }
	inline InstanceStep_t3721597217 ** get_address_of_U3CU3Ef__amU24cache1C_30() { return &___U3CU3Ef__amU24cache1C_30; }
	inline void set_U3CU3Ef__amU24cache1C_30(InstanceStep_t3721597217 * value)
	{
		___U3CU3Ef__amU24cache1C_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1C_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

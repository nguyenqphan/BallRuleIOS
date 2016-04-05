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

// GameStateManager
struct  GameStateManager_t648042254  : public MonoBehaviour_t3012272455
{
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
	// System.Boolean GameStateManager::isOutOfTime
	bool ___isOutOfTime_27;
};
struct GameStateManager_t648042254_StaticFields{
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
	// GameStateManager/InstanceStep GameStateManager::<>f__am$cache1A
	InstanceStep_t3721597217 * ___U3CU3Ef__amU24cache1A_28;
	// GameStateManager/InstanceStep GameStateManager::<>f__am$cache1B
	InstanceStep_t3721597217 * ___U3CU3Ef__amU24cache1B_29;
};

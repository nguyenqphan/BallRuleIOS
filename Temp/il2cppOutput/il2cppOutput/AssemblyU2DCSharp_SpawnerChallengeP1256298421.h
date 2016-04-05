#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MainCube
struct MainCube_t55713198;
// Cube
struct Cube_t2111573;
// Diamond
struct Diamond_t3319707956;
// Ball
struct Ball_t2062879;
// SpawnerManager
struct SpawnerManager_t45089093;

#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// SpawnerChallengeP
struct  SpawnerChallengeP_t1256298421 
{
	// System.Int32 SpawnerChallengeP::smallestNum
	int32_t ___smallestNum_0;
	// System.Boolean SpawnerChallengeP::matchSmallestNum
	bool ___matchSmallestNum_1;
	// System.Int32 SpawnerChallengeP::pooledAmount
	int32_t ___pooledAmount_2;
	// System.Int32 SpawnerChallengeP::ballAmount
	int32_t ___ballAmount_3;
	// System.Int32 SpawnerChallengeP::diamondAmount
	int32_t ___diamondAmount_4;
	// System.Int32 SpawnerChallengeP::randomCubeNum
	int32_t ___randomCubeNum_5;
	// System.Int32 SpawnerChallengeP::indexSwitch
	int32_t ___indexSwitch_6;
	// UnityEngine.Vector3 SpawnerChallengeP::position
	Vector3_t3525329789  ___position_7;
	// System.Single SpawnerChallengeP::fixedY
	float ___fixedY_8;
	// System.Single SpawnerChallengeP::fixedX
	float ___fixedX_9;
	// System.Single SpawnerChallengeP::speedTime
	float ___speedTime_10;
	// System.Boolean SpawnerChallengeP::firstSpawn
	bool ___firstSpawn_11;
	// System.Int32 SpawnerChallengeP::spawnNumber
	int32_t ___spawnNumber_12;
	// System.Boolean SpawnerChallengeP::matchNum
	bool ___matchNum_13;
	// MainCube SpawnerChallengeP::mainCube
	MainCube_t55713198 * ___mainCube_14;
	// Cube SpawnerChallengeP::cube
	Cube_t2111573 * ___cube_15;
	// Diamond SpawnerChallengeP::diamondScript
	Diamond_t3319707956 * ___diamondScript_16;
	// Ball SpawnerChallengeP::ballScript
	Ball_t2062879 * ___ballScript_17;
	// SpawnerManager SpawnerChallengeP::spawnManager
	SpawnerManager_t45089093 * ___spawnManager_18;
};

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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnerP
struct  SpawnerP_t2130838536 
{
public:
	// System.Int32 SpawnerP::smallestNum
	int32_t ___smallestNum_0;
	// System.Boolean SpawnerP::matchSmallestNum
	bool ___matchSmallestNum_1;
	// System.Int32 SpawnerP::pooledAmount
	int32_t ___pooledAmount_2;
	// System.Int32 SpawnerP::ballAmount
	int32_t ___ballAmount_3;
	// System.Int32 SpawnerP::diamondAmount
	int32_t ___diamondAmount_4;
	// System.Int32 SpawnerP::randomCubeNum
	int32_t ___randomCubeNum_5;
	// System.Int32 SpawnerP::indexSwitch
	int32_t ___indexSwitch_6;
	// UnityEngine.Vector3 SpawnerP::position
	Vector3_t3525329789  ___position_7;
	// System.Single SpawnerP::fixedY
	float ___fixedY_8;
	// System.Single SpawnerP::fixedX
	float ___fixedX_9;
	// System.Single SpawnerP::speedTime
	float ___speedTime_10;
	// System.Boolean SpawnerP::firstSpawn
	bool ___firstSpawn_11;
	// System.Int32 SpawnerP::spawnNumber
	int32_t ___spawnNumber_12;
	// System.Boolean SpawnerP::matchNum
	bool ___matchNum_13;
	// MainCube SpawnerP::mainCube
	MainCube_t55713198 * ___mainCube_14;
	// Cube SpawnerP::cube
	Cube_t2111573 * ___cube_15;
	// Diamond SpawnerP::diamondScript
	Diamond_t3319707956 * ___diamondScript_16;
	// Ball SpawnerP::ballScript
	Ball_t2062879 * ___ballScript_17;
	// SpawnerManager SpawnerP::spawnManager
	SpawnerManager_t45089093 * ___spawnManager_18;

public:
	inline static int32_t get_offset_of_smallestNum_0() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___smallestNum_0)); }
	inline int32_t get_smallestNum_0() const { return ___smallestNum_0; }
	inline int32_t* get_address_of_smallestNum_0() { return &___smallestNum_0; }
	inline void set_smallestNum_0(int32_t value)
	{
		___smallestNum_0 = value;
	}

	inline static int32_t get_offset_of_matchSmallestNum_1() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___matchSmallestNum_1)); }
	inline bool get_matchSmallestNum_1() const { return ___matchSmallestNum_1; }
	inline bool* get_address_of_matchSmallestNum_1() { return &___matchSmallestNum_1; }
	inline void set_matchSmallestNum_1(bool value)
	{
		___matchSmallestNum_1 = value;
	}

	inline static int32_t get_offset_of_pooledAmount_2() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___pooledAmount_2)); }
	inline int32_t get_pooledAmount_2() const { return ___pooledAmount_2; }
	inline int32_t* get_address_of_pooledAmount_2() { return &___pooledAmount_2; }
	inline void set_pooledAmount_2(int32_t value)
	{
		___pooledAmount_2 = value;
	}

	inline static int32_t get_offset_of_ballAmount_3() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___ballAmount_3)); }
	inline int32_t get_ballAmount_3() const { return ___ballAmount_3; }
	inline int32_t* get_address_of_ballAmount_3() { return &___ballAmount_3; }
	inline void set_ballAmount_3(int32_t value)
	{
		___ballAmount_3 = value;
	}

	inline static int32_t get_offset_of_diamondAmount_4() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___diamondAmount_4)); }
	inline int32_t get_diamondAmount_4() const { return ___diamondAmount_4; }
	inline int32_t* get_address_of_diamondAmount_4() { return &___diamondAmount_4; }
	inline void set_diamondAmount_4(int32_t value)
	{
		___diamondAmount_4 = value;
	}

	inline static int32_t get_offset_of_randomCubeNum_5() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___randomCubeNum_5)); }
	inline int32_t get_randomCubeNum_5() const { return ___randomCubeNum_5; }
	inline int32_t* get_address_of_randomCubeNum_5() { return &___randomCubeNum_5; }
	inline void set_randomCubeNum_5(int32_t value)
	{
		___randomCubeNum_5 = value;
	}

	inline static int32_t get_offset_of_indexSwitch_6() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___indexSwitch_6)); }
	inline int32_t get_indexSwitch_6() const { return ___indexSwitch_6; }
	inline int32_t* get_address_of_indexSwitch_6() { return &___indexSwitch_6; }
	inline void set_indexSwitch_6(int32_t value)
	{
		___indexSwitch_6 = value;
	}

	inline static int32_t get_offset_of_position_7() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___position_7)); }
	inline Vector3_t3525329789  get_position_7() const { return ___position_7; }
	inline Vector3_t3525329789 * get_address_of_position_7() { return &___position_7; }
	inline void set_position_7(Vector3_t3525329789  value)
	{
		___position_7 = value;
	}

	inline static int32_t get_offset_of_fixedY_8() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___fixedY_8)); }
	inline float get_fixedY_8() const { return ___fixedY_8; }
	inline float* get_address_of_fixedY_8() { return &___fixedY_8; }
	inline void set_fixedY_8(float value)
	{
		___fixedY_8 = value;
	}

	inline static int32_t get_offset_of_fixedX_9() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___fixedX_9)); }
	inline float get_fixedX_9() const { return ___fixedX_9; }
	inline float* get_address_of_fixedX_9() { return &___fixedX_9; }
	inline void set_fixedX_9(float value)
	{
		___fixedX_9 = value;
	}

	inline static int32_t get_offset_of_speedTime_10() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___speedTime_10)); }
	inline float get_speedTime_10() const { return ___speedTime_10; }
	inline float* get_address_of_speedTime_10() { return &___speedTime_10; }
	inline void set_speedTime_10(float value)
	{
		___speedTime_10 = value;
	}

	inline static int32_t get_offset_of_firstSpawn_11() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___firstSpawn_11)); }
	inline bool get_firstSpawn_11() const { return ___firstSpawn_11; }
	inline bool* get_address_of_firstSpawn_11() { return &___firstSpawn_11; }
	inline void set_firstSpawn_11(bool value)
	{
		___firstSpawn_11 = value;
	}

	inline static int32_t get_offset_of_spawnNumber_12() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___spawnNumber_12)); }
	inline int32_t get_spawnNumber_12() const { return ___spawnNumber_12; }
	inline int32_t* get_address_of_spawnNumber_12() { return &___spawnNumber_12; }
	inline void set_spawnNumber_12(int32_t value)
	{
		___spawnNumber_12 = value;
	}

	inline static int32_t get_offset_of_matchNum_13() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___matchNum_13)); }
	inline bool get_matchNum_13() const { return ___matchNum_13; }
	inline bool* get_address_of_matchNum_13() { return &___matchNum_13; }
	inline void set_matchNum_13(bool value)
	{
		___matchNum_13 = value;
	}

	inline static int32_t get_offset_of_mainCube_14() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___mainCube_14)); }
	inline MainCube_t55713198 * get_mainCube_14() const { return ___mainCube_14; }
	inline MainCube_t55713198 ** get_address_of_mainCube_14() { return &___mainCube_14; }
	inline void set_mainCube_14(MainCube_t55713198 * value)
	{
		___mainCube_14 = value;
		Il2CppCodeGenWriteBarrier(&___mainCube_14, value);
	}

	inline static int32_t get_offset_of_cube_15() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___cube_15)); }
	inline Cube_t2111573 * get_cube_15() const { return ___cube_15; }
	inline Cube_t2111573 ** get_address_of_cube_15() { return &___cube_15; }
	inline void set_cube_15(Cube_t2111573 * value)
	{
		___cube_15 = value;
		Il2CppCodeGenWriteBarrier(&___cube_15, value);
	}

	inline static int32_t get_offset_of_diamondScript_16() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___diamondScript_16)); }
	inline Diamond_t3319707956 * get_diamondScript_16() const { return ___diamondScript_16; }
	inline Diamond_t3319707956 ** get_address_of_diamondScript_16() { return &___diamondScript_16; }
	inline void set_diamondScript_16(Diamond_t3319707956 * value)
	{
		___diamondScript_16 = value;
		Il2CppCodeGenWriteBarrier(&___diamondScript_16, value);
	}

	inline static int32_t get_offset_of_ballScript_17() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___ballScript_17)); }
	inline Ball_t2062879 * get_ballScript_17() const { return ___ballScript_17; }
	inline Ball_t2062879 ** get_address_of_ballScript_17() { return &___ballScript_17; }
	inline void set_ballScript_17(Ball_t2062879 * value)
	{
		___ballScript_17 = value;
		Il2CppCodeGenWriteBarrier(&___ballScript_17, value);
	}

	inline static int32_t get_offset_of_spawnManager_18() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___spawnManager_18)); }
	inline SpawnerManager_t45089093 * get_spawnManager_18() const { return ___spawnManager_18; }
	inline SpawnerManager_t45089093 ** get_address_of_spawnManager_18() { return &___spawnManager_18; }
	inline void set_spawnManager_18(SpawnerManager_t45089093 * value)
	{
		___spawnManager_18 = value;
		Il2CppCodeGenWriteBarrier(&___spawnManager_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

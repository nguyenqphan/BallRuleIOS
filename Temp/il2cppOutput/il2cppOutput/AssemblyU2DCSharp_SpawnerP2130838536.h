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
	// System.Boolean SpawnerP::firstSpawn
	bool ___firstSpawn_10;
	// System.Int32 SpawnerP::spawnNumber
	int32_t ___spawnNumber_11;
	// System.Boolean SpawnerP::matchNum
	bool ___matchNum_12;
	// MainCube SpawnerP::mainCube
	MainCube_t55713198 * ___mainCube_13;
	// Cube SpawnerP::cube
	Cube_t2111573 * ___cube_14;
	// Diamond SpawnerP::diamondScript
	Diamond_t3319707956 * ___diamondScript_15;
	// Ball SpawnerP::ballScript
	Ball_t2062879 * ___ballScript_16;
	// SpawnerManager SpawnerP::spawnManager
	SpawnerManager_t45089093 * ___spawnManager_17;

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

	inline static int32_t get_offset_of_firstSpawn_10() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___firstSpawn_10)); }
	inline bool get_firstSpawn_10() const { return ___firstSpawn_10; }
	inline bool* get_address_of_firstSpawn_10() { return &___firstSpawn_10; }
	inline void set_firstSpawn_10(bool value)
	{
		___firstSpawn_10 = value;
	}

	inline static int32_t get_offset_of_spawnNumber_11() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___spawnNumber_11)); }
	inline int32_t get_spawnNumber_11() const { return ___spawnNumber_11; }
	inline int32_t* get_address_of_spawnNumber_11() { return &___spawnNumber_11; }
	inline void set_spawnNumber_11(int32_t value)
	{
		___spawnNumber_11 = value;
	}

	inline static int32_t get_offset_of_matchNum_12() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___matchNum_12)); }
	inline bool get_matchNum_12() const { return ___matchNum_12; }
	inline bool* get_address_of_matchNum_12() { return &___matchNum_12; }
	inline void set_matchNum_12(bool value)
	{
		___matchNum_12 = value;
	}

	inline static int32_t get_offset_of_mainCube_13() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___mainCube_13)); }
	inline MainCube_t55713198 * get_mainCube_13() const { return ___mainCube_13; }
	inline MainCube_t55713198 ** get_address_of_mainCube_13() { return &___mainCube_13; }
	inline void set_mainCube_13(MainCube_t55713198 * value)
	{
		___mainCube_13 = value;
		Il2CppCodeGenWriteBarrier(&___mainCube_13, value);
	}

	inline static int32_t get_offset_of_cube_14() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___cube_14)); }
	inline Cube_t2111573 * get_cube_14() const { return ___cube_14; }
	inline Cube_t2111573 ** get_address_of_cube_14() { return &___cube_14; }
	inline void set_cube_14(Cube_t2111573 * value)
	{
		___cube_14 = value;
		Il2CppCodeGenWriteBarrier(&___cube_14, value);
	}

	inline static int32_t get_offset_of_diamondScript_15() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___diamondScript_15)); }
	inline Diamond_t3319707956 * get_diamondScript_15() const { return ___diamondScript_15; }
	inline Diamond_t3319707956 ** get_address_of_diamondScript_15() { return &___diamondScript_15; }
	inline void set_diamondScript_15(Diamond_t3319707956 * value)
	{
		___diamondScript_15 = value;
		Il2CppCodeGenWriteBarrier(&___diamondScript_15, value);
	}

	inline static int32_t get_offset_of_ballScript_16() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___ballScript_16)); }
	inline Ball_t2062879 * get_ballScript_16() const { return ___ballScript_16; }
	inline Ball_t2062879 ** get_address_of_ballScript_16() { return &___ballScript_16; }
	inline void set_ballScript_16(Ball_t2062879 * value)
	{
		___ballScript_16 = value;
		Il2CppCodeGenWriteBarrier(&___ballScript_16, value);
	}

	inline static int32_t get_offset_of_spawnManager_17() { return static_cast<int32_t>(offsetof(SpawnerP_t2130838536, ___spawnManager_17)); }
	inline SpawnerManager_t45089093 * get_spawnManager_17() const { return ___spawnManager_17; }
	inline SpawnerManager_t45089093 ** get_address_of_spawnManager_17() { return &___spawnManager_17; }
	inline void set_spawnManager_17(SpawnerManager_t45089093 * value)
	{
		___spawnManager_17 = value;
		Il2CppCodeGenWriteBarrier(&___spawnManager_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

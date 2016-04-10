#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_SpawnerP2130838536.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnerManager
struct  SpawnerManager_t45089093  : public MonoBehaviour_t3012272455
{
public:
	// SpawnerP SpawnerManager::spawnP
	SpawnerP_t2130838536  ___spawnP_2;
	// UnityEngine.Transform SpawnerManager::obstacleLeftPos
	Transform_t284553113 * ___obstacleLeftPos_3;
	// UnityEngine.Transform SpawnerManager::obstacleRightPos
	Transform_t284553113 * ___obstacleRightPos_4;
	// UnityEngine.GameObject SpawnerManager::cubeToInstantiate
	GameObject_t4012695102 * ___cubeToInstantiate_5;
	// UnityEngine.GameObject SpawnerManager::cubeParticle
	GameObject_t4012695102 * ___cubeParticle_6;
	// UnityEngine.GameObject SpawnerManager::diamond
	GameObject_t4012695102 * ___diamond_7;
	// UnityEngine.GameObject SpawnerManager::diaEmissive
	GameObject_t4012695102 * ___diaEmissive_8;
	// UnityEngine.GameObject SpawnerManager::diaBreaking
	GameObject_t4012695102 * ___diaBreaking_9;
	// UnityEngine.GameObject SpawnerManager::ball
	GameObject_t4012695102 * ___ball_10;
	// UnityEngine.GameObject SpawnerManager::ballExplode
	GameObject_t4012695102 * ___ballExplode_11;
	// UnityEngine.GameObject SpawnerManager::smallCube
	GameObject_t4012695102 * ___smallCube_12;
	// UnityEngine.GameObject SpawnerManager::mallestCube
	GameObject_t4012695102 * ___mallestCube_13;
	// UnityEngine.GameObject SpawnerManager::star
	GameObject_t4012695102 * ___star_14;
	// UnityEngine.GameObject SpawnerManager::ballObstacle
	GameObject_t4012695102 * ___ballObstacle_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::cubeList
	List_1_t514686775 * ___cubeList_16;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::particleList
	List_1_t514686775 * ___particleList_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::diamondList
	List_1_t514686775 * ___diamondList_18;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::diaEmissiveList
	List_1_t514686775 * ___diaEmissiveList_19;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::diaBreakingList
	List_1_t514686775 * ___diaBreakingList_20;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::ballList
	List_1_t514686775 * ___ballList_21;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::ballExplodeList
	List_1_t514686775 * ___ballExplodeList_22;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::smallCubeList
	List_1_t514686775 * ___smallCubeList_23;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::smallestCubeList
	List_1_t514686775 * ___smallestCubeList_24;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::starList
	List_1_t514686775 * ___starList_25;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::ballObstacleList
	List_1_t514686775 * ___ballObstacleList_26;

public:
	inline static int32_t get_offset_of_spawnP_2() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___spawnP_2)); }
	inline SpawnerP_t2130838536  get_spawnP_2() const { return ___spawnP_2; }
	inline SpawnerP_t2130838536 * get_address_of_spawnP_2() { return &___spawnP_2; }
	inline void set_spawnP_2(SpawnerP_t2130838536  value)
	{
		___spawnP_2 = value;
	}

	inline static int32_t get_offset_of_obstacleLeftPos_3() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___obstacleLeftPos_3)); }
	inline Transform_t284553113 * get_obstacleLeftPos_3() const { return ___obstacleLeftPos_3; }
	inline Transform_t284553113 ** get_address_of_obstacleLeftPos_3() { return &___obstacleLeftPos_3; }
	inline void set_obstacleLeftPos_3(Transform_t284553113 * value)
	{
		___obstacleLeftPos_3 = value;
		Il2CppCodeGenWriteBarrier(&___obstacleLeftPos_3, value);
	}

	inline static int32_t get_offset_of_obstacleRightPos_4() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___obstacleRightPos_4)); }
	inline Transform_t284553113 * get_obstacleRightPos_4() const { return ___obstacleRightPos_4; }
	inline Transform_t284553113 ** get_address_of_obstacleRightPos_4() { return &___obstacleRightPos_4; }
	inline void set_obstacleRightPos_4(Transform_t284553113 * value)
	{
		___obstacleRightPos_4 = value;
		Il2CppCodeGenWriteBarrier(&___obstacleRightPos_4, value);
	}

	inline static int32_t get_offset_of_cubeToInstantiate_5() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___cubeToInstantiate_5)); }
	inline GameObject_t4012695102 * get_cubeToInstantiate_5() const { return ___cubeToInstantiate_5; }
	inline GameObject_t4012695102 ** get_address_of_cubeToInstantiate_5() { return &___cubeToInstantiate_5; }
	inline void set_cubeToInstantiate_5(GameObject_t4012695102 * value)
	{
		___cubeToInstantiate_5 = value;
		Il2CppCodeGenWriteBarrier(&___cubeToInstantiate_5, value);
	}

	inline static int32_t get_offset_of_cubeParticle_6() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___cubeParticle_6)); }
	inline GameObject_t4012695102 * get_cubeParticle_6() const { return ___cubeParticle_6; }
	inline GameObject_t4012695102 ** get_address_of_cubeParticle_6() { return &___cubeParticle_6; }
	inline void set_cubeParticle_6(GameObject_t4012695102 * value)
	{
		___cubeParticle_6 = value;
		Il2CppCodeGenWriteBarrier(&___cubeParticle_6, value);
	}

	inline static int32_t get_offset_of_diamond_7() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diamond_7)); }
	inline GameObject_t4012695102 * get_diamond_7() const { return ___diamond_7; }
	inline GameObject_t4012695102 ** get_address_of_diamond_7() { return &___diamond_7; }
	inline void set_diamond_7(GameObject_t4012695102 * value)
	{
		___diamond_7 = value;
		Il2CppCodeGenWriteBarrier(&___diamond_7, value);
	}

	inline static int32_t get_offset_of_diaEmissive_8() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diaEmissive_8)); }
	inline GameObject_t4012695102 * get_diaEmissive_8() const { return ___diaEmissive_8; }
	inline GameObject_t4012695102 ** get_address_of_diaEmissive_8() { return &___diaEmissive_8; }
	inline void set_diaEmissive_8(GameObject_t4012695102 * value)
	{
		___diaEmissive_8 = value;
		Il2CppCodeGenWriteBarrier(&___diaEmissive_8, value);
	}

	inline static int32_t get_offset_of_diaBreaking_9() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diaBreaking_9)); }
	inline GameObject_t4012695102 * get_diaBreaking_9() const { return ___diaBreaking_9; }
	inline GameObject_t4012695102 ** get_address_of_diaBreaking_9() { return &___diaBreaking_9; }
	inline void set_diaBreaking_9(GameObject_t4012695102 * value)
	{
		___diaBreaking_9 = value;
		Il2CppCodeGenWriteBarrier(&___diaBreaking_9, value);
	}

	inline static int32_t get_offset_of_ball_10() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ball_10)); }
	inline GameObject_t4012695102 * get_ball_10() const { return ___ball_10; }
	inline GameObject_t4012695102 ** get_address_of_ball_10() { return &___ball_10; }
	inline void set_ball_10(GameObject_t4012695102 * value)
	{
		___ball_10 = value;
		Il2CppCodeGenWriteBarrier(&___ball_10, value);
	}

	inline static int32_t get_offset_of_ballExplode_11() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ballExplode_11)); }
	inline GameObject_t4012695102 * get_ballExplode_11() const { return ___ballExplode_11; }
	inline GameObject_t4012695102 ** get_address_of_ballExplode_11() { return &___ballExplode_11; }
	inline void set_ballExplode_11(GameObject_t4012695102 * value)
	{
		___ballExplode_11 = value;
		Il2CppCodeGenWriteBarrier(&___ballExplode_11, value);
	}

	inline static int32_t get_offset_of_smallCube_12() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___smallCube_12)); }
	inline GameObject_t4012695102 * get_smallCube_12() const { return ___smallCube_12; }
	inline GameObject_t4012695102 ** get_address_of_smallCube_12() { return &___smallCube_12; }
	inline void set_smallCube_12(GameObject_t4012695102 * value)
	{
		___smallCube_12 = value;
		Il2CppCodeGenWriteBarrier(&___smallCube_12, value);
	}

	inline static int32_t get_offset_of_mallestCube_13() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___mallestCube_13)); }
	inline GameObject_t4012695102 * get_mallestCube_13() const { return ___mallestCube_13; }
	inline GameObject_t4012695102 ** get_address_of_mallestCube_13() { return &___mallestCube_13; }
	inline void set_mallestCube_13(GameObject_t4012695102 * value)
	{
		___mallestCube_13 = value;
		Il2CppCodeGenWriteBarrier(&___mallestCube_13, value);
	}

	inline static int32_t get_offset_of_star_14() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___star_14)); }
	inline GameObject_t4012695102 * get_star_14() const { return ___star_14; }
	inline GameObject_t4012695102 ** get_address_of_star_14() { return &___star_14; }
	inline void set_star_14(GameObject_t4012695102 * value)
	{
		___star_14 = value;
		Il2CppCodeGenWriteBarrier(&___star_14, value);
	}

	inline static int32_t get_offset_of_ballObstacle_15() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ballObstacle_15)); }
	inline GameObject_t4012695102 * get_ballObstacle_15() const { return ___ballObstacle_15; }
	inline GameObject_t4012695102 ** get_address_of_ballObstacle_15() { return &___ballObstacle_15; }
	inline void set_ballObstacle_15(GameObject_t4012695102 * value)
	{
		___ballObstacle_15 = value;
		Il2CppCodeGenWriteBarrier(&___ballObstacle_15, value);
	}

	inline static int32_t get_offset_of_cubeList_16() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___cubeList_16)); }
	inline List_1_t514686775 * get_cubeList_16() const { return ___cubeList_16; }
	inline List_1_t514686775 ** get_address_of_cubeList_16() { return &___cubeList_16; }
	inline void set_cubeList_16(List_1_t514686775 * value)
	{
		___cubeList_16 = value;
		Il2CppCodeGenWriteBarrier(&___cubeList_16, value);
	}

	inline static int32_t get_offset_of_particleList_17() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___particleList_17)); }
	inline List_1_t514686775 * get_particleList_17() const { return ___particleList_17; }
	inline List_1_t514686775 ** get_address_of_particleList_17() { return &___particleList_17; }
	inline void set_particleList_17(List_1_t514686775 * value)
	{
		___particleList_17 = value;
		Il2CppCodeGenWriteBarrier(&___particleList_17, value);
	}

	inline static int32_t get_offset_of_diamondList_18() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diamondList_18)); }
	inline List_1_t514686775 * get_diamondList_18() const { return ___diamondList_18; }
	inline List_1_t514686775 ** get_address_of_diamondList_18() { return &___diamondList_18; }
	inline void set_diamondList_18(List_1_t514686775 * value)
	{
		___diamondList_18 = value;
		Il2CppCodeGenWriteBarrier(&___diamondList_18, value);
	}

	inline static int32_t get_offset_of_diaEmissiveList_19() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diaEmissiveList_19)); }
	inline List_1_t514686775 * get_diaEmissiveList_19() const { return ___diaEmissiveList_19; }
	inline List_1_t514686775 ** get_address_of_diaEmissiveList_19() { return &___diaEmissiveList_19; }
	inline void set_diaEmissiveList_19(List_1_t514686775 * value)
	{
		___diaEmissiveList_19 = value;
		Il2CppCodeGenWriteBarrier(&___diaEmissiveList_19, value);
	}

	inline static int32_t get_offset_of_diaBreakingList_20() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diaBreakingList_20)); }
	inline List_1_t514686775 * get_diaBreakingList_20() const { return ___diaBreakingList_20; }
	inline List_1_t514686775 ** get_address_of_diaBreakingList_20() { return &___diaBreakingList_20; }
	inline void set_diaBreakingList_20(List_1_t514686775 * value)
	{
		___diaBreakingList_20 = value;
		Il2CppCodeGenWriteBarrier(&___diaBreakingList_20, value);
	}

	inline static int32_t get_offset_of_ballList_21() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ballList_21)); }
	inline List_1_t514686775 * get_ballList_21() const { return ___ballList_21; }
	inline List_1_t514686775 ** get_address_of_ballList_21() { return &___ballList_21; }
	inline void set_ballList_21(List_1_t514686775 * value)
	{
		___ballList_21 = value;
		Il2CppCodeGenWriteBarrier(&___ballList_21, value);
	}

	inline static int32_t get_offset_of_ballExplodeList_22() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ballExplodeList_22)); }
	inline List_1_t514686775 * get_ballExplodeList_22() const { return ___ballExplodeList_22; }
	inline List_1_t514686775 ** get_address_of_ballExplodeList_22() { return &___ballExplodeList_22; }
	inline void set_ballExplodeList_22(List_1_t514686775 * value)
	{
		___ballExplodeList_22 = value;
		Il2CppCodeGenWriteBarrier(&___ballExplodeList_22, value);
	}

	inline static int32_t get_offset_of_smallCubeList_23() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___smallCubeList_23)); }
	inline List_1_t514686775 * get_smallCubeList_23() const { return ___smallCubeList_23; }
	inline List_1_t514686775 ** get_address_of_smallCubeList_23() { return &___smallCubeList_23; }
	inline void set_smallCubeList_23(List_1_t514686775 * value)
	{
		___smallCubeList_23 = value;
		Il2CppCodeGenWriteBarrier(&___smallCubeList_23, value);
	}

	inline static int32_t get_offset_of_smallestCubeList_24() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___smallestCubeList_24)); }
	inline List_1_t514686775 * get_smallestCubeList_24() const { return ___smallestCubeList_24; }
	inline List_1_t514686775 ** get_address_of_smallestCubeList_24() { return &___smallestCubeList_24; }
	inline void set_smallestCubeList_24(List_1_t514686775 * value)
	{
		___smallestCubeList_24 = value;
		Il2CppCodeGenWriteBarrier(&___smallestCubeList_24, value);
	}

	inline static int32_t get_offset_of_starList_25() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___starList_25)); }
	inline List_1_t514686775 * get_starList_25() const { return ___starList_25; }
	inline List_1_t514686775 ** get_address_of_starList_25() { return &___starList_25; }
	inline void set_starList_25(List_1_t514686775 * value)
	{
		___starList_25 = value;
		Il2CppCodeGenWriteBarrier(&___starList_25, value);
	}

	inline static int32_t get_offset_of_ballObstacleList_26() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ballObstacleList_26)); }
	inline List_1_t514686775 * get_ballObstacleList_26() const { return ___ballObstacleList_26; }
	inline List_1_t514686775 ** get_address_of_ballObstacleList_26() { return &___ballObstacleList_26; }
	inline void set_ballObstacleList_26(List_1_t514686775 * value)
	{
		___ballObstacleList_26 = value;
		Il2CppCodeGenWriteBarrier(&___ballObstacleList_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

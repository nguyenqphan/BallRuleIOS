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
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t1081512082;

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
	// UnityEngine.Transform SpawnerManager::cubeTrans
	Transform_t284553113 * ___cubeTrans_16;
	// UnityEngine.Transform SpawnerManager::cubeParticleTrans
	Transform_t284553113 * ___cubeParticleTrans_17;
	// UnityEngine.Transform SpawnerManager::diamondTrans
	Transform_t284553113 * ___diamondTrans_18;
	// UnityEngine.Transform SpawnerManager::diaEmissiveTrans
	Transform_t284553113 * ___diaEmissiveTrans_19;
	// UnityEngine.Transform SpawnerManager::diaBreakingTrans
	Transform_t284553113 * ___diaBreakingTrans_20;
	// UnityEngine.Transform SpawnerManager::ballTrans
	Transform_t284553113 * ___ballTrans_21;
	// UnityEngine.Transform SpawnerManager::ballExplodeTrans
	Transform_t284553113 * ___ballExplodeTrans_22;
	// UnityEngine.Transform SpawnerManager::smallCubeTrans
	Transform_t284553113 * ___smallCubeTrans_23;
	// UnityEngine.Transform SpawnerManager::smallestCubeTrans
	Transform_t284553113 * ___smallestCubeTrans_24;
	// UnityEngine.Transform SpawnerManager::starTrans
	Transform_t284553113 * ___starTrans_25;
	// UnityEngine.Transform SpawnerManager::ballObstacleTrans
	Transform_t284553113 * ___ballObstacleTrans_26;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::cubeList
	List_1_t514686775 * ___cubeList_27;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::particleList
	List_1_t514686775 * ___particleList_28;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::diamondList
	List_1_t514686775 * ___diamondList_29;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::diaEmissiveList
	List_1_t514686775 * ___diaEmissiveList_30;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::diaBreakingList
	List_1_t514686775 * ___diaBreakingList_31;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::ballList
	List_1_t514686775 * ___ballList_32;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::ballExplodeList
	List_1_t514686775 * ___ballExplodeList_33;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::smallCubeList
	List_1_t514686775 * ___smallCubeList_34;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::smallestCubeList
	List_1_t514686775 * ___smallestCubeList_35;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::ballObstacleList
	List_1_t514686775 * ___ballObstacleList_36;
	// System.Collections.Generic.List`1<UnityEngine.Transform> SpawnerManager::cubeTransList
	List_1_t1081512082 * ___cubeTransList_37;
	// System.Collections.Generic.List`1<UnityEngine.Transform> SpawnerManager::cubeParticleTransList
	List_1_t1081512082 * ___cubeParticleTransList_38;
	// System.Collections.Generic.List`1<UnityEngine.Transform> SpawnerManager::diamondTransList
	List_1_t1081512082 * ___diamondTransList_39;
	// System.Collections.Generic.List`1<UnityEngine.Transform> SpawnerManager::diaEmissTransList
	List_1_t1081512082 * ___diaEmissTransList_40;
	// System.Collections.Generic.List`1<UnityEngine.Transform> SpawnerManager::diaBreakingTransList
	List_1_t1081512082 * ___diaBreakingTransList_41;
	// System.Collections.Generic.List`1<UnityEngine.Transform> SpawnerManager::ballTransList
	List_1_t1081512082 * ___ballTransList_42;
	// System.Collections.Generic.List`1<UnityEngine.Transform> SpawnerManager::ballExplodeTransList
	List_1_t1081512082 * ___ballExplodeTransList_43;
	// System.Collections.Generic.List`1<UnityEngine.Transform> SpawnerManager::smallCubeTransList
	List_1_t1081512082 * ___smallCubeTransList_44;
	// System.Collections.Generic.List`1<UnityEngine.Transform> SpawnerManager::smallestCubeTransList
	List_1_t1081512082 * ___smallestCubeTransList_45;
	// System.Collections.Generic.List`1<UnityEngine.Transform> SpawnerManager::ballObstacleTransList
	List_1_t1081512082 * ___ballObstacleTransList_46;

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

	inline static int32_t get_offset_of_cubeTrans_16() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___cubeTrans_16)); }
	inline Transform_t284553113 * get_cubeTrans_16() const { return ___cubeTrans_16; }
	inline Transform_t284553113 ** get_address_of_cubeTrans_16() { return &___cubeTrans_16; }
	inline void set_cubeTrans_16(Transform_t284553113 * value)
	{
		___cubeTrans_16 = value;
		Il2CppCodeGenWriteBarrier(&___cubeTrans_16, value);
	}

	inline static int32_t get_offset_of_cubeParticleTrans_17() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___cubeParticleTrans_17)); }
	inline Transform_t284553113 * get_cubeParticleTrans_17() const { return ___cubeParticleTrans_17; }
	inline Transform_t284553113 ** get_address_of_cubeParticleTrans_17() { return &___cubeParticleTrans_17; }
	inline void set_cubeParticleTrans_17(Transform_t284553113 * value)
	{
		___cubeParticleTrans_17 = value;
		Il2CppCodeGenWriteBarrier(&___cubeParticleTrans_17, value);
	}

	inline static int32_t get_offset_of_diamondTrans_18() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diamondTrans_18)); }
	inline Transform_t284553113 * get_diamondTrans_18() const { return ___diamondTrans_18; }
	inline Transform_t284553113 ** get_address_of_diamondTrans_18() { return &___diamondTrans_18; }
	inline void set_diamondTrans_18(Transform_t284553113 * value)
	{
		___diamondTrans_18 = value;
		Il2CppCodeGenWriteBarrier(&___diamondTrans_18, value);
	}

	inline static int32_t get_offset_of_diaEmissiveTrans_19() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diaEmissiveTrans_19)); }
	inline Transform_t284553113 * get_diaEmissiveTrans_19() const { return ___diaEmissiveTrans_19; }
	inline Transform_t284553113 ** get_address_of_diaEmissiveTrans_19() { return &___diaEmissiveTrans_19; }
	inline void set_diaEmissiveTrans_19(Transform_t284553113 * value)
	{
		___diaEmissiveTrans_19 = value;
		Il2CppCodeGenWriteBarrier(&___diaEmissiveTrans_19, value);
	}

	inline static int32_t get_offset_of_diaBreakingTrans_20() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diaBreakingTrans_20)); }
	inline Transform_t284553113 * get_diaBreakingTrans_20() const { return ___diaBreakingTrans_20; }
	inline Transform_t284553113 ** get_address_of_diaBreakingTrans_20() { return &___diaBreakingTrans_20; }
	inline void set_diaBreakingTrans_20(Transform_t284553113 * value)
	{
		___diaBreakingTrans_20 = value;
		Il2CppCodeGenWriteBarrier(&___diaBreakingTrans_20, value);
	}

	inline static int32_t get_offset_of_ballTrans_21() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ballTrans_21)); }
	inline Transform_t284553113 * get_ballTrans_21() const { return ___ballTrans_21; }
	inline Transform_t284553113 ** get_address_of_ballTrans_21() { return &___ballTrans_21; }
	inline void set_ballTrans_21(Transform_t284553113 * value)
	{
		___ballTrans_21 = value;
		Il2CppCodeGenWriteBarrier(&___ballTrans_21, value);
	}

	inline static int32_t get_offset_of_ballExplodeTrans_22() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ballExplodeTrans_22)); }
	inline Transform_t284553113 * get_ballExplodeTrans_22() const { return ___ballExplodeTrans_22; }
	inline Transform_t284553113 ** get_address_of_ballExplodeTrans_22() { return &___ballExplodeTrans_22; }
	inline void set_ballExplodeTrans_22(Transform_t284553113 * value)
	{
		___ballExplodeTrans_22 = value;
		Il2CppCodeGenWriteBarrier(&___ballExplodeTrans_22, value);
	}

	inline static int32_t get_offset_of_smallCubeTrans_23() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___smallCubeTrans_23)); }
	inline Transform_t284553113 * get_smallCubeTrans_23() const { return ___smallCubeTrans_23; }
	inline Transform_t284553113 ** get_address_of_smallCubeTrans_23() { return &___smallCubeTrans_23; }
	inline void set_smallCubeTrans_23(Transform_t284553113 * value)
	{
		___smallCubeTrans_23 = value;
		Il2CppCodeGenWriteBarrier(&___smallCubeTrans_23, value);
	}

	inline static int32_t get_offset_of_smallestCubeTrans_24() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___smallestCubeTrans_24)); }
	inline Transform_t284553113 * get_smallestCubeTrans_24() const { return ___smallestCubeTrans_24; }
	inline Transform_t284553113 ** get_address_of_smallestCubeTrans_24() { return &___smallestCubeTrans_24; }
	inline void set_smallestCubeTrans_24(Transform_t284553113 * value)
	{
		___smallestCubeTrans_24 = value;
		Il2CppCodeGenWriteBarrier(&___smallestCubeTrans_24, value);
	}

	inline static int32_t get_offset_of_starTrans_25() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___starTrans_25)); }
	inline Transform_t284553113 * get_starTrans_25() const { return ___starTrans_25; }
	inline Transform_t284553113 ** get_address_of_starTrans_25() { return &___starTrans_25; }
	inline void set_starTrans_25(Transform_t284553113 * value)
	{
		___starTrans_25 = value;
		Il2CppCodeGenWriteBarrier(&___starTrans_25, value);
	}

	inline static int32_t get_offset_of_ballObstacleTrans_26() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ballObstacleTrans_26)); }
	inline Transform_t284553113 * get_ballObstacleTrans_26() const { return ___ballObstacleTrans_26; }
	inline Transform_t284553113 ** get_address_of_ballObstacleTrans_26() { return &___ballObstacleTrans_26; }
	inline void set_ballObstacleTrans_26(Transform_t284553113 * value)
	{
		___ballObstacleTrans_26 = value;
		Il2CppCodeGenWriteBarrier(&___ballObstacleTrans_26, value);
	}

	inline static int32_t get_offset_of_cubeList_27() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___cubeList_27)); }
	inline List_1_t514686775 * get_cubeList_27() const { return ___cubeList_27; }
	inline List_1_t514686775 ** get_address_of_cubeList_27() { return &___cubeList_27; }
	inline void set_cubeList_27(List_1_t514686775 * value)
	{
		___cubeList_27 = value;
		Il2CppCodeGenWriteBarrier(&___cubeList_27, value);
	}

	inline static int32_t get_offset_of_particleList_28() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___particleList_28)); }
	inline List_1_t514686775 * get_particleList_28() const { return ___particleList_28; }
	inline List_1_t514686775 ** get_address_of_particleList_28() { return &___particleList_28; }
	inline void set_particleList_28(List_1_t514686775 * value)
	{
		___particleList_28 = value;
		Il2CppCodeGenWriteBarrier(&___particleList_28, value);
	}

	inline static int32_t get_offset_of_diamondList_29() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diamondList_29)); }
	inline List_1_t514686775 * get_diamondList_29() const { return ___diamondList_29; }
	inline List_1_t514686775 ** get_address_of_diamondList_29() { return &___diamondList_29; }
	inline void set_diamondList_29(List_1_t514686775 * value)
	{
		___diamondList_29 = value;
		Il2CppCodeGenWriteBarrier(&___diamondList_29, value);
	}

	inline static int32_t get_offset_of_diaEmissiveList_30() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diaEmissiveList_30)); }
	inline List_1_t514686775 * get_diaEmissiveList_30() const { return ___diaEmissiveList_30; }
	inline List_1_t514686775 ** get_address_of_diaEmissiveList_30() { return &___diaEmissiveList_30; }
	inline void set_diaEmissiveList_30(List_1_t514686775 * value)
	{
		___diaEmissiveList_30 = value;
		Il2CppCodeGenWriteBarrier(&___diaEmissiveList_30, value);
	}

	inline static int32_t get_offset_of_diaBreakingList_31() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diaBreakingList_31)); }
	inline List_1_t514686775 * get_diaBreakingList_31() const { return ___diaBreakingList_31; }
	inline List_1_t514686775 ** get_address_of_diaBreakingList_31() { return &___diaBreakingList_31; }
	inline void set_diaBreakingList_31(List_1_t514686775 * value)
	{
		___diaBreakingList_31 = value;
		Il2CppCodeGenWriteBarrier(&___diaBreakingList_31, value);
	}

	inline static int32_t get_offset_of_ballList_32() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ballList_32)); }
	inline List_1_t514686775 * get_ballList_32() const { return ___ballList_32; }
	inline List_1_t514686775 ** get_address_of_ballList_32() { return &___ballList_32; }
	inline void set_ballList_32(List_1_t514686775 * value)
	{
		___ballList_32 = value;
		Il2CppCodeGenWriteBarrier(&___ballList_32, value);
	}

	inline static int32_t get_offset_of_ballExplodeList_33() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ballExplodeList_33)); }
	inline List_1_t514686775 * get_ballExplodeList_33() const { return ___ballExplodeList_33; }
	inline List_1_t514686775 ** get_address_of_ballExplodeList_33() { return &___ballExplodeList_33; }
	inline void set_ballExplodeList_33(List_1_t514686775 * value)
	{
		___ballExplodeList_33 = value;
		Il2CppCodeGenWriteBarrier(&___ballExplodeList_33, value);
	}

	inline static int32_t get_offset_of_smallCubeList_34() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___smallCubeList_34)); }
	inline List_1_t514686775 * get_smallCubeList_34() const { return ___smallCubeList_34; }
	inline List_1_t514686775 ** get_address_of_smallCubeList_34() { return &___smallCubeList_34; }
	inline void set_smallCubeList_34(List_1_t514686775 * value)
	{
		___smallCubeList_34 = value;
		Il2CppCodeGenWriteBarrier(&___smallCubeList_34, value);
	}

	inline static int32_t get_offset_of_smallestCubeList_35() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___smallestCubeList_35)); }
	inline List_1_t514686775 * get_smallestCubeList_35() const { return ___smallestCubeList_35; }
	inline List_1_t514686775 ** get_address_of_smallestCubeList_35() { return &___smallestCubeList_35; }
	inline void set_smallestCubeList_35(List_1_t514686775 * value)
	{
		___smallestCubeList_35 = value;
		Il2CppCodeGenWriteBarrier(&___smallestCubeList_35, value);
	}

	inline static int32_t get_offset_of_ballObstacleList_36() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ballObstacleList_36)); }
	inline List_1_t514686775 * get_ballObstacleList_36() const { return ___ballObstacleList_36; }
	inline List_1_t514686775 ** get_address_of_ballObstacleList_36() { return &___ballObstacleList_36; }
	inline void set_ballObstacleList_36(List_1_t514686775 * value)
	{
		___ballObstacleList_36 = value;
		Il2CppCodeGenWriteBarrier(&___ballObstacleList_36, value);
	}

	inline static int32_t get_offset_of_cubeTransList_37() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___cubeTransList_37)); }
	inline List_1_t1081512082 * get_cubeTransList_37() const { return ___cubeTransList_37; }
	inline List_1_t1081512082 ** get_address_of_cubeTransList_37() { return &___cubeTransList_37; }
	inline void set_cubeTransList_37(List_1_t1081512082 * value)
	{
		___cubeTransList_37 = value;
		Il2CppCodeGenWriteBarrier(&___cubeTransList_37, value);
	}

	inline static int32_t get_offset_of_cubeParticleTransList_38() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___cubeParticleTransList_38)); }
	inline List_1_t1081512082 * get_cubeParticleTransList_38() const { return ___cubeParticleTransList_38; }
	inline List_1_t1081512082 ** get_address_of_cubeParticleTransList_38() { return &___cubeParticleTransList_38; }
	inline void set_cubeParticleTransList_38(List_1_t1081512082 * value)
	{
		___cubeParticleTransList_38 = value;
		Il2CppCodeGenWriteBarrier(&___cubeParticleTransList_38, value);
	}

	inline static int32_t get_offset_of_diamondTransList_39() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diamondTransList_39)); }
	inline List_1_t1081512082 * get_diamondTransList_39() const { return ___diamondTransList_39; }
	inline List_1_t1081512082 ** get_address_of_diamondTransList_39() { return &___diamondTransList_39; }
	inline void set_diamondTransList_39(List_1_t1081512082 * value)
	{
		___diamondTransList_39 = value;
		Il2CppCodeGenWriteBarrier(&___diamondTransList_39, value);
	}

	inline static int32_t get_offset_of_diaEmissTransList_40() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diaEmissTransList_40)); }
	inline List_1_t1081512082 * get_diaEmissTransList_40() const { return ___diaEmissTransList_40; }
	inline List_1_t1081512082 ** get_address_of_diaEmissTransList_40() { return &___diaEmissTransList_40; }
	inline void set_diaEmissTransList_40(List_1_t1081512082 * value)
	{
		___diaEmissTransList_40 = value;
		Il2CppCodeGenWriteBarrier(&___diaEmissTransList_40, value);
	}

	inline static int32_t get_offset_of_diaBreakingTransList_41() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diaBreakingTransList_41)); }
	inline List_1_t1081512082 * get_diaBreakingTransList_41() const { return ___diaBreakingTransList_41; }
	inline List_1_t1081512082 ** get_address_of_diaBreakingTransList_41() { return &___diaBreakingTransList_41; }
	inline void set_diaBreakingTransList_41(List_1_t1081512082 * value)
	{
		___diaBreakingTransList_41 = value;
		Il2CppCodeGenWriteBarrier(&___diaBreakingTransList_41, value);
	}

	inline static int32_t get_offset_of_ballTransList_42() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ballTransList_42)); }
	inline List_1_t1081512082 * get_ballTransList_42() const { return ___ballTransList_42; }
	inline List_1_t1081512082 ** get_address_of_ballTransList_42() { return &___ballTransList_42; }
	inline void set_ballTransList_42(List_1_t1081512082 * value)
	{
		___ballTransList_42 = value;
		Il2CppCodeGenWriteBarrier(&___ballTransList_42, value);
	}

	inline static int32_t get_offset_of_ballExplodeTransList_43() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ballExplodeTransList_43)); }
	inline List_1_t1081512082 * get_ballExplodeTransList_43() const { return ___ballExplodeTransList_43; }
	inline List_1_t1081512082 ** get_address_of_ballExplodeTransList_43() { return &___ballExplodeTransList_43; }
	inline void set_ballExplodeTransList_43(List_1_t1081512082 * value)
	{
		___ballExplodeTransList_43 = value;
		Il2CppCodeGenWriteBarrier(&___ballExplodeTransList_43, value);
	}

	inline static int32_t get_offset_of_smallCubeTransList_44() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___smallCubeTransList_44)); }
	inline List_1_t1081512082 * get_smallCubeTransList_44() const { return ___smallCubeTransList_44; }
	inline List_1_t1081512082 ** get_address_of_smallCubeTransList_44() { return &___smallCubeTransList_44; }
	inline void set_smallCubeTransList_44(List_1_t1081512082 * value)
	{
		___smallCubeTransList_44 = value;
		Il2CppCodeGenWriteBarrier(&___smallCubeTransList_44, value);
	}

	inline static int32_t get_offset_of_smallestCubeTransList_45() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___smallestCubeTransList_45)); }
	inline List_1_t1081512082 * get_smallestCubeTransList_45() const { return ___smallestCubeTransList_45; }
	inline List_1_t1081512082 ** get_address_of_smallestCubeTransList_45() { return &___smallestCubeTransList_45; }
	inline void set_smallestCubeTransList_45(List_1_t1081512082 * value)
	{
		___smallestCubeTransList_45 = value;
		Il2CppCodeGenWriteBarrier(&___smallestCubeTransList_45, value);
	}

	inline static int32_t get_offset_of_ballObstacleTransList_46() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ballObstacleTransList_46)); }
	inline List_1_t1081512082 * get_ballObstacleTransList_46() const { return ___ballObstacleTransList_46; }
	inline List_1_t1081512082 ** get_address_of_ballObstacleTransList_46() { return &___ballObstacleTransList_46; }
	inline void set_ballObstacleTransList_46(List_1_t1081512082 * value)
	{
		___ballObstacleTransList_46 = value;
		Il2CppCodeGenWriteBarrier(&___ballObstacleTransList_46, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

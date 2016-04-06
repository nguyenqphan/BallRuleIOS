#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

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
	// UnityEngine.GameObject SpawnerManager::cubeToInstantiate
	GameObject_t4012695102 * ___cubeToInstantiate_3;
	// UnityEngine.GameObject SpawnerManager::cubeParticle
	GameObject_t4012695102 * ___cubeParticle_4;
	// UnityEngine.GameObject SpawnerManager::diamond
	GameObject_t4012695102 * ___diamond_5;
	// UnityEngine.GameObject SpawnerManager::diaEmissive
	GameObject_t4012695102 * ___diaEmissive_6;
	// UnityEngine.GameObject SpawnerManager::diaBreaking
	GameObject_t4012695102 * ___diaBreaking_7;
	// UnityEngine.GameObject SpawnerManager::ball
	GameObject_t4012695102 * ___ball_8;
	// UnityEngine.GameObject SpawnerManager::ballExplode
	GameObject_t4012695102 * ___ballExplode_9;
	// UnityEngine.GameObject SpawnerManager::smallCube
	GameObject_t4012695102 * ___smallCube_10;
	// UnityEngine.GameObject SpawnerManager::mallestCube
	GameObject_t4012695102 * ___mallestCube_11;
	// UnityEngine.GameObject SpawnerManager::star
	GameObject_t4012695102 * ___star_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::cubeList
	List_1_t514686775 * ___cubeList_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::particleList
	List_1_t514686775 * ___particleList_14;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::diamondList
	List_1_t514686775 * ___diamondList_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::diaEmissiveList
	List_1_t514686775 * ___diaEmissiveList_16;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::diaBreakingList
	List_1_t514686775 * ___diaBreakingList_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::ballList
	List_1_t514686775 * ___ballList_18;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::ballExplodeList
	List_1_t514686775 * ___ballExplodeList_19;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::smallCubeList
	List_1_t514686775 * ___smallCubeList_20;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::smallestCubeList
	List_1_t514686775 * ___smallestCubeList_21;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::starList
	List_1_t514686775 * ___starList_22;

public:
	inline static int32_t get_offset_of_spawnP_2() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___spawnP_2)); }
	inline SpawnerP_t2130838536  get_spawnP_2() const { return ___spawnP_2; }
	inline SpawnerP_t2130838536 * get_address_of_spawnP_2() { return &___spawnP_2; }
	inline void set_spawnP_2(SpawnerP_t2130838536  value)
	{
		___spawnP_2 = value;
	}

	inline static int32_t get_offset_of_cubeToInstantiate_3() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___cubeToInstantiate_3)); }
	inline GameObject_t4012695102 * get_cubeToInstantiate_3() const { return ___cubeToInstantiate_3; }
	inline GameObject_t4012695102 ** get_address_of_cubeToInstantiate_3() { return &___cubeToInstantiate_3; }
	inline void set_cubeToInstantiate_3(GameObject_t4012695102 * value)
	{
		___cubeToInstantiate_3 = value;
		Il2CppCodeGenWriteBarrier(&___cubeToInstantiate_3, value);
	}

	inline static int32_t get_offset_of_cubeParticle_4() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___cubeParticle_4)); }
	inline GameObject_t4012695102 * get_cubeParticle_4() const { return ___cubeParticle_4; }
	inline GameObject_t4012695102 ** get_address_of_cubeParticle_4() { return &___cubeParticle_4; }
	inline void set_cubeParticle_4(GameObject_t4012695102 * value)
	{
		___cubeParticle_4 = value;
		Il2CppCodeGenWriteBarrier(&___cubeParticle_4, value);
	}

	inline static int32_t get_offset_of_diamond_5() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diamond_5)); }
	inline GameObject_t4012695102 * get_diamond_5() const { return ___diamond_5; }
	inline GameObject_t4012695102 ** get_address_of_diamond_5() { return &___diamond_5; }
	inline void set_diamond_5(GameObject_t4012695102 * value)
	{
		___diamond_5 = value;
		Il2CppCodeGenWriteBarrier(&___diamond_5, value);
	}

	inline static int32_t get_offset_of_diaEmissive_6() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diaEmissive_6)); }
	inline GameObject_t4012695102 * get_diaEmissive_6() const { return ___diaEmissive_6; }
	inline GameObject_t4012695102 ** get_address_of_diaEmissive_6() { return &___diaEmissive_6; }
	inline void set_diaEmissive_6(GameObject_t4012695102 * value)
	{
		___diaEmissive_6 = value;
		Il2CppCodeGenWriteBarrier(&___diaEmissive_6, value);
	}

	inline static int32_t get_offset_of_diaBreaking_7() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diaBreaking_7)); }
	inline GameObject_t4012695102 * get_diaBreaking_7() const { return ___diaBreaking_7; }
	inline GameObject_t4012695102 ** get_address_of_diaBreaking_7() { return &___diaBreaking_7; }
	inline void set_diaBreaking_7(GameObject_t4012695102 * value)
	{
		___diaBreaking_7 = value;
		Il2CppCodeGenWriteBarrier(&___diaBreaking_7, value);
	}

	inline static int32_t get_offset_of_ball_8() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ball_8)); }
	inline GameObject_t4012695102 * get_ball_8() const { return ___ball_8; }
	inline GameObject_t4012695102 ** get_address_of_ball_8() { return &___ball_8; }
	inline void set_ball_8(GameObject_t4012695102 * value)
	{
		___ball_8 = value;
		Il2CppCodeGenWriteBarrier(&___ball_8, value);
	}

	inline static int32_t get_offset_of_ballExplode_9() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ballExplode_9)); }
	inline GameObject_t4012695102 * get_ballExplode_9() const { return ___ballExplode_9; }
	inline GameObject_t4012695102 ** get_address_of_ballExplode_9() { return &___ballExplode_9; }
	inline void set_ballExplode_9(GameObject_t4012695102 * value)
	{
		___ballExplode_9 = value;
		Il2CppCodeGenWriteBarrier(&___ballExplode_9, value);
	}

	inline static int32_t get_offset_of_smallCube_10() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___smallCube_10)); }
	inline GameObject_t4012695102 * get_smallCube_10() const { return ___smallCube_10; }
	inline GameObject_t4012695102 ** get_address_of_smallCube_10() { return &___smallCube_10; }
	inline void set_smallCube_10(GameObject_t4012695102 * value)
	{
		___smallCube_10 = value;
		Il2CppCodeGenWriteBarrier(&___smallCube_10, value);
	}

	inline static int32_t get_offset_of_mallestCube_11() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___mallestCube_11)); }
	inline GameObject_t4012695102 * get_mallestCube_11() const { return ___mallestCube_11; }
	inline GameObject_t4012695102 ** get_address_of_mallestCube_11() { return &___mallestCube_11; }
	inline void set_mallestCube_11(GameObject_t4012695102 * value)
	{
		___mallestCube_11 = value;
		Il2CppCodeGenWriteBarrier(&___mallestCube_11, value);
	}

	inline static int32_t get_offset_of_star_12() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___star_12)); }
	inline GameObject_t4012695102 * get_star_12() const { return ___star_12; }
	inline GameObject_t4012695102 ** get_address_of_star_12() { return &___star_12; }
	inline void set_star_12(GameObject_t4012695102 * value)
	{
		___star_12 = value;
		Il2CppCodeGenWriteBarrier(&___star_12, value);
	}

	inline static int32_t get_offset_of_cubeList_13() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___cubeList_13)); }
	inline List_1_t514686775 * get_cubeList_13() const { return ___cubeList_13; }
	inline List_1_t514686775 ** get_address_of_cubeList_13() { return &___cubeList_13; }
	inline void set_cubeList_13(List_1_t514686775 * value)
	{
		___cubeList_13 = value;
		Il2CppCodeGenWriteBarrier(&___cubeList_13, value);
	}

	inline static int32_t get_offset_of_particleList_14() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___particleList_14)); }
	inline List_1_t514686775 * get_particleList_14() const { return ___particleList_14; }
	inline List_1_t514686775 ** get_address_of_particleList_14() { return &___particleList_14; }
	inline void set_particleList_14(List_1_t514686775 * value)
	{
		___particleList_14 = value;
		Il2CppCodeGenWriteBarrier(&___particleList_14, value);
	}

	inline static int32_t get_offset_of_diamondList_15() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diamondList_15)); }
	inline List_1_t514686775 * get_diamondList_15() const { return ___diamondList_15; }
	inline List_1_t514686775 ** get_address_of_diamondList_15() { return &___diamondList_15; }
	inline void set_diamondList_15(List_1_t514686775 * value)
	{
		___diamondList_15 = value;
		Il2CppCodeGenWriteBarrier(&___diamondList_15, value);
	}

	inline static int32_t get_offset_of_diaEmissiveList_16() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diaEmissiveList_16)); }
	inline List_1_t514686775 * get_diaEmissiveList_16() const { return ___diaEmissiveList_16; }
	inline List_1_t514686775 ** get_address_of_diaEmissiveList_16() { return &___diaEmissiveList_16; }
	inline void set_diaEmissiveList_16(List_1_t514686775 * value)
	{
		___diaEmissiveList_16 = value;
		Il2CppCodeGenWriteBarrier(&___diaEmissiveList_16, value);
	}

	inline static int32_t get_offset_of_diaBreakingList_17() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___diaBreakingList_17)); }
	inline List_1_t514686775 * get_diaBreakingList_17() const { return ___diaBreakingList_17; }
	inline List_1_t514686775 ** get_address_of_diaBreakingList_17() { return &___diaBreakingList_17; }
	inline void set_diaBreakingList_17(List_1_t514686775 * value)
	{
		___diaBreakingList_17 = value;
		Il2CppCodeGenWriteBarrier(&___diaBreakingList_17, value);
	}

	inline static int32_t get_offset_of_ballList_18() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ballList_18)); }
	inline List_1_t514686775 * get_ballList_18() const { return ___ballList_18; }
	inline List_1_t514686775 ** get_address_of_ballList_18() { return &___ballList_18; }
	inline void set_ballList_18(List_1_t514686775 * value)
	{
		___ballList_18 = value;
		Il2CppCodeGenWriteBarrier(&___ballList_18, value);
	}

	inline static int32_t get_offset_of_ballExplodeList_19() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___ballExplodeList_19)); }
	inline List_1_t514686775 * get_ballExplodeList_19() const { return ___ballExplodeList_19; }
	inline List_1_t514686775 ** get_address_of_ballExplodeList_19() { return &___ballExplodeList_19; }
	inline void set_ballExplodeList_19(List_1_t514686775 * value)
	{
		___ballExplodeList_19 = value;
		Il2CppCodeGenWriteBarrier(&___ballExplodeList_19, value);
	}

	inline static int32_t get_offset_of_smallCubeList_20() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___smallCubeList_20)); }
	inline List_1_t514686775 * get_smallCubeList_20() const { return ___smallCubeList_20; }
	inline List_1_t514686775 ** get_address_of_smallCubeList_20() { return &___smallCubeList_20; }
	inline void set_smallCubeList_20(List_1_t514686775 * value)
	{
		___smallCubeList_20 = value;
		Il2CppCodeGenWriteBarrier(&___smallCubeList_20, value);
	}

	inline static int32_t get_offset_of_smallestCubeList_21() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___smallestCubeList_21)); }
	inline List_1_t514686775 * get_smallestCubeList_21() const { return ___smallestCubeList_21; }
	inline List_1_t514686775 ** get_address_of_smallestCubeList_21() { return &___smallestCubeList_21; }
	inline void set_smallestCubeList_21(List_1_t514686775 * value)
	{
		___smallestCubeList_21 = value;
		Il2CppCodeGenWriteBarrier(&___smallestCubeList_21, value);
	}

	inline static int32_t get_offset_of_starList_22() { return static_cast<int32_t>(offsetof(SpawnerManager_t45089093, ___starList_22)); }
	inline List_1_t514686775 * get_starList_22() const { return ___starList_22; }
	inline List_1_t514686775 ** get_address_of_starList_22() { return &___starList_22; }
	inline void set_starList_22(List_1_t514686775 * value)
	{
		___starList_22 = value;
		Il2CppCodeGenWriteBarrier(&___starList_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

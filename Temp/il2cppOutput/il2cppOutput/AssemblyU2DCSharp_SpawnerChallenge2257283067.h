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
#include "AssemblyU2DCSharp_SpawnerChallengeP1256298421.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnerChallenge
struct  SpawnerChallenge_t2257283067  : public MonoBehaviour_t3012272455
{
public:
	// SpawnerChallengeP SpawnerChallenge::spawnP
	SpawnerChallengeP_t1256298421  ___spawnP_2;
	// UnityEngine.GameObject SpawnerChallenge::cubeToInstantiate
	GameObject_t4012695102 * ___cubeToInstantiate_3;
	// UnityEngine.GameObject SpawnerChallenge::cubeParticle
	GameObject_t4012695102 * ___cubeParticle_4;
	// UnityEngine.GameObject SpawnerChallenge::diamond
	GameObject_t4012695102 * ___diamond_5;
	// UnityEngine.GameObject SpawnerChallenge::diaEmissive
	GameObject_t4012695102 * ___diaEmissive_6;
	// UnityEngine.GameObject SpawnerChallenge::diaBreaking
	GameObject_t4012695102 * ___diaBreaking_7;
	// UnityEngine.GameObject SpawnerChallenge::ball
	GameObject_t4012695102 * ___ball_8;
	// UnityEngine.GameObject SpawnerChallenge::ballExplode
	GameObject_t4012695102 * ___ballExplode_9;
	// UnityEngine.GameObject SpawnerChallenge::smallCube
	GameObject_t4012695102 * ___smallCube_10;
	// UnityEngine.GameObject SpawnerChallenge::mallestCube
	GameObject_t4012695102 * ___mallestCube_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerChallenge::cubeList
	List_1_t514686775 * ___cubeList_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerChallenge::particleList
	List_1_t514686775 * ___particleList_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerChallenge::diamondList
	List_1_t514686775 * ___diamondList_14;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerChallenge::diaEmissiveList
	List_1_t514686775 * ___diaEmissiveList_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerChallenge::diaBreakingList
	List_1_t514686775 * ___diaBreakingList_16;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerChallenge::ballList
	List_1_t514686775 * ___ballList_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerChallenge::ballExplodeList
	List_1_t514686775 * ___ballExplodeList_18;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerChallenge::smallCubeList
	List_1_t514686775 * ___smallCubeList_19;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerChallenge::smallestCubeList
	List_1_t514686775 * ___smallestCubeList_20;

public:
	inline static int32_t get_offset_of_spawnP_2() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___spawnP_2)); }
	inline SpawnerChallengeP_t1256298421  get_spawnP_2() const { return ___spawnP_2; }
	inline SpawnerChallengeP_t1256298421 * get_address_of_spawnP_2() { return &___spawnP_2; }
	inline void set_spawnP_2(SpawnerChallengeP_t1256298421  value)
	{
		___spawnP_2 = value;
	}

	inline static int32_t get_offset_of_cubeToInstantiate_3() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___cubeToInstantiate_3)); }
	inline GameObject_t4012695102 * get_cubeToInstantiate_3() const { return ___cubeToInstantiate_3; }
	inline GameObject_t4012695102 ** get_address_of_cubeToInstantiate_3() { return &___cubeToInstantiate_3; }
	inline void set_cubeToInstantiate_3(GameObject_t4012695102 * value)
	{
		___cubeToInstantiate_3 = value;
		Il2CppCodeGenWriteBarrier(&___cubeToInstantiate_3, value);
	}

	inline static int32_t get_offset_of_cubeParticle_4() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___cubeParticle_4)); }
	inline GameObject_t4012695102 * get_cubeParticle_4() const { return ___cubeParticle_4; }
	inline GameObject_t4012695102 ** get_address_of_cubeParticle_4() { return &___cubeParticle_4; }
	inline void set_cubeParticle_4(GameObject_t4012695102 * value)
	{
		___cubeParticle_4 = value;
		Il2CppCodeGenWriteBarrier(&___cubeParticle_4, value);
	}

	inline static int32_t get_offset_of_diamond_5() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___diamond_5)); }
	inline GameObject_t4012695102 * get_diamond_5() const { return ___diamond_5; }
	inline GameObject_t4012695102 ** get_address_of_diamond_5() { return &___diamond_5; }
	inline void set_diamond_5(GameObject_t4012695102 * value)
	{
		___diamond_5 = value;
		Il2CppCodeGenWriteBarrier(&___diamond_5, value);
	}

	inline static int32_t get_offset_of_diaEmissive_6() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___diaEmissive_6)); }
	inline GameObject_t4012695102 * get_diaEmissive_6() const { return ___diaEmissive_6; }
	inline GameObject_t4012695102 ** get_address_of_diaEmissive_6() { return &___diaEmissive_6; }
	inline void set_diaEmissive_6(GameObject_t4012695102 * value)
	{
		___diaEmissive_6 = value;
		Il2CppCodeGenWriteBarrier(&___diaEmissive_6, value);
	}

	inline static int32_t get_offset_of_diaBreaking_7() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___diaBreaking_7)); }
	inline GameObject_t4012695102 * get_diaBreaking_7() const { return ___diaBreaking_7; }
	inline GameObject_t4012695102 ** get_address_of_diaBreaking_7() { return &___diaBreaking_7; }
	inline void set_diaBreaking_7(GameObject_t4012695102 * value)
	{
		___diaBreaking_7 = value;
		Il2CppCodeGenWriteBarrier(&___diaBreaking_7, value);
	}

	inline static int32_t get_offset_of_ball_8() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___ball_8)); }
	inline GameObject_t4012695102 * get_ball_8() const { return ___ball_8; }
	inline GameObject_t4012695102 ** get_address_of_ball_8() { return &___ball_8; }
	inline void set_ball_8(GameObject_t4012695102 * value)
	{
		___ball_8 = value;
		Il2CppCodeGenWriteBarrier(&___ball_8, value);
	}

	inline static int32_t get_offset_of_ballExplode_9() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___ballExplode_9)); }
	inline GameObject_t4012695102 * get_ballExplode_9() const { return ___ballExplode_9; }
	inline GameObject_t4012695102 ** get_address_of_ballExplode_9() { return &___ballExplode_9; }
	inline void set_ballExplode_9(GameObject_t4012695102 * value)
	{
		___ballExplode_9 = value;
		Il2CppCodeGenWriteBarrier(&___ballExplode_9, value);
	}

	inline static int32_t get_offset_of_smallCube_10() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___smallCube_10)); }
	inline GameObject_t4012695102 * get_smallCube_10() const { return ___smallCube_10; }
	inline GameObject_t4012695102 ** get_address_of_smallCube_10() { return &___smallCube_10; }
	inline void set_smallCube_10(GameObject_t4012695102 * value)
	{
		___smallCube_10 = value;
		Il2CppCodeGenWriteBarrier(&___smallCube_10, value);
	}

	inline static int32_t get_offset_of_mallestCube_11() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___mallestCube_11)); }
	inline GameObject_t4012695102 * get_mallestCube_11() const { return ___mallestCube_11; }
	inline GameObject_t4012695102 ** get_address_of_mallestCube_11() { return &___mallestCube_11; }
	inline void set_mallestCube_11(GameObject_t4012695102 * value)
	{
		___mallestCube_11 = value;
		Il2CppCodeGenWriteBarrier(&___mallestCube_11, value);
	}

	inline static int32_t get_offset_of_cubeList_12() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___cubeList_12)); }
	inline List_1_t514686775 * get_cubeList_12() const { return ___cubeList_12; }
	inline List_1_t514686775 ** get_address_of_cubeList_12() { return &___cubeList_12; }
	inline void set_cubeList_12(List_1_t514686775 * value)
	{
		___cubeList_12 = value;
		Il2CppCodeGenWriteBarrier(&___cubeList_12, value);
	}

	inline static int32_t get_offset_of_particleList_13() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___particleList_13)); }
	inline List_1_t514686775 * get_particleList_13() const { return ___particleList_13; }
	inline List_1_t514686775 ** get_address_of_particleList_13() { return &___particleList_13; }
	inline void set_particleList_13(List_1_t514686775 * value)
	{
		___particleList_13 = value;
		Il2CppCodeGenWriteBarrier(&___particleList_13, value);
	}

	inline static int32_t get_offset_of_diamondList_14() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___diamondList_14)); }
	inline List_1_t514686775 * get_diamondList_14() const { return ___diamondList_14; }
	inline List_1_t514686775 ** get_address_of_diamondList_14() { return &___diamondList_14; }
	inline void set_diamondList_14(List_1_t514686775 * value)
	{
		___diamondList_14 = value;
		Il2CppCodeGenWriteBarrier(&___diamondList_14, value);
	}

	inline static int32_t get_offset_of_diaEmissiveList_15() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___diaEmissiveList_15)); }
	inline List_1_t514686775 * get_diaEmissiveList_15() const { return ___diaEmissiveList_15; }
	inline List_1_t514686775 ** get_address_of_diaEmissiveList_15() { return &___diaEmissiveList_15; }
	inline void set_diaEmissiveList_15(List_1_t514686775 * value)
	{
		___diaEmissiveList_15 = value;
		Il2CppCodeGenWriteBarrier(&___diaEmissiveList_15, value);
	}

	inline static int32_t get_offset_of_diaBreakingList_16() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___diaBreakingList_16)); }
	inline List_1_t514686775 * get_diaBreakingList_16() const { return ___diaBreakingList_16; }
	inline List_1_t514686775 ** get_address_of_diaBreakingList_16() { return &___diaBreakingList_16; }
	inline void set_diaBreakingList_16(List_1_t514686775 * value)
	{
		___diaBreakingList_16 = value;
		Il2CppCodeGenWriteBarrier(&___diaBreakingList_16, value);
	}

	inline static int32_t get_offset_of_ballList_17() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___ballList_17)); }
	inline List_1_t514686775 * get_ballList_17() const { return ___ballList_17; }
	inline List_1_t514686775 ** get_address_of_ballList_17() { return &___ballList_17; }
	inline void set_ballList_17(List_1_t514686775 * value)
	{
		___ballList_17 = value;
		Il2CppCodeGenWriteBarrier(&___ballList_17, value);
	}

	inline static int32_t get_offset_of_ballExplodeList_18() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___ballExplodeList_18)); }
	inline List_1_t514686775 * get_ballExplodeList_18() const { return ___ballExplodeList_18; }
	inline List_1_t514686775 ** get_address_of_ballExplodeList_18() { return &___ballExplodeList_18; }
	inline void set_ballExplodeList_18(List_1_t514686775 * value)
	{
		___ballExplodeList_18 = value;
		Il2CppCodeGenWriteBarrier(&___ballExplodeList_18, value);
	}

	inline static int32_t get_offset_of_smallCubeList_19() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___smallCubeList_19)); }
	inline List_1_t514686775 * get_smallCubeList_19() const { return ___smallCubeList_19; }
	inline List_1_t514686775 ** get_address_of_smallCubeList_19() { return &___smallCubeList_19; }
	inline void set_smallCubeList_19(List_1_t514686775 * value)
	{
		___smallCubeList_19 = value;
		Il2CppCodeGenWriteBarrier(&___smallCubeList_19, value);
	}

	inline static int32_t get_offset_of_smallestCubeList_20() { return static_cast<int32_t>(offsetof(SpawnerChallenge_t2257283067, ___smallestCubeList_20)); }
	inline List_1_t514686775 * get_smallestCubeList_20() const { return ___smallestCubeList_20; }
	inline List_1_t514686775 ** get_address_of_smallestCubeList_20() { return &___smallestCubeList_20; }
	inline void set_smallestCubeList_20(List_1_t514686775 * value)
	{
		___smallestCubeList_20 = value;
		Il2CppCodeGenWriteBarrier(&___smallestCubeList_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

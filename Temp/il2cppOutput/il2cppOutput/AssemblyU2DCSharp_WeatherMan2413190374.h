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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WeatherMan
struct  WeatherMan_t2413190374  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject WeatherMan::rainToInstantiate
	GameObject_t4012695102 * ___rainToInstantiate_2;
	// UnityEngine.GameObject WeatherMan::snowToInstantiate
	GameObject_t4012695102 * ___snowToInstantiate_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WeatherMan::rainList
	List_1_t514686775 * ___rainList_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WeatherMan::snowList
	List_1_t514686775 * ___snowList_5;
	// System.Int32 WeatherMan::amount
	int32_t ___amount_6;

public:
	inline static int32_t get_offset_of_rainToInstantiate_2() { return static_cast<int32_t>(offsetof(WeatherMan_t2413190374, ___rainToInstantiate_2)); }
	inline GameObject_t4012695102 * get_rainToInstantiate_2() const { return ___rainToInstantiate_2; }
	inline GameObject_t4012695102 ** get_address_of_rainToInstantiate_2() { return &___rainToInstantiate_2; }
	inline void set_rainToInstantiate_2(GameObject_t4012695102 * value)
	{
		___rainToInstantiate_2 = value;
		Il2CppCodeGenWriteBarrier(&___rainToInstantiate_2, value);
	}

	inline static int32_t get_offset_of_snowToInstantiate_3() { return static_cast<int32_t>(offsetof(WeatherMan_t2413190374, ___snowToInstantiate_3)); }
	inline GameObject_t4012695102 * get_snowToInstantiate_3() const { return ___snowToInstantiate_3; }
	inline GameObject_t4012695102 ** get_address_of_snowToInstantiate_3() { return &___snowToInstantiate_3; }
	inline void set_snowToInstantiate_3(GameObject_t4012695102 * value)
	{
		___snowToInstantiate_3 = value;
		Il2CppCodeGenWriteBarrier(&___snowToInstantiate_3, value);
	}

	inline static int32_t get_offset_of_rainList_4() { return static_cast<int32_t>(offsetof(WeatherMan_t2413190374, ___rainList_4)); }
	inline List_1_t514686775 * get_rainList_4() const { return ___rainList_4; }
	inline List_1_t514686775 ** get_address_of_rainList_4() { return &___rainList_4; }
	inline void set_rainList_4(List_1_t514686775 * value)
	{
		___rainList_4 = value;
		Il2CppCodeGenWriteBarrier(&___rainList_4, value);
	}

	inline static int32_t get_offset_of_snowList_5() { return static_cast<int32_t>(offsetof(WeatherMan_t2413190374, ___snowList_5)); }
	inline List_1_t514686775 * get_snowList_5() const { return ___snowList_5; }
	inline List_1_t514686775 ** get_address_of_snowList_5() { return &___snowList_5; }
	inline void set_snowList_5(List_1_t514686775 * value)
	{
		___snowList_5 = value;
		Il2CppCodeGenWriteBarrier(&___snowList_5, value);
	}

	inline static int32_t get_offset_of_amount_6() { return static_cast<int32_t>(offsetof(WeatherMan_t2413190374, ___amount_6)); }
	inline int32_t get_amount_6() const { return ___amount_6; }
	inline int32_t* get_address_of_amount_6() { return &___amount_6; }
	inline void set_amount_6(int32_t value)
	{
		___amount_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

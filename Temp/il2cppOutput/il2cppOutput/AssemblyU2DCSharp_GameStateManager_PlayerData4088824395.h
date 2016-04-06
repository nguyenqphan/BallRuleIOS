#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameStateManager/PlayerData
struct  PlayerData_t4088824395  : public Il2CppObject
{
public:
	// System.Int32 GameStateManager/PlayerData::playerScore
	int32_t ___playerScore_0;
	// System.Int32 GameStateManager/PlayerData::challengeScore
	int32_t ___challengeScore_1;

public:
	inline static int32_t get_offset_of_playerScore_0() { return static_cast<int32_t>(offsetof(PlayerData_t4088824395, ___playerScore_0)); }
	inline int32_t get_playerScore_0() const { return ___playerScore_0; }
	inline int32_t* get_address_of_playerScore_0() { return &___playerScore_0; }
	inline void set_playerScore_0(int32_t value)
	{
		___playerScore_0 = value;
	}

	inline static int32_t get_offset_of_challengeScore_1() { return static_cast<int32_t>(offsetof(PlayerData_t4088824395, ___challengeScore_1)); }
	inline int32_t get_challengeScore_1() const { return ___challengeScore_1; }
	inline int32_t* get_address_of_challengeScore_1() { return &___challengeScore_1; }
	inline void set_challengeScore_1(int32_t value)
	{
		___challengeScore_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

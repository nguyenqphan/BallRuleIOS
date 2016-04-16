#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ShowPanels
struct ShowPanels_t2673010796;
// StartOptions
struct StartOptions_t3075365884;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pause
struct  Pause_t76887510  : public MonoBehaviour_t3012272455
{
public:
	// ShowPanels Pause::showPanels
	ShowPanels_t2673010796 * ___showPanels_2;
	// System.Boolean Pause::isPaused
	bool ___isPaused_3;
	// StartOptions Pause::startScript
	StartOptions_t3075365884 * ___startScript_4;

public:
	inline static int32_t get_offset_of_showPanels_2() { return static_cast<int32_t>(offsetof(Pause_t76887510, ___showPanels_2)); }
	inline ShowPanels_t2673010796 * get_showPanels_2() const { return ___showPanels_2; }
	inline ShowPanels_t2673010796 ** get_address_of_showPanels_2() { return &___showPanels_2; }
	inline void set_showPanels_2(ShowPanels_t2673010796 * value)
	{
		___showPanels_2 = value;
		Il2CppCodeGenWriteBarrier(&___showPanels_2, value);
	}

	inline static int32_t get_offset_of_isPaused_3() { return static_cast<int32_t>(offsetof(Pause_t76887510, ___isPaused_3)); }
	inline bool get_isPaused_3() const { return ___isPaused_3; }
	inline bool* get_address_of_isPaused_3() { return &___isPaused_3; }
	inline void set_isPaused_3(bool value)
	{
		___isPaused_3 = value;
	}

	inline static int32_t get_offset_of_startScript_4() { return static_cast<int32_t>(offsetof(Pause_t76887510, ___startScript_4)); }
	inline StartOptions_t3075365884 * get_startScript_4() const { return ___startScript_4; }
	inline StartOptions_t3075365884 ** get_address_of_startScript_4() { return &___startScript_4; }
	inline void set_startScript_4(StartOptions_t3075365884 * value)
	{
		___startScript_4 = value;
		Il2CppCodeGenWriteBarrier(&___startScript_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

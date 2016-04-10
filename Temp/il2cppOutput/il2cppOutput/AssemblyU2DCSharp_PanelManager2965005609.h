#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanelManager
struct  PanelManager_t2965005609  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Animator PanelManager::initiallyOpen
	Animator_t792326996 * ___initiallyOpen_4;
	// System.Int32 PanelManager::m_OpenParameterId
	int32_t ___m_OpenParameterId_5;
	// UnityEngine.Animator PanelManager::m_Open
	Animator_t792326996 * ___m_Open_6;
	// UnityEngine.GameObject PanelManager::m_PreviouslySelected
	GameObject_t4012695102 * ___m_PreviouslySelected_7;

public:
	inline static int32_t get_offset_of_initiallyOpen_4() { return static_cast<int32_t>(offsetof(PanelManager_t2965005609, ___initiallyOpen_4)); }
	inline Animator_t792326996 * get_initiallyOpen_4() const { return ___initiallyOpen_4; }
	inline Animator_t792326996 ** get_address_of_initiallyOpen_4() { return &___initiallyOpen_4; }
	inline void set_initiallyOpen_4(Animator_t792326996 * value)
	{
		___initiallyOpen_4 = value;
		Il2CppCodeGenWriteBarrier(&___initiallyOpen_4, value);
	}

	inline static int32_t get_offset_of_m_OpenParameterId_5() { return static_cast<int32_t>(offsetof(PanelManager_t2965005609, ___m_OpenParameterId_5)); }
	inline int32_t get_m_OpenParameterId_5() const { return ___m_OpenParameterId_5; }
	inline int32_t* get_address_of_m_OpenParameterId_5() { return &___m_OpenParameterId_5; }
	inline void set_m_OpenParameterId_5(int32_t value)
	{
		___m_OpenParameterId_5 = value;
	}

	inline static int32_t get_offset_of_m_Open_6() { return static_cast<int32_t>(offsetof(PanelManager_t2965005609, ___m_Open_6)); }
	inline Animator_t792326996 * get_m_Open_6() const { return ___m_Open_6; }
	inline Animator_t792326996 ** get_address_of_m_Open_6() { return &___m_Open_6; }
	inline void set_m_Open_6(Animator_t792326996 * value)
	{
		___m_Open_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Open_6, value);
	}

	inline static int32_t get_offset_of_m_PreviouslySelected_7() { return static_cast<int32_t>(offsetof(PanelManager_t2965005609, ___m_PreviouslySelected_7)); }
	inline GameObject_t4012695102 * get_m_PreviouslySelected_7() const { return ___m_PreviouslySelected_7; }
	inline GameObject_t4012695102 ** get_address_of_m_PreviouslySelected_7() { return &___m_PreviouslySelected_7; }
	inline void set_m_PreviouslySelected_7(GameObject_t4012695102 * value)
	{
		___m_PreviouslySelected_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_PreviouslySelected_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

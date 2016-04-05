﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// EventManager
struct EventManager_t1907836883;
// EventManager/EventAction
struct EventAction_t1244047696;
// UnityEngine.Collision
struct Collision_t1119538015;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_EventManager_EventAction1244047696.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"

// System.Void EventManager::.ctor()
extern "C"  void EventManager__ctor_m3403204648 (EventManager_t1907836883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::add_OnCamMove(EventManager/EventAction)
extern "C"  void EventManager_add_OnCamMove_m1138289717 (Object_t * __this /* static, unused */, EventAction_t1244047696 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::remove_OnCamMove(EventManager/EventAction)
extern "C"  void EventManager_remove_OnCamMove_m3009570734 (Object_t * __this /* static, unused */, EventAction_t1244047696 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::add_OnPlayerEnter(EventManager/EventAction)
extern "C"  void EventManager_add_OnPlayerEnter_m1897001388 (Object_t * __this /* static, unused */, EventAction_t1244047696 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::remove_OnPlayerEnter(EventManager/EventAction)
extern "C"  void EventManager_remove_OnPlayerEnter_m3222210725 (Object_t * __this /* static, unused */, EventAction_t1244047696 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::Awake()
extern "C"  void EventManager_Awake_m3640809867 (EventManager_t1907836883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void EventManager_OnCollisionEnter_m1666640374 (EventManager_t1907836883 * __this, Collision_t1119538015 * ___collider, const MethodInfo* method) IL2CPP_METHOD_ATTR;

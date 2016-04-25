#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Deactivator/EffectAction
struct EffectAction_t3544139591;
// System.Object
struct Il2CppObject;
// UnityEngine.Transform
struct Transform_t284553113;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Deactivator/EffectAction::.ctor(System.Object,System.IntPtr)
extern "C"  void EffectAction__ctor_m709885321 (EffectAction_t3544139591 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Deactivator/EffectAction::Invoke(UnityEngine.Transform)
extern "C"  void EffectAction_Invoke_m1181134842 (EffectAction_t3544139591 * __this, Transform_t284553113 * ___deactivateTrans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_EffectAction_t3544139591(Il2CppObject* delegate, Transform_t284553113 * ___deactivateTrans);
// System.IAsyncResult Deactivator/EffectAction::BeginInvoke(UnityEngine.Transform,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EffectAction_BeginInvoke_m1367151657 (EffectAction_t3544139591 * __this, Transform_t284553113 * ___deactivateTrans, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Deactivator/EffectAction::EndInvoke(System.IAsyncResult)
extern "C"  void EffectAction_EndInvoke_m759798809 (EffectAction_t3544139591 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

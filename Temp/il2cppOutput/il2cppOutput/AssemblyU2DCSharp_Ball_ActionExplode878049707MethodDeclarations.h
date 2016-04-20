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

// Ball/ActionExplode
struct ActionExplode_t878049707;
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

// System.Void Ball/ActionExplode::.ctor(System.Object,System.IntPtr)
extern "C"  void ActionExplode__ctor_m3611125474 (ActionExplode_t878049707 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball/ActionExplode::Invoke(UnityEngine.Transform)
extern "C"  void ActionExplode_Invoke_m728830721 (ActionExplode_t878049707 * __this, Transform_t284553113 * ___explodeTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ActionExplode_t878049707(Il2CppObject* delegate, Transform_t284553113 * ___explodeTransform);
// System.IAsyncResult Ball/ActionExplode::BeginInvoke(UnityEngine.Transform,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ActionExplode_BeginInvoke_m2715832624 (ActionExplode_t878049707 * __this, Transform_t284553113 * ___explodeTransform, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball/ActionExplode::EndInvoke(System.IAsyncResult)
extern "C"  void ActionExplode_EndInvoke_m3918240242 (ActionExplode_t878049707 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Diamond/ActionBreaking
struct ActionBreaking_t3455992569;
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

// System.Void Diamond/ActionBreaking::.ctor(System.Object,System.IntPtr)
extern "C"  void ActionBreaking__ctor_m1932546523 (ActionBreaking_t3455992569 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Diamond/ActionBreaking::Invoke(UnityEngine.Transform)
extern "C"  void ActionBreaking_Invoke_m2066968680 (ActionBreaking_t3455992569 * __this, Transform_t284553113 * ___diaTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ActionBreaking_t3455992569(Il2CppObject* delegate, Transform_t284553113 * ___diaTransform);
// System.IAsyncResult Diamond/ActionBreaking::BeginInvoke(UnityEngine.Transform,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ActionBreaking_BeginInvoke_m4230749591 (ActionBreaking_t3455992569 * __this, Transform_t284553113 * ___diaTransform, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Diamond/ActionBreaking::EndInvoke(System.IAsyncResult)
extern "C"  void ActionBreaking_EndInvoke_m2450844011 (ActionBreaking_t3455992569 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

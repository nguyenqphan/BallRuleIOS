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

// EventManager/EventAction
struct EventAction_t1244047696;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void EventManager/EventAction::.ctor(System.Object,System.IntPtr)
extern "C"  void EventAction__ctor_m2473161659 (EventAction_t1244047696 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager/EventAction::Invoke()
extern "C"  void EventAction_Invoke_m2457981909 (EventAction_t1244047696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_EventAction_t1244047696(Il2CppObject* delegate);
// System.IAsyncResult EventManager/EventAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventAction_BeginInvoke_m1333245838 (EventAction_t1244047696 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager/EventAction::EndInvoke(System.IAsyncResult)
extern "C"  void EventAction_EndInvoke_m686422859 (EventAction_t1244047696 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

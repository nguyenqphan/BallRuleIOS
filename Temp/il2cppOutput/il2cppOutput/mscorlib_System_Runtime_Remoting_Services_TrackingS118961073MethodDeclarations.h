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

// System.Object
struct Object_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t3894317828;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Runtime_Remoting_ObjRef3894317828.h"

// System.Void System.Runtime.Remoting.Services.TrackingServices::.cctor()
extern "C"  void TrackingServices__cctor_m1041791976 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyMarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern "C"  void TrackingServices_NotifyMarshaledObject_m2408179062 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t3894317828 * ___or, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyUnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern "C"  void TrackingServices_NotifyUnmarshaledObject_m1221428029 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t3894317828 * ___or, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyDisconnectedObject(System.Object)
extern "C"  void TrackingServices_NotifyDisconnectedObject_m3316648914 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;

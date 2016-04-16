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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "mscorlib_System_String968488902.h"

// System.Int32 UnityEngine.LayerMask::get_value()
extern "C"  int32_t LayerMask_get_value_m1804554274 (LayerMask_t1862190090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LayerMask::set_value(System.Int32)
extern "C"  void LayerMask_set_value_m3553706239 (LayerMask_t1862190090 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
extern "C"  int32_t LayerMask_NameToLayer_m170005213 (Il2CppObject * __this /* static, unused */, String_t* ___layerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C"  int32_t LayerMask_op_Implicit_m1595580047 (Il2CppObject * __this /* static, unused */, LayerMask_t1862190090  ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C"  LayerMask_t1862190090  LayerMask_op_Implicit_m2608572187 (Il2CppObject * __this /* static, unused */, int32_t ___intVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct LayerMask_t1862190090;
struct LayerMask_t1862190090_marshaled_pinvoke;

extern "C" void LayerMask_t1862190090_marshal_pinvoke(const LayerMask_t1862190090& unmarshaled, LayerMask_t1862190090_marshaled_pinvoke& marshaled);
extern "C" void LayerMask_t1862190090_marshal_pinvoke_back(const LayerMask_t1862190090_marshaled_pinvoke& marshaled, LayerMask_t1862190090& unmarshaled);
extern "C" void LayerMask_t1862190090_marshal_pinvoke_cleanup(LayerMask_t1862190090_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct LayerMask_t1862190090;
struct LayerMask_t1862190090_marshaled_com;

extern "C" void LayerMask_t1862190090_marshal_com(const LayerMask_t1862190090& unmarshaled, LayerMask_t1862190090_marshaled_com& marshaled);
extern "C" void LayerMask_t1862190090_marshal_com_back(const LayerMask_t1862190090_marshaled_com& marshaled, LayerMask_t1862190090& unmarshaled);
extern "C" void LayerMask_t1862190090_marshal_com_cleanup(LayerMask_t1862190090_marshaled_com& marshaled);

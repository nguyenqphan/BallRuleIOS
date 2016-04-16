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

// SpawnerManager
struct SpawnerManager_t45089093;
// UnityEngine.Transform
struct Transform_t284553113;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void SpawnerManager::.ctor()
extern "C"  void SpawnerManager__ctor_m2325899510 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::OnEnable()
extern "C"  void SpawnerManager_OnEnable_m2236494544 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::OnDisable()
extern "C"  void SpawnerManager_OnDisable_m1052791389 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::Awake()
extern "C"  void SpawnerManager_Awake_m2563504729 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::Start()
extern "C"  void SpawnerManager_Start_m1273037302 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::PlayCubeEffect(UnityEngine.Transform)
extern "C"  void SpawnerManager_PlayCubeEffect_m829226229 (SpawnerManager_t45089093 * __this, Transform_t284553113 * ___deactivatorTrans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnerManager::InstantiateEffect(UnityEngine.Transform)
extern "C"  Il2CppObject * SpawnerManager_InstantiateEffect_m1083060470 (SpawnerManager_t45089093 * __this, Transform_t284553113 * ___deactivatorTrans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::PlayerDiamondEmissive(UnityEngine.Transform)
extern "C"  void SpawnerManager_PlayerDiamondEmissive_m3855136191 (SpawnerManager_t45089093 * __this, Transform_t284553113 * ___diaTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnerManager::InstantiateDiamondEmissive(UnityEngine.Transform)
extern "C"  Il2CppObject * SpawnerManager_InstantiateDiamondEmissive_m4250805318 (SpawnerManager_t45089093 * __this, Transform_t284553113 * ___diaTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::PlayExplodeBall(UnityEngine.Transform)
extern "C"  void SpawnerManager_PlayExplodeBall_m3670886717 (SpawnerManager_t45089093 * __this, Transform_t284553113 * ___explodeTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnerManager::InstantiateBallExplode(UnityEngine.Transform)
extern "C"  Il2CppObject * SpawnerManager_InstantiateBallExplode_m1326896847 (SpawnerManager_t45089093 * __this, Transform_t284553113 * ___explodeTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::PlayDiamondBreaking(UnityEngine.Transform)
extern "C"  void SpawnerManager_PlayDiamondBreaking_m3445569894 (SpawnerManager_t45089093 * __this, Transform_t284553113 * ___diaTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnerManager::InstantiateDiamondBreaking(UnityEngine.Transform)
extern "C"  Il2CppObject * SpawnerManager_InstantiateDiamondBreaking_m973684378 (SpawnerManager_t45089093 * __this, Transform_t284553113 * ___diaTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::StartSpawnCube()
extern "C"  void SpawnerManager_StartSpawnCube_m4152759772 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SpawnerManager::targetPosition()
extern "C"  Vector3_t3525329789  SpawnerManager_targetPosition_m75385346 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SpawnerManager::diamondPos()
extern "C"  Vector3_t3525329789  SpawnerManager_diamondPos_m1260455560 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SpawnerManager::diamondPos2()
extern "C"  Vector3_t3525329789  SpawnerManager_diamondPos2_m419426316 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SpawnerManager::diamondPos3()
extern "C"  Vector3_t3525329789  SpawnerManager_diamondPos3_m419427277 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SpawnerManager::diamondPos4()
extern "C"  Vector3_t3525329789  SpawnerManager_diamondPos4_m419428238 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SpawnerManager::diamondPos5()
extern "C"  Vector3_t3525329789  SpawnerManager_diamondPos5_m419429199 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SpawnerManager::diamondPos6()
extern "C"  Vector3_t3525329789  SpawnerManager_diamondPos6_m419430160 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SpawnerManager::ballPos()
extern "C"  Vector3_t3525329789  SpawnerManager_ballPos_m1551588303 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SpawnerManager::camPos()
extern "C"  Vector3_t3525329789  SpawnerManager_camPos_m1519462509 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SpawnerManager::randomFixedY()
extern "C"  int32_t SpawnerManager_randomFixedY_m2696925700 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SpawnerManager::RandomSmallestNum()
extern "C"  int32_t SpawnerManager_RandomSmallestNum_m3076581098 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SpawnerManager::randonDegree()
extern "C"  float SpawnerManager_randonDegree_m2571470058 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SpawnerManager::RandomIncrease()
extern "C"  int32_t SpawnerManager_RandomIncrease_m747309633 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SpawnerManager::RandomSpawnNum()
extern "C"  int32_t SpawnerManager_RandomSpawnNum_m654313418 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SpawnerManager::RandomCubeNum()
extern "C"  int32_t SpawnerManager_RandomCubeNum_m3499922580 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnerManager::InstantiateCube()
extern "C"  Il2CppObject * SpawnerManager_InstantiateCube_m2329272203 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnerManager::InstantiateDiamond()
extern "C"  Il2CppObject * SpawnerManager_InstantiateDiamond_m19475872 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnerManager::InstantiateBall()
extern "C"  Il2CppObject * SpawnerManager_InstantiateBall_m2282477269 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnerManager::InstantiateObstacle()
extern "C"  Il2CppObject * SpawnerManager_InstantiateObstacle_m1022086373 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::FindObstacleBall()
extern "C"  void SpawnerManager_FindObstacleBall_m2138138069 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::ChangeGravity()
extern "C"  void SpawnerManager_ChangeGravity_m1760842770 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

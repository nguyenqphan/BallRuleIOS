#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer
struct Renderer_t1092684080;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlashingP
struct  FlashingP_t857341054 
{
public:
	// System.Boolean FlashingP::isFlashing
	bool ___isFlashing_0;
	// System.Single FlashingP::timeFlashing
	float ___timeFlashing_1;
	// System.Single FlashingP::speedFlashing
	float ___speedFlashing_2;
	// System.Int32 FlashingP::countFlashing
	int32_t ___countFlashing_3;
	// UnityEngine.Renderer FlashingP::mesh
	Renderer_t1092684080 * ___mesh_4;

public:
	inline static int32_t get_offset_of_isFlashing_0() { return static_cast<int32_t>(offsetof(FlashingP_t857341054, ___isFlashing_0)); }
	inline bool get_isFlashing_0() const { return ___isFlashing_0; }
	inline bool* get_address_of_isFlashing_0() { return &___isFlashing_0; }
	inline void set_isFlashing_0(bool value)
	{
		___isFlashing_0 = value;
	}

	inline static int32_t get_offset_of_timeFlashing_1() { return static_cast<int32_t>(offsetof(FlashingP_t857341054, ___timeFlashing_1)); }
	inline float get_timeFlashing_1() const { return ___timeFlashing_1; }
	inline float* get_address_of_timeFlashing_1() { return &___timeFlashing_1; }
	inline void set_timeFlashing_1(float value)
	{
		___timeFlashing_1 = value;
	}

	inline static int32_t get_offset_of_speedFlashing_2() { return static_cast<int32_t>(offsetof(FlashingP_t857341054, ___speedFlashing_2)); }
	inline float get_speedFlashing_2() const { return ___speedFlashing_2; }
	inline float* get_address_of_speedFlashing_2() { return &___speedFlashing_2; }
	inline void set_speedFlashing_2(float value)
	{
		___speedFlashing_2 = value;
	}

	inline static int32_t get_offset_of_countFlashing_3() { return static_cast<int32_t>(offsetof(FlashingP_t857341054, ___countFlashing_3)); }
	inline int32_t get_countFlashing_3() const { return ___countFlashing_3; }
	inline int32_t* get_address_of_countFlashing_3() { return &___countFlashing_3; }
	inline void set_countFlashing_3(int32_t value)
	{
		___countFlashing_3 = value;
	}

	inline static int32_t get_offset_of_mesh_4() { return static_cast<int32_t>(offsetof(FlashingP_t857341054, ___mesh_4)); }
	inline Renderer_t1092684080 * get_mesh_4() const { return ___mesh_4; }
	inline Renderer_t1092684080 ** get_address_of_mesh_4() { return &___mesh_4; }
	inline void set_mesh_4(Renderer_t1092684080 * value)
	{
		___mesh_4 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

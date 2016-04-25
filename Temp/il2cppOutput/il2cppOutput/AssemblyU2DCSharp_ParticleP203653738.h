#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParticleP
struct  ParticleP_t203653738 
{
public:
	// System.Single ParticleP::startTime
	float ___startTime_0;
	// System.Single ParticleP::speedTime
	float ___speedTime_1;

public:
	inline static int32_t get_offset_of_startTime_0() { return static_cast<int32_t>(offsetof(ParticleP_t203653738, ___startTime_0)); }
	inline float get_startTime_0() const { return ___startTime_0; }
	inline float* get_address_of_startTime_0() { return &___startTime_0; }
	inline void set_startTime_0(float value)
	{
		___startTime_0 = value;
	}

	inline static int32_t get_offset_of_speedTime_1() { return static_cast<int32_t>(offsetof(ParticleP_t203653738, ___speedTime_1)); }
	inline float get_speedTime_1() const { return ___speedTime_1; }
	inline float* get_address_of_speedTime_1() { return &___speedTime_1; }
	inline void set_speedTime_1(float value)
	{
		___speedTime_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: ParticleP
struct ParticleP_t203653738_marshaled_pinvoke
{
	float ___startTime_0;
	float ___speedTime_1;
};
// Native definition for marshalling of: ParticleP
struct ParticleP_t203653738_marshaled_com
{
	float ___startTime_0;
	float ___speedTime_1;
};

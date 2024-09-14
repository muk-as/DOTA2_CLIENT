#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class ParticleFloatBiasType_t : std::uint32_t
    {
        PF_BIAS_TYPE_INVALID = 0xffffffff,
        PF_BIAS_TYPE_STANDARD = 0x0,
        PF_BIAS_TYPE_GAIN = 0x1,
        PF_BIAS_TYPE_EXPONENTIAL = 0x2,
        PF_BIAS_TYPE_COUNT = 0x3,
    };
};

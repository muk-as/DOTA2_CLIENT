#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class ParticleFloatRandomMode_t : std::uint32_t
    {
        PF_RANDOM_MODE_INVALID = 0xffffffff,
        PF_RANDOM_MODE_CONSTANT = 0x0,
        PF_RANDOM_MODE_VARYING = 0x1,
        PF_RANDOM_MODE_COUNT = 0x2,
    };
};

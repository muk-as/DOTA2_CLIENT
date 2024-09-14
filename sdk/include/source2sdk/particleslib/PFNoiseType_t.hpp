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
    enum class PFNoiseType_t : std::uint32_t
    {
        PF_NOISE_TYPE_PERLIN = 0x0,
        PF_NOISE_TYPE_SIMPLEX = 0x1,
        PF_NOISE_TYPE_WORLEY = 0x2,
        PF_NOISE_TYPE_CURL = 0x3,
    };
};

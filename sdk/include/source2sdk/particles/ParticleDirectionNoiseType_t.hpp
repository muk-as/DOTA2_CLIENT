#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class ParticleDirectionNoiseType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Perlin"
        PARTICLE_DIR_NOISE_PERLIN = 0x0,
        // MPropertyFriendlyName "Curl"
        PARTICLE_DIR_NOISE_CURL = 0x1,
        // MPropertyFriendlyName "Worley"
        PARTICLE_DIR_NOISE_WORLEY_BASIC = 0x2,
    };
};

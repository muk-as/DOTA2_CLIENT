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
    enum class ParticleFalloffFunction_t : std::uint32_t
    {
        // MPropertyFriendlyName "Constant - No Falloff"
        PARTICLE_FALLOFF_CONSTANT = 0x0,
        // MPropertyFriendlyName "Linear Falloff"
        PARTICLE_FALLOFF_LINEAR = 0x1,
        // MPropertyFriendlyName "Exponential Falloff"
        PARTICLE_FALLOFF_EXPONENTIAL = 0x2,
    };
};

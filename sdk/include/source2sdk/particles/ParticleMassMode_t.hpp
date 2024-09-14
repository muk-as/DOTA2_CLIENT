#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class ParticleMassMode_t : std::uint32_t
    {
        // MPropertyFriendlyName "Radius cubed"
        PARTICLE_MASSMODE_RADIUS_CUBED = 0x0,
        // MPropertyFriendlyName "Radius squared"
        PARTICLE_MASSMODE_RADIUS_SQUARED = 0x2,
    };
};

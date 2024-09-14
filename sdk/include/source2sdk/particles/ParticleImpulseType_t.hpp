#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class ParticleImpulseType_t : std::uint32_t
    {
        // MPropertyFriendlyName "None"
        IMPULSE_TYPE_NONE = 0x0,
        // MPropertyFriendlyName "Generic"
        IMPULSE_TYPE_GENERIC = 0x1,
        // MPropertyFriendlyName "Rope"
        IMPULSE_TYPE_ROPE = 0x2,
        // MPropertyFriendlyName "Explosion"
        IMPULSE_TYPE_EXPLOSION = 0x4,
        // MPropertyFriendlyName "Underwater Explosion"
        IMPULSE_TYPE_EXPLOSION_UNDERWATER = 0x8,
        // MPropertyFriendlyName "Particle System"
        IMPULSE_TYPE_PARTICLE_SYSTEM = 0x10,
    };
};

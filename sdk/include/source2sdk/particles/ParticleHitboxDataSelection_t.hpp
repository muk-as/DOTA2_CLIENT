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
    enum class ParticleHitboxDataSelection_t : std::uint32_t
    {
        // MPropertyFriendlyName "Average Hitbox Speed"
        PARTICLE_HITBOX_AVERAGE_SPEED = 0x0,
        // MPropertyFriendlyName "Hitbox Count"
        PARTICLE_HITBOX_COUNT = 0x1,
    };
};

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
    enum class ParticleOrientationSetMode_t : std::uint32_t
    {
        // MPropertyFriendlyName "Set From Velocity"
        PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0x0,
        // MPropertyFriendlyName "Set From Rotations"
        PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 0x1,
    };
};

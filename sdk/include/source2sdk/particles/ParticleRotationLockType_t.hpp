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
    enum class ParticleRotationLockType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Don't Set"
        PARTICLE_ROTATION_LOCK_NONE = 0x0,
        // MPropertyFriendlyName "Set Rotations"
        PARTICLE_ROTATION_LOCK_ROTATIONS = 0x1,
        // MPropertyFriendlyName "Set Normal"
        PARTICLE_ROTATION_LOCK_NORMAL = 0x2,
    };
};

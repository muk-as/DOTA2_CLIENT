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
    enum class ParticleOrientationChoiceList_t : std::uint32_t
    {
        // MPropertyFriendlyName "Screen Align"
        PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0x0,
        // MPropertyFriendlyName "Screen-Z Align"
        PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 0x1,
        // MPropertyFriendlyName "World-Z Align"
        PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 0x2,
        // MPropertyFriendlyName "Particle Normal Align"
        PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 0x3,
        // MPropertyFriendlyName "Screen & Particle Normal Align"
        PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 0x4,
        // MPropertyFriendlyName "Full 3-Axis Rotation"
        PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 0x5,
    };
};

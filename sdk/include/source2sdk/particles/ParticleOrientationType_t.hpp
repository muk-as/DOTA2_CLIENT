#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x4
        enum class ParticleOrientationType_t : std::uint32_t
        {
            // MPropertyFriendlyName "None"
            PARTICLE_ORIENTATION_NONE = 0x0,
            // MPropertyFriendlyName "From Velocity"
            PARTICLE_ORIENTATION_VELOCITY = 0x1,
            // MPropertyFriendlyName "From Normal"
            PARTICLE_ORIENTATION_NORMAL = 0x2,
            // MPropertyFriendlyName "From Rotations"
            PARTICLE_ORIENTATION_ROTATION = 0x4,
        };
    };
};

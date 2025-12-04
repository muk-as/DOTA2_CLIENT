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
        // Size: 0x_
        enum class ParticleOrientationSetMode_t : std::uint32_t
        {
            // MPropertyFriendlyName "Don't Set"
            PARTICLE_ORIENTATION_SET_NONE = 0xffffffff,
            // MPropertyFriendlyName "Set From Velocity"
            PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0x0,
            // MPropertyFriendlyName "Set From Normal"
            PARTICLE_ORIENTATION_SET_FROM_NORMAL = 0x1,
            // MPropertyFriendlyName "Set From Rotations"
            PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 0x2,
        };
    };
};

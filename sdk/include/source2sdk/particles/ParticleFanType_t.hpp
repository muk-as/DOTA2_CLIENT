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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x_
        enum class ParticleFanType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Fan"
            PARTICLE_FAN_TYPE_FAN = 0x0,
            // MPropertyFriendlyName "Rotor Wash"
            PARTICLE_FAN_TYPE_ROTOR_WASH = 0x1,
            // MPropertyFriendlyName "Radial"
            PARTICLE_FAN_TYPE_RADIAL = 0x2,
        };
    };
};

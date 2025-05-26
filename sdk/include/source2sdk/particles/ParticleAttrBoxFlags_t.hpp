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
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x4
        enum class ParticleAttrBoxFlags_t : std::uint32_t
        {
            // MPropertyFriendlyName "None"
            PARTICLE_ATTR_BOX_FLAGS_NONE = 0x0,
            // MPropertyFriendlyName "Water"
            PARTICLE_ATTR_BOX_FLAGS_WATER = 0x1,
            // MPropertyFriendlyName "On Fire"
            PARTICLE_ATTR_BOX_FLAGS_ON_FIRE = 0x2,
            // MPropertyFriendlyName "Electrified"
            PARTICLE_ATTR_BOX_FLAGS_ELECTRIFIED = 0x4,
            // MPropertyFriendlyName "Asleep"
            PARTICLE_ATTR_BOX_FLAGS_ASLEEP = 0x8,
            // MPropertyFriendlyName "Frozen"
            PARTICLE_ATTR_BOX_FLAGS_FROZEN = 0x10,
        };
    };
};

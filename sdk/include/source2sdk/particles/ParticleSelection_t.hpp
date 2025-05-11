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
        // Size: 0x4
        enum class ParticleSelection_t : std::uint32_t
        {
            // MPropertyFriendlyName "First/Oldest Particle"
            PARTICLE_SELECTION_FIRST = 0x0,
            // MPropertyFriendlyName "Last/Newest Particle"
            PARTICLE_SELECTION_LAST = 0x1,
            // MPropertyFriendlyName "Specified Particle Number"
            PARTICLE_SELECTION_NUMBER = 0x2,
        };
    };
};

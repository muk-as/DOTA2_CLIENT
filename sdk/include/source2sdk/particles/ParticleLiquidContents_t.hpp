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
        enum class ParticleLiquidContents_t : std::uint32_t
        {
            // MPropertyFriendlyName "None"
            PARTICLE_LIQUID_NONE = 0x0,
            // MPropertyFriendlyName "Oil"
            PARTICLE_LIQUID_OIL = 0x1,
            // MPropertyFriendlyName "Water"
            PARTICLE_LIQUID_WATER = 0x2,
        };
    };
};

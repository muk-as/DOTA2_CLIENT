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
    enum class ParticleLightUnitChoiceList_t : std::uint32_t
    {
        // MPropertyFriendlyName "Candelas"
        PARTICLE_LIGHT_UNIT_CANDELAS = 0x0,
        // MPropertyFriendlyName "Lumens"
        PARTICLE_LIGHT_UNIT_LUMENS = 0x1,
    };
};

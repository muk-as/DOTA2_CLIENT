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
    enum class ParticleSortingChoiceList_t : std::uint32_t
    {
        // MPropertyFriendlyName "Distance - Nearest"
        PARTICLE_SORTING_NEAREST = 0x0,
        // MPropertyFriendlyName "Age - Oldest"
        PARTICLE_SORTING_CREATION_TIME = 0x1,
    };
};

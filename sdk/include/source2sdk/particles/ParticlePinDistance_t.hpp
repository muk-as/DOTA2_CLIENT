#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 12
    // Alignment: 4
    // Size: 0x4
    enum class ParticlePinDistance_t : std::uint32_t
    {
        // MPropertyFriendlyName "Don't Break"
        PARTICLE_PIN_DISTANCE_NONE = 0xffffffff,
        // MPropertyFriendlyName "Distance to Neighboring Particle"
        PARTICLE_PIN_DISTANCE_NEIGHBOR = 0x0,
        // MPropertyFriendlyName "Distance to Farthest Particle"
        PARTICLE_PIN_DISTANCE_FARTHEST = 0x1,
        // MPropertyFriendlyName "Distance to First Particle"
        PARTICLE_PIN_DISTANCE_FIRST = 0x2,
        // MPropertyFriendlyName "Distance to Last Particle"
        PARTICLE_PIN_DISTANCE_LAST = 0x3,
        // MPropertyFriendlyName "Distance to Particle System Center"
        PARTICLE_PIN_DISTANCE_CENTER = 0x5,
        // MPropertyFriendlyName "Distance to Control Point"
        PARTICLE_PIN_DISTANCE_CP = 0x6,
        // MPropertyFriendlyName "Distance to Either of Two Control Points"
        PARTICLE_PIN_DISTANCE_CP_PAIR_EITHER = 0x7,
        // MPropertyFriendlyName "Distance to Both of Two Control Points"
        PARTICLE_PIN_DISTANCE_CP_PAIR_BOTH = 0x8,
        // MPropertyFriendlyName "Particle Speed"
        PARTICLE_PIN_SPEED = 0x9,
        // MPropertyFriendlyName "Collection Age"
        PARTICLE_PIN_COLLECTION_AGE = 0xa,
        // MPropertyFriendlyName "Break Value of >= 1"
        PARTICLE_PIN_FLOAT_VALUE = 0xb,
    };
};

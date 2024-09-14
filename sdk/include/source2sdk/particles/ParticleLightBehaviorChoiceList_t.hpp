#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class ParticleLightBehaviorChoiceList_t : std::uint32_t
    {
        // MPropertyFriendlyName "Follow Direction"
        PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0x0,
        // MPropertyFriendlyName "Rope"
        PARTICLE_LIGHT_BEHAVIOR_ROPE = 0x1,
        // MPropertyFriendlyName "Trails"
        PARTICLE_LIGHT_BEHAVIOR_TRAILS = 0x2,
    };
};

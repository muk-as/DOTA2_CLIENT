#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class ParticlePostProcessPriorityGroup_t : std::uint32_t
    {
        // MPropertyFriendlyName "Level Volume"
        PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0x0,
        // MPropertyFriendlyName "Level Override"
        PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 0x1,
        // MPropertyFriendlyName "Gameplay Effect"
        PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 0x2,
        // MPropertyFriendlyName "Gameplay State Low"
        PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 0x3,
        // MPropertyFriendlyName "Gameplay State High"
        PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 0x4,
        // MPropertyFriendlyName "Global UI"
        PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 0x5,
    };
};

#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 11
    // Alignment: 4
    // Size: 0x4
    enum class EventTypeSelection_t : std::uint32_t
    {
        // MPropertyFriendlyName "None"
        PARTICLE_EVENT_TYPE_MASK_NONE = 0x0,
        // MPropertyFriendlyName "Spawned"
        PARTICLE_EVENT_TYPE_MASK_SPAWNED = 0x1,
        // MPropertyFriendlyName "Killed"
        PARTICLE_EVENT_TYPE_MASK_KILLED = 0x2,
        // MPropertyFriendlyName "Collision"
        PARTICLE_EVENT_TYPE_MASK_COLLISION = 0x4,
        // MPropertyFriendlyName "First Collision"
        PARTICLE_EVENT_TYPE_MASK_FIRST_COLLISION = 0x8,
        // MPropertyFriendlyName "Stopped on Collision"
        PARTICLE_EVENT_TYPE_MASK_COLLISION_STOPPED = 0x10,
        // MPropertyFriendlyName "Killed on Collision"
        PARTICLE_EVENT_TYPE_MASK_KILLED_ON_COLLISION = 0x20,
        // MPropertyFriendlyName "User Event 1"
        PARTICLE_EVENT_TYPE_MASK_USER_1 = 0x40,
        // MPropertyFriendlyName "User Event 2"
        PARTICLE_EVENT_TYPE_MASK_USER_2 = 0x80,
        // MPropertyFriendlyName "User Event 3"
        PARTICLE_EVENT_TYPE_MASK_USER_3 = 0x100,
        // MPropertyFriendlyName "User Event 4"
        PARTICLE_EVENT_TYPE_MASK_USER_4 = 0x200,
    };
};

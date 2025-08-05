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
        // Enumerator count: 7
        // Alignment: 4
        // Size: 0x4
        enum class ParticleCollisionGroup_t : std::uint32_t
        {
            // MPropertyFriendlyName "Default"
            PARTICLE_COLLISION_GROUP_DEFAULT = 0x4,
            // MPropertyFriendlyName "Debris"
            PARTICLE_COLLISION_GROUP_DEBRIS = 0x5,
            // MPropertyFriendlyName "Interactive"
            PARTICLE_COLLISION_GROUP_INTERACTIVE = 0x7,
            // MPropertyFriendlyName "Player"
            PARTICLE_COLLISION_GROUP_PLAYER = 0x8,
            // MPropertyFriendlyName "Vehicle"
            PARTICLE_COLLISION_GROUP_VEHICLE = 0xa,
            // MPropertyFriendlyName "NPC"
            PARTICLE_COLLISION_GROUP_NPC = 0xc,
            // MPropertyFriendlyName "Props"
            PARTICLE_COLLISION_GROUP_PROPS = 0x18,
        };
    };
};

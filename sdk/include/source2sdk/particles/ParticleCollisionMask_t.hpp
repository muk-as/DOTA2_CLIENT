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
        // Enumerator count: 10
        // Alignment: 8
        // Size: 0x_
        enum class ParticleCollisionMask_t : std::uint64_t
        {
            // MPropertyFriendlyName "Mask All"
            PARTICLE_MASK_ALL = 0xffffffffffffffff,
            // MPropertyFriendlyName "Mask Solid"
            PARTICLE_MASK_SOLID = 0xc3001,
            // MPropertyFriendlyName "Mask Water"
            PARTICLE_MASK_WATER = 0x18000,
            // MPropertyFriendlyName "Mask Solid and Water"
            PARTICLE_MASK_SOLID_WATER = 0xdb001,
            // MPropertyFriendlyName "Mask Shot (raycasted bullets)"
            PARTICLE_MASK_SHOT = 0x1c1003,
            // MPropertyFriendlyName "Mask Shot Brush Only"
            PARTICLE_MASK_SHOT_BRUSHONLY = 0x101001,
            // MPropertyFriendlyName "Mask Shot Hull (non-raycasted)"
            PARTICLE_MASK_SHOT_HULL = 0x1c3001,
            // MPropertyFriendlyName "Mask Opaque"
            PARTICLE_MASK_OPAQUE = 0x80,
            // MPropertyFriendlyName "Mask Player Solid"
            PARTICLE_MASK_DEFAULTPLAYERSOLID = 0xc3011,
            // MPropertyFriendlyName "Mask NPC Solid"
            PARTICLE_MASK_NPCSOLID = 0xc3021,
        };
    };
};

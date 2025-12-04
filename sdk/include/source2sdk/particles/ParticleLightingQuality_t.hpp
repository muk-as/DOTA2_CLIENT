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
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x_
        enum class ParticleLightingQuality_t : std::uint32_t
        {
            // MPropertyFriendlyName "Per-Particle Lighting"
            PARTICLE_LIGHTING_PER_PARTICLE = 0x0,
            // MPropertyFriendlyName "Per-Vertex Lighting"
            PARTICLE_LIGHTING_PER_VERTEX = 0x1,
            // MPropertyFriendlyName "Per-Pixel Lighting"
            PARTICLE_LIGHTING_PER_PIXEL = 0xffffffff,
            // MPropertyFriendlyName "Override Position"
            PARTICLE_LIGHTING_OVERRIDE_POSITION = 0x2,
            // MPropertyFriendlyName "Override Color"
            PARTICLE_LIGHTING_OVERRIDE_COLOR = 0x3,
            // MPropertyFriendlyName "Add Extra Lighting Color"
            PARTICLE_LIGHTING_ADD_EXTRA_LIGHT = 0x4,
        };
    };
};

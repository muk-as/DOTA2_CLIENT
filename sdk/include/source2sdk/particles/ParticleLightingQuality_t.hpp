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
    enum class ParticleLightingQuality_t : std::uint32_t
    {
        // MPropertyFriendlyName "Per-Particle Lighting"
        PARTICLE_LIGHTING_PER_PARTICLE = 0x0,
        // MPropertyFriendlyName "Per-Vertex Lighting"
        PARTICLE_LIGHTING_PER_VERTEX = 0x1,
        // MPropertyFriendlyName "Per-Pixel Lighting"
        PARTICLE_LIGHTING_PER_PIXEL = 0xffffffff,
    };
};

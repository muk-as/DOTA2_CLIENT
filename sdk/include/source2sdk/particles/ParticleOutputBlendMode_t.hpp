#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class ParticleOutputBlendMode_t : std::uint32_t
    {
        // MPropertyFriendlyName "Alpha Blend"
        PARTICLE_OUTPUT_BLEND_MODE_ALPHA = 0x0,
        // MPropertyFriendlyName "Additive"
        PARTICLE_OUTPUT_BLEND_MODE_ADD = 0x1,
        // MPropertyFriendlyName "Blend Add (Pre-Mult Alpha)"
        PARTICLE_OUTPUT_BLEND_MODE_BLEND_ADD = 0x2,
        // MPropertyFriendlyName "Half Blend Add"
        PARTICLE_OUTPUT_BLEND_MODE_HALF_BLEND_ADD = 0x3,
        // MPropertyFriendlyName "Negative Half Blend Add"
        PARTICLE_OUTPUT_BLEND_MODE_NEG_HALF_BLEND_ADD = 0x4,
        // MPropertyFriendlyName "Mod2X"
        PARTICLE_OUTPUT_BLEND_MODE_MOD2X = 0x5,
        // MPropertyFriendlyName "Lighten"
        PARTICLE_OUTPUT_BLEND_MODE_LIGHTEN = 0x6,
    };
};

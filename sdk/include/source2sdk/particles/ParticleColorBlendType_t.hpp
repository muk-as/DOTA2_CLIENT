#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 13
    // Alignment: 4
    // Size: 0x4
    enum class ParticleColorBlendType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Multiply"
        PARTICLE_COLOR_BLEND_MULTIPLY = 0x0,
        // MPropertyFriendlyName "Multiply x2"
        PARTICLE_COLOR_BLEND_MULTIPLY2X = 0x1,
        // MPropertyFriendlyName "Divide"
        PARTICLE_COLOR_BLEND_DIVIDE = 0x2,
        // MPropertyFriendlyName "Add"
        PARTICLE_COLOR_BLEND_ADD = 0x3,
        // MPropertyFriendlyName "Subtract"
        PARTICLE_COLOR_BLEND_SUBTRACT = 0x4,
        // MPropertyFriendlyName "Mod2X"
        PARTICLE_COLOR_BLEND_MOD2X = 0x5,
        // MPropertyFriendlyName "Screen"
        PARTICLE_COLOR_BLEND_SCREEN = 0x6,
        // MPropertyFriendlyName "Lighten"
        PARTICLE_COLOR_BLEND_MAX = 0x7,
        // MPropertyFriendlyName "Darken"
        PARTICLE_COLOR_BLEND_MIN = 0x8,
        // MPropertyFriendlyName "Replace"
        PARTICLE_COLOR_BLEND_REPLACE = 0x9,
        // MPropertyFriendlyName "Average"
        PARTICLE_COLOR_BLEND_AVERAGE = 0xa,
        // MPropertyFriendlyName "Negate"
        PARTICLE_COLOR_BLEND_NEGATE = 0xb,
        // MPropertyFriendlyName "Luminance"
        PARTICLE_COLOR_BLEND_LUMINANCE = 0xc,
    };
};

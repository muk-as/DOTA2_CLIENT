#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class ParticleColorBlendMode_t : std::uint32_t
    {
        // MPropertyFriendlyName "Replace"
        PARTICLEBLEND_DEFAULT = 0x0,
        // MPropertyFriendlyName "Overlay"
        PARTICLEBLEND_OVERLAY = 0x1,
        // MPropertyFriendlyName "Darken"
        PARTICLEBLEND_DARKEN = 0x2,
        // MPropertyFriendlyName "Lighten"
        PARTICLEBLEND_LIGHTEN = 0x3,
        // MPropertyFriendlyName "Multiply"
        PARTICLEBLEND_MULTIPLY = 0x4,
    };
};

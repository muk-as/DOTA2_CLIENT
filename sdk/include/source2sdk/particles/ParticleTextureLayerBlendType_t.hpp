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
    enum class ParticleTextureLayerBlendType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Multiply"
        SPRITECARD_TEXTURE_BLEND_MULTIPLY = 0x0,
        // MPropertyFriendlyName "Mod2X"
        SPRITECARD_TEXTURE_BLEND_MOD2X = 0x1,
        // MPropertyFriendlyName "Replace"
        SPRITECARD_TEXTURE_BLEND_REPLACE = 0x2,
        // MPropertyFriendlyName "Add"
        SPRITECARD_TEXTURE_BLEND_ADD = 0x3,
        // MPropertyFriendlyName "Subtract"
        SPRITECARD_TEXTURE_BLEND_SUBTRACT = 0x4,
        // MPropertyFriendlyName "Average"
        SPRITECARD_TEXTURE_BLEND_AVERAGE = 0x5,
        // MPropertyFriendlyName "Luminance"
        SPRITECARD_TEXTURE_BLEND_LUMINANCE = 0x6,
    };
};

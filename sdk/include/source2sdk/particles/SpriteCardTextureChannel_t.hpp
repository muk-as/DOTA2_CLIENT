#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 15
    // Alignment: 4
    // Size: 0x4
    enum class SpriteCardTextureChannel_t : std::uint32_t
    {
        // MPropertyFriendlyName "RGB"
        SPRITECARD_TEXTURE_CHANNEL_MIX_RGB = 0x0,
        // MPropertyFriendlyName "RGBA"
        SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA = 0x1,
        // MPropertyFriendlyName "Alpha"
        SPRITECARD_TEXTURE_CHANNEL_MIX_A = 0x2,
        // MPropertyFriendlyName "RGB with Alpha Passthrough"
        SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A = 0x3,
        // MPropertyFriendlyName "RGB with Alpha Mask"
        SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_ALPHAMASK = 0x4,
        // MPropertyFriendlyName "RGB with RGB as Alpha Mask"
        SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_RGBMASK = 0x5,
        // MPropertyFriendlyName "RGBA with RGB as Alpha"
        SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA_RGBALPHA = 0x6,
        // MPropertyFriendlyName "Alpha with RGB as Alpha"
        SPRITECARD_TEXTURE_CHANNEL_MIX_A_RGBALPHA = 0x7,
        // MPropertyFriendlyName "RGB with RGB as Alpha Passthrough"
        SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A_RGBALPHA = 0x8,
        // MPropertyFriendlyName "Red Channel"
        SPRITECARD_TEXTURE_CHANNEL_MIX_R = 0x9,
        // MPropertyFriendlyName "Green Channel"
        SPRITECARD_TEXTURE_CHANNEL_MIX_G = 0xa,
        // MPropertyFriendlyName "Blue Channel"
        SPRITECARD_TEXTURE_CHANNEL_MIX_B = 0xb,
        // MPropertyFriendlyName "Red with Red as Alpha"
        SPRITECARD_TEXTURE_CHANNEL_MIX_RALPHA = 0xc,
        // MPropertyFriendlyName "Green with Green as Alpha"
        SPRITECARD_TEXTURE_CHANNEL_MIX_GALPHA = 0xd,
        // MPropertyFriendlyName "Blue with Blue as Alpha"
        SPRITECARD_TEXTURE_CHANNEL_MIX_BALPHA = 0xe,
    };
};

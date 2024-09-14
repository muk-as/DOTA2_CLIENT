#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 10
    // Alignment: 4
    // Size: 0x4
    enum class SpriteCardTextureType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Diffuse Texture"
        SPRITECARD_TEXTURE_DIFFUSE = 0x0,
        // MPropertyFriendlyName "Diffuse Infinite Zoom"
        SPRITECARD_TEXTURE_ZOOM = 0x1,
        // MPropertyFriendlyName "1D Luminance to Color Lookup"
        SPRITECARD_TEXTURE_1D_COLOR_LOOKUP = 0x2,
        // MPropertyFriendlyName "UV Distortion"
        SPRITECARD_TEXTURE_UVDISTORTION = 0x3,
        // MPropertyFriendlyName "UV Distortion Infinite Zoom"
        SPRITECARD_TEXTURE_UVDISTORTION_ZOOM = 0x4,
        // MPropertyFriendlyName "Normal Map"
        SPRITECARD_TEXTURE_NORMALMAP = 0x5,
        // MPropertyFriendlyName "Animation Smoothing Motion Vector"
        SPRITECARD_TEXTURE_ANIMMOTIONVEC = 0x6,
        // MPropertyFriendlyName "Spherical Harmonics A"
        SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_A = 0x7,
        // MPropertyFriendlyName "Spherical Harmonics B"
        SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_B = 0x8,
        // MPropertyFriendlyName "Spherical Harmonics C"
        SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C = 0x9,
    };
};

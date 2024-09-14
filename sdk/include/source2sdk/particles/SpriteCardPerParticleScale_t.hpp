#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 14
    // Alignment: 4
    // Size: 0x4
    enum class SpriteCardPerParticleScale_t : std::uint32_t
    {
        // MPropertyFriendlyName "None"
        SPRITECARD_TEXTURE_PP_SCALE_NONE = 0x0,
        // MPropertyFriendlyName "Animation Time"
        SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_AGE = 0x1,
        // MPropertyFriendlyName "Animation Frame"
        SPRITECARD_TEXTURE_PP_SCALE_ANIMATION_FRAME = 0x2,
        // MPropertyFriendlyName "Shader Extra Data 1"
        SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA1 = 0x3,
        // MPropertyFriendlyName "Shader Extra Data 2"
        SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA2 = 0x4,
        // MPropertyFriendlyName "Alpha"
        SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_ALPHA = 0x5,
        // MPropertyFriendlyName "Radius"
        SPRITECARD_TEXTURE_PP_SCALE_SHADER_RADIUS = 0x6,
        // MPropertyFriendlyName "Roll"
        SPRITECARD_TEXTURE_PP_SCALE_ROLL = 0x7,
        // MPropertyFriendlyName "Yaw"
        SPRITECARD_TEXTURE_PP_SCALE_YAW = 0x8,
        // MPropertyFriendlyName "Pitch"
        SPRITECARD_TEXTURE_PP_SCALE_PITCH = 0x9,
        // MPropertyFriendlyName "Random 0 - 1 Value"
        SPRITECARD_TEXTURE_PP_SCALE_RANDOM = 0xa,
        // MPropertyFriendlyName "Random -1 - 1 Value"
        SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM = 0xb,
        // MPropertyFriendlyName "Random 0 - 1 x Time"
        SPRITECARD_TEXTURE_PP_SCALE_RANDOM_TIME = 0xc,
        // MPropertyFriendlyName "Random -1 - 1 x Time"
        SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM_TIME = 0xd,
    };
};

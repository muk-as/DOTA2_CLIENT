#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class TextureRepetitionMode_t : std::uint32_t
    {
        // MPropertyFriendlyName "Per-Particle"
        TEXTURE_REPETITION_PARTICLE = 0x0,
        // MPropertyFriendlyName "Entire Path"
        TEXTURE_REPETITION_PATH = 0x1,
    };
};

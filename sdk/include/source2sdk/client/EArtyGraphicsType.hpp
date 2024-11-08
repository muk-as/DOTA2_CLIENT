#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 1
    // Size: 0x1
    enum class EArtyGraphicsType : std::uint8_t
    {
        k_eSprite = 0,
        k_eAnimatedSprite = 1,
        k_eProgressBar = 2,
        k_eUnit = 3,
        k_eHero = 4,
        k_eParticle = 5,
    };
};

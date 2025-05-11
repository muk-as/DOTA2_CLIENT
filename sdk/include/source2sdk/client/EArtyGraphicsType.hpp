#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 6
        // Alignment: 1
        // Size: 0x1
        enum class EArtyGraphicsType : std::uint8_t
        {
            k_eSprite = 0x0,
            k_eAnimatedSprite = 0x1,
            k_eProgressBar = 0x2,
            k_eUnit = 0x3,
            k_eHero = 0x4,
            k_eParticle = 0x5,
        };
    };
};

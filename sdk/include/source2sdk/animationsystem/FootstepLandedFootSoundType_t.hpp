#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class FootstepLandedFootSoundType_t : std::uint32_t
        {
            FOOTSOUND_Left = 0x0,
            FOOTSOUND_Right = 0x1,
            FOOTSOUND_UseOverrideSound = 0x2,
        };
    };
};

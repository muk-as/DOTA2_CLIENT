#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Enumerator count: 4
    // Alignment: 1
    // Size: 0x1
    enum class NmRootMotionBlendMode_t : std::uint8_t
    {
        Blend = 0,
        Additive = 1,
        IgnoreSource = 2,
        IgnoreTarget = 3,
    };
};

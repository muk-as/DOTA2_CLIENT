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
    enum class CNmFloatAngleMathNode__Operation_t : std::uint8_t
    {
        ClampTo180 = 0,
        ClampTo360 = 1,
        FlipHemisphere = 2,
        FlipHemisphereNegate = 3,
    };
};

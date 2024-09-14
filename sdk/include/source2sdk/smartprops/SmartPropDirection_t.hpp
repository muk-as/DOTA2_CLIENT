#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class SmartPropDirection_t : std::uint32_t
    {
        // MPropertyFriendlyName "Forward direction (+x)"
        FORWARD = 0x0,
        // MPropertyFriendlyName "Left direction (+y)"
        LEFT = 0x1,
        // MPropertyFriendlyName "Up direction (+z)"
        UP = 0x2,
    };
};

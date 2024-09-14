#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Enumerator count: 6
    // Alignment: 1
    // Size: 0x1
    enum class MovementGait_t : std::uint8_t
    {
        // MPropertyFriendlyName "None"
        eInvalid = 255,
        // MPropertyFriendlyName "Slow"
        eSlow = 0,
        // MPropertyFriendlyName "Medium"
        eMedium = 1,
        // MPropertyFriendlyName "Fast"
        eFast = 2,
        // MPropertyFriendlyName "VeryFast"
        eVeryFast = 3,
        // MPropertySuppressEnumerator
        eCount = 4,
    };
};

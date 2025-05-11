#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Enumerator count: 6
        // Alignment: 1
        // Size: 0x1
        enum class SharedMovementGait_t : std::uint8_t
        {
            // MPropertyFriendlyName "None"
            eInvalid = 0xff,
            // MPropertyFriendlyName "Slow"
            eSlow = 0x0,
            // MPropertyFriendlyName "Medium"
            eMedium = 0x1,
            // MPropertyFriendlyName "Fast"
            eFast = 0x2,
            // MPropertyFriendlyName "VeryFast"
            eVeryFast = 0x3,
            // MPropertySuppressEnumerator
            eCount = 0x4,
        };
    };
};

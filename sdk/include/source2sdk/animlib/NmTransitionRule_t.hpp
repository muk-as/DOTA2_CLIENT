#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Enumerator count: 3
        // Alignment: 1
        // Size: 0x1
        enum class NmTransitionRule_t : std::uint8_t
        {
            // MPropertyFriendlyName "Fully Allowed"
            AllowTransition = 0x0,
            // MPropertyFriendlyName "Conditionally Allowed"
            ConditionallyAllowTransition = 0x1,
            // MPropertyFriendlyName "Blocked"
            BlockTransition = 0x2,
        };
    };
};

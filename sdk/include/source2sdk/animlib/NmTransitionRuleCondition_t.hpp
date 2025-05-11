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
        // Enumerator count: 4
        // Alignment: 1
        // Size: 0x1
        enum class NmTransitionRuleCondition_t : std::uint8_t
        {
            // MPropertyFriendlyName "Any Allowed"
            AnyAllowed = 0x0,
            // MPropertyFriendlyName "Fully Allowed"
            FullyAllowed = 0x1,
            // MPropertyFriendlyName "Conditionally Allowed"
            ConditionallyAllowed = 0x2,
            // MPropertyFriendlyName "Blocked"
            Blocked = 0x3,
        };
    };
};

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
    enum class NmTransitionRuleCondition_t : std::uint8_t
    {
        // MPropertyFriendlyName "Any Allowed"
        AnyAllowed = 0,
        // MPropertyFriendlyName "Fully Allowed"
        FullyAllowed = 1,
        // MPropertyFriendlyName "Conditionally Allowed"
        ConditionallyAllowed = 2,
        // MPropertyFriendlyName "Blocked"
        Blocked = 3,
    };
};

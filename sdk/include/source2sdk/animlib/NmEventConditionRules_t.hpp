#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Enumerator count: 9
    // Alignment: 1
    // Size: 0x1
    enum class NmEventConditionRules_t : std::uint8_t
    {
        LimitSearchToSourceState = 0,
        IgnoreInactiveEvents = 1,
        PreferHighestWeight = 2,
        PreferHighestProgress = 3,
        OperatorOr = 4,
        OperatorAnd = 5,
        SearchOnlyStateEvents = 6,
        SearchOnlyAnimEvents = 7,
        SearchBothStateAndAnimEvents = 8,
    };
};

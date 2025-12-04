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
        // Enumerator count: 9
        // Alignment: 1
        // Size: 0x_
        enum class NmEventConditionRules_t : std::uint8_t
        {
            LimitSearchToSourceState = 0x0,
            IgnoreInactiveEvents = 0x1,
            PreferHighestWeight = 0x2,
            PreferHighestProgress = 0x3,
            OperatorOr = 0x4,
            OperatorAnd = 0x5,
            SearchOnlyGraphEvents = 0x6,
            SearchOnlyAnimEvents = 0x7,
            SearchBothGraphAndAnimEvents = 0x8,
        };
    };
};

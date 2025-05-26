#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x4
        enum class PulseBestOutflowRules_t : std::uint32_t
        {
            // MPropertyFriendlyName "Choose Best"
            // MPropertyDescription "Choose the best outflow with all rules passing, as determined by number of passing rules (specificity)."
            SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
            // MPropertyFriendlyName "Choose First"
            // MPropertyDescription "Choose the first outflow with all rules passing, from left to right"
            SORT_BY_OUTFLOW_INDEX = 0x1,
        };
    };
};

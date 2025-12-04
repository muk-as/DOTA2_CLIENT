#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Enumerator count: 8
        // Alignment: 4
        // Size: 0x_
        enum class SetStatisticExpressionType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Uninitialized"
            SET_EXPRESSION_UNINITIALIZED = 0xffffffff,
            // MPropertyFriendlyName "Sum"
            SET_EXPRESSION_SUM = 0x0,
            // MPropertyFriendlyName "Mean/Average"
            SET_EXPRESSION_MEAN = 0x1,
            // MPropertyFriendlyName "Median"
            SET_EXPRESSION_MEDIAN = 0x2,
            // MPropertyFriendlyName "Mode"
            SET_EXPRESSION_MODE = 0x3,
            // MPropertyFriendlyName "Standard Deviation"
            SET_EXPRESSION_STANDARD_DEVIATION = 0x4,
            // MPropertyFriendlyName "Min"
            SET_EXPRESSION_MIN = 0x5,
            // MPropertyFriendlyName "Max"
            SET_EXPRESSION_MAX = 0x6,
        };
    };
};

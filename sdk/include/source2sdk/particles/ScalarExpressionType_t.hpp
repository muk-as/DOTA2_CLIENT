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
        // Enumerator count: 12
        // Alignment: 4
        // Size: 0x4
        enum class ScalarExpressionType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Uninitialized"
            SCALAR_EXPRESSION_UNINITIALIZED = 0xffffffff,
            // MPropertyFriendlyName "Add"
            SCALAR_EXPRESSION_ADD = 0x0,
            // MPropertyFriendlyName "Subtract"
            SCALAR_EXPRESSION_SUBTRACT = 0x1,
            // MPropertyFriendlyName "Multiply"
            SCALAR_EXPRESSION_MUL = 0x2,
            // MPropertyFriendlyName "Divide"
            SCALAR_EXPRESSION_DIVIDE = 0x3,
            // MPropertyFriendlyName "Input 1"
            SCALAR_EXPRESSION_INPUT_1 = 0x4,
            // MPropertyFriendlyName "Min"
            SCALAR_EXPRESSION_MIN = 0x5,
            // MPropertyFriendlyName "Max"
            SCALAR_EXPRESSION_MAX = 0x6,
            // MPropertyFriendlyName "Mod"
            SCALAR_EXPRESSION_MOD = 0x7,
            // MPropertyFriendlyName "Equal"
            SCALAR_EXPRESSION_EQUAL = 0x8,
            // MPropertyFriendlyName "Greater Than"
            SCALAR_EXPRESSION_GT = 0x9,
            // MPropertyFriendlyName "Less Than"
            SCALAR_EXPRESSION_LT = 0xa,
        };
    };
};

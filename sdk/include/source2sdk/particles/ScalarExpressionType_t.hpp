#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 9
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
    };
};

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
    enum class VectorExpressionType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Uninitialized"
        VECTOR_EXPRESSION_UNINITIALIZED = 0xffffffff,
        // MPropertyFriendlyName "Add"
        VECTOR_EXPRESSION_ADD = 0x0,
        // MPropertyFriendlyName "Subtract"
        VECTOR_EXPRESSION_SUBTRACT = 0x1,
        // MPropertyFriendlyName "Multiply"
        VECTOR_EXPRESSION_MUL = 0x2,
        // MPropertyFriendlyName "Divide"
        VECTOR_EXPRESSION_DIVIDE = 0x3,
        // MPropertyFriendlyName "Input 1"
        VECTOR_EXPRESSION_INPUT_1 = 0x4,
        // MPropertyFriendlyName "Min"
        VECTOR_EXPRESSION_MIN = 0x5,
        // MPropertyFriendlyName "Max"
        VECTOR_EXPRESSION_MAX = 0x6,
        // MPropertyFriendlyName "Cross Product"
        VECTOR_EXPRESSION_CROSSPRODUCT = 0x7,
    };
};

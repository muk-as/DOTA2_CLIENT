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
        // Enumerator count: 10
        // Alignment: 4
        // Size: 0x_
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
            // MPropertyFriendlyName "Lerp"
            VECTOR_EXPRESSION_LERP = 0x8,
        };
    };
};

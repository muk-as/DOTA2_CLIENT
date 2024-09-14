#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class VectorFloatExpressionType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Uninitialized"
        VECTOR_FLOAT_EXPRESSION_UNINITIALIZED = 0xffffffff,
        // MPropertyFriendlyName "Dot Product"
        VECTOR_FLOAT_EXPRESSION_DOTPRODUCT = 0x0,
        // MPropertyFriendlyName "Distance Between"
        VECTOR_FLOAT_EXPRESSION_DISTANCE = 0x1,
        // MPropertyFriendlyName "Distance Between Squared"
        VECTOR_FLOAT_EXPRESSION_DISTANCESQR = 0x2,
        // MPropertyFriendlyName "Input 1 Length"
        VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH = 0x3,
        // MPropertyFriendlyName "Input 1 Length Squared"
        VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 0x4,
        // MPropertyFriendlyName "Input 1 Noise"
        VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE = 0x5,
    };
};

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
        // Enumerator count: 12
        // Alignment: 1
        // Size: 0x1
        enum class CNmFloatMathNode_Operator_t : std::uint8_t
        {
            Add = 0x0,
            Sub = 0x1,
            Mul = 0x2,
            Div = 0x3,
            Mod = 0x4,
            Abs = 0x5,
            Negate = 0x6,
            Floor = 0x7,
            Ceiling = 0x8,
            IntegerPart = 0x9,
            FractionalPart = 0xa,
            InverseFractionalPart = 0xb,
        };
    };
};

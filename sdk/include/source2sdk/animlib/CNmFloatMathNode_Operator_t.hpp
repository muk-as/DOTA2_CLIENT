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
        // Enumerator count: 4
        // Alignment: 1
        // Size: 0x1
        enum class CNmFloatMathNode_Operator_t : std::uint8_t
        {
            Add = 0x0,
            Sub = 0x1,
            Mul = 0x2,
            Div = 0x3,
        };
    };
};

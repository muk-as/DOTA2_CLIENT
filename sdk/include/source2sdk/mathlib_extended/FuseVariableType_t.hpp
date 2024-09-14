#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::mathlib_extended
{
    // Enumerator count: 9
    // Alignment: 1
    // Size: 0x1
    enum class FuseVariableType_t : std::uint8_t
    {
        INVALID = 0,
        BOOL = 1,
        INT8 = 2,
        INT16 = 3,
        INT32 = 4,
        UINT8 = 5,
        UINT16 = 6,
        UINT32 = 7,
        FLOAT32 = 8,
    };
};

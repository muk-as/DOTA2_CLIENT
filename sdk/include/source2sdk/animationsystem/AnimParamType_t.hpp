#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Enumerator count: 9
    // Alignment: 1
    // Size: 0x1
    enum class AnimParamType_t : std::uint8_t
    {
        ANIMPARAM_UNKNOWN = 0,
        ANIMPARAM_BOOL = 1,
        ANIMPARAM_ENUM = 2,
        ANIMPARAM_INT = 3,
        ANIMPARAM_FLOAT = 4,
        ANIMPARAM_VECTOR = 5,
        ANIMPARAM_QUATERNION = 6,
        ANIMPARAM_GLOBALSYMBOL = 7,
        ANIMPARAM_COUNT = 8,
    };
};

#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 3
    // Alignment: 1
    // Size: 0x1
    enum class PoseType_t : std::uint8_t
    {
        POSETYPE_STATIC = 0,
        POSETYPE_DYNAMIC = 1,
        POSETYPE_INVALID = 255,
    };
};

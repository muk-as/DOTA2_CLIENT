#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Enumerator count: 9
    // Alignment: 1
    // Size: 0x1
    enum class NmGraphValueType_t : std::uint8_t
    {
        Unknown = 0,
        Bool = 1,
        ID = 2,
        Float = 3,
        Vector = 4,
        Target = 5,
        BoneMask = 6,
        Pose = 7,
        Special = 8,
    };
};

#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Enumerator count: 4
    // Alignment: 1
    // Size: 0x1
    enum class NmTargetWarpRule_t : std::uint8_t
    {
        WarpXY = 0,
        WarpZ = 1,
        WarpXYZ = 2,
        RotationOnly = 3,
    };
};

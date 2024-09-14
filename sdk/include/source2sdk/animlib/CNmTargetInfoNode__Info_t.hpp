#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class CNmTargetInfoNode__Info_t : std::uint32_t
    {
        AngleHorizontal = 0x0,
        AngleVertical = 0x1,
        Distance = 0x2,
        DistanceHorizontalOnly = 0x3,
        DistanceVerticalOnly = 0x4,
        DeltaOrientationX = 0x5,
        DeltaOrientationY = 0x6,
        DeltaOrientationZ = 0x7,
    };
};

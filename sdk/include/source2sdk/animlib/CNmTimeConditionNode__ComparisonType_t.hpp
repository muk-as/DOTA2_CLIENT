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
    enum class CNmTimeConditionNode__ComparisonType_t : std::uint8_t
    {
        PercentageThroughState = 0,
        PercentageThroughSyncEvent = 1,
        ElapsedTime = 2,
        LoopCount = 3,
    };
};

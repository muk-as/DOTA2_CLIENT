#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 5
    // Alignment: 1
    // Size: 0x1
    enum class FacingMode : std::uint8_t
    {
        // MPropertyFriendlyName "None"
        FacingMode_Invalid = 0,
        // MPropertyFriendlyName "Manual Direction"
        FacingMode_Manual = 1,
        // MPropertyFriendlyName "Path"
        FacingMode_Path = 2,
        // MPropertyFriendlyName "Look Target"
        FacingMode_LookTarget = 3,
        // MPropertyFriendlyName "Manual Position"
        FacingMode_ManualPosition = 4,
    };
};

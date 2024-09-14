#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Enumerator count: 5
    // Alignment: 1
    // Size: 0x1
    enum class CNmRootMotionOverrideNode__OverrideFlags_t : std::uint8_t
    {
        AllowMoveX = 0,
        AllowMoveY = 1,
        AllowMoveZ = 2,
        AllowFacingPitch = 3,
        ListenForEvents = 4,
    };
};

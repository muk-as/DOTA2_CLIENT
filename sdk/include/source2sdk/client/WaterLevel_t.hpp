#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 1
    // Size: 0x1
    enum class WaterLevel_t : std::uint8_t
    {
        WL_NotInWater = 0,
        WL_Feet = 1,
        WL_Waist = 2,
        WL_Chest = 3,
        WL_FullyUnderwater = 4,
        WL_Count = 5,
    };
};

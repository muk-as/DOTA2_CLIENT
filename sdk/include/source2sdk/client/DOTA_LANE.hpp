#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_LANE : std::uint32_t
    {
        DOTA_LANE_NONE = 0x0,
        DOTA_LANE_TOP = 0x1,
        DOTA_LANE_MIDDLE = 0x2,
        DOTA_LANE_BOTTOM = 0x3,
        DOTA_LANE_MAX = 0x4,
    };
};

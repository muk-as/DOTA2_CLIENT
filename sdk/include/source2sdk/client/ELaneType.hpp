#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class ELaneType : std::uint32_t
    {
        LANE_TYPE_UNKNOWN = 0x0,
        LANE_TYPE_SAFE = 0x1,
        LANE_TYPE_OFF = 0x2,
        LANE_TYPE_MID = 0x3,
        LANE_TYPE_JUNGLE = 0x4,
        LANE_TYPE_ROAM = 0x5,
    };
};

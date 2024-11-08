#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 11
    // Alignment: 4
    // Size: 0x4
    enum class CDebugOverlayFilterType_t : std::uint32_t
    {
        NONE = 0x0,
        TEXT = 0x1,
        ENTITY = 0x2,
        COUNT = 0x3,
        TACTICAL_SEARCH = 0x4,
        AI_SCHEDULE = 0x5,
        AI_TASK = 0x6,
        AI_EVENT = 0x7,
        AI_PATHFINDING = 0x8,
        END_SIM_HISTORY_TYPES = 0x9,
        COMBINED = 0xffffffff,
    };
};

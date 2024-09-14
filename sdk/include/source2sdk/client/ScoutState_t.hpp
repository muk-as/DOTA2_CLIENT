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
    enum class ScoutState_t : std::uint32_t
    {
        SCOUT_STATE_INIT = 0xffffffff,
        SCOUT_STATE_IDLE = 0x0,
        SCOUT_STATE_AT_BASE = 0x1,
        SCOUT_STATE_MOVING = 0x2,
        SCOUT_STATE_DEAD = 0x3,
        SCOUT_NUM_STATES = 0x4,
    };
};

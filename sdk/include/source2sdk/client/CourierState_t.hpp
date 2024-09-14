#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class CourierState_t : std::uint32_t
    {
        COURIER_STATE_INIT = 0xffffffff,
        COURIER_STATE_IDLE = 0x0,
        COURIER_STATE_AT_BASE = 0x1,
        COURIER_STATE_MOVING = 0x2,
        COURIER_STATE_DELIVERING_ITEMS = 0x3,
        COURIER_STATE_RETURNING_TO_BASE = 0x4,
        COURIER_STATE_DEAD = 0x5,
        COURIER_NUM_STATES = 0x6,
    };
};

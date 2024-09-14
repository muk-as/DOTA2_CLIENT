#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class TOGGLE_STATE : std::uint32_t
    {
        TS_AT_TOP = 0x0,
        TS_AT_BOTTOM = 0x1,
        TS_GOING_UP = 0x2,
        TS_GOING_DOWN = 0x3,
        DOOR_OPEN = 0x0,
        DOOR_CLOSED = 0x1,
        DOOR_OPENING = 0x2,
        DOOR_CLOSING = 0x3,
    };
};

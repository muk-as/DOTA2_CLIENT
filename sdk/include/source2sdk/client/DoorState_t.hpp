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
    enum class DoorState_t : std::uint32_t
    {
        DOOR_STATE_CLOSED = 0x0,
        DOOR_STATE_OPENING = 0x1,
        DOOR_STATE_OPEN = 0x2,
        DOOR_STATE_CLOSING = 0x3,
        DOOR_STATE_AJAR = 0x4,
    };
};

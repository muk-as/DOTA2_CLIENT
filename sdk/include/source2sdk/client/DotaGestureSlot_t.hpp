#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 12
    // Alignment: 4
    // Size: 0x4
    enum class DotaGestureSlot_t : std::uint32_t
    {
        GESTURE_SLOT_NONE = 0xffffffff,
        GESTURE_SLOT_ATTACK = 0x0,
        GESTURE_SLOT_ABILITY = 0x1,
        GESTURE_SLOT_OVERRIDE = 0x2,
        GESTURE_SLOT_CUSTOM = 0x3,
        GESTURE_SLOT_CUSTOM2 = 0x4,
        GESTURE_SLOT_CUSTOM3 = 0x5,
        GESTURE_SLOT_CONSTANT = 0x6,
        GESTURE_SLOT_TAUNT = 0x7,
        GESTURE_SLOT_ABSOLUTE = 0x8,
        GESTURE_SLOT_COUNT = 0x9,
        GESTURE_SLOT_STOLEN_ABILITY_BIT = 0x80,
    };
};

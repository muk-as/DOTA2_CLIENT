#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 13
    // Alignment: 1
    // Size: 0x1
    enum class MoveType_t : std::uint8_t
    {
        MOVETYPE_NONE = 0,
        MOVETYPE_OBSOLETE = 1,
        MOVETYPE_WALK = 2,
        MOVETYPE_FLY = 3,
        MOVETYPE_FLYGRAVITY = 4,
        MOVETYPE_VPHYSICS = 5,
        MOVETYPE_PUSH = 6,
        MOVETYPE_NOCLIP = 7,
        MOVETYPE_OBSERVER = 8,
        MOVETYPE_CUSTOM = 9,
        MOVETYPE_LAST = 10,
        MOVETYPE_INVALID = 10,
        MOVETYPE_MAX_BITS = 5,
    };
};

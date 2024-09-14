#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class Touch_t : std::uint32_t
    {
        touch_none = 0x0,
        touch_player_only = 0x1,
        touch_npc_only = 0x2,
        touch_player_or_npc = 0x3,
        touch_player_or_npc_or_physicsprop = 0x4,
    };
};

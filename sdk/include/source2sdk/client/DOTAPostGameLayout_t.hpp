#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class DOTAPostGameLayout_t : std::uint32_t
    {
        DOTA_POST_GAME_LAYOUT_DOUBLE_COLUMN = 0x0,
        DOTA_POST_GAME_LAYOUT_SINGLE_COLUMN = 0x1,
        DOTA_POST_GAME_LAYOUT_MAX = 0x2,
    };
};

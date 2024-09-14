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
    enum class DOTAPostGameColumn_t : std::uint32_t
    {
        DOTA_POST_GAME_COLUMN_LEVEL = 0x0,
        DOTA_POST_GAME_COLUMN_ITEMS = 0x1,
        DOTA_POST_GAME_COLUMN_KILLS = 0x2,
        DOTA_POST_GAME_COLUMN_DEATHS = 0x3,
        DOTA_POST_GAME_COLUMN_ASSISTS = 0x4,
        DOTA_POST_GAME_COLUMN_NET_WORTH = 0x5,
        DOTA_POST_GAME_COLUMN_LAST_HITS = 0x6,
        DOTA_POST_GAME_COLUMN_DENIES = 0x7,
        DOTA_POST_GAME_COLUMN_DAMAGE = 0x8,
        DOTA_POST_GAME_COLUMN_HEALING = 0x9,
        DOTA_POST_GAME_COLUMN_MAX = 0xa,
    };
};

#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class MatchType : std::uint32_t
    {
        MATCH_TYPE_CASUAL = 0x0,
        MATCH_TYPE_COOP_BOTS = 0x1,
        MATCH_TYPE_COMPETITIVE = 0x4,
        MATCH_TYPE_WEEKEND_TOURNEY = 0x5,
        MATCH_TYPE_EVENT = 0x7,
        MATCH_TYPE_COACHES_CHALLENGE = 0xc,
        MATCH_TYPE_NEW_PLAYER_POOL = 0xe,
    };
};

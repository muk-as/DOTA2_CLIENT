#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 10
    // Alignment: 4
    // Size: 0x4
    enum class ELeagueNodeGroupType : std::uint32_t
    {
        INVALID_GROUP_TYPE = 0x0,
        ORGANIZATIONAL = 0x1,
        ROUND_ROBIN = 0x2,
        SWISS = 0x3,
        BRACKET_SINGLE = 0x4,
        BRACKET_DOUBLE_SEED_LOSER = 0x5,
        BRACKET_DOUBLE_ALL_WINNER = 0x6,
        SHOWMATCH = 0x7,
        GSL = 0x8,
        PLACEMENT = 0x9,
    };
};

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
    enum class DOTA_TournamentEvents : std::uint32_t
    {
        TE_FIRST_BLOOD = 0x0,
        TE_GAME_END = 0x1,
        TE_MULTI_KILL = 0x2,
        TE_HERO_DENY = 0x3,
        TE_AEGIS_DENY = 0x4,
        TE_AEGIS_STOLEN = 0x5,
        TE_GODLIKE = 0x6,
        TE_COURIER_KILL = 0x7,
        TE_ECHOSLAM = 0x8,
        TE_RAPIER = 0x9,
        TE_EARLY_ROSHAN = 0xa,
        TE_BLACK_HOLE = 0xb,
    };
};

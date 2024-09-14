#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 20
    // Alignment: 4
    // Size: 0x4
    enum class Fantasy_Scoring : std::uint32_t
    {
        FANTASY_SCORING_KILLS = 0x0,
        FANTASY_SCORING_DEATHS = 0x1,
        FANTASY_SCORING_CS = 0x2,
        FANTASY_SCORING_GPM = 0x3,
        FANTASY_SCORING_TOWER_KILLS = 0x4,
        FANTASY_SCORING_ROSHAN_KILLS = 0x5,
        FANTASY_SCORING_TEAMFIGHT_PARTICIPATION = 0x6,
        FANTASY_SCORING_WARDS_PLANTED = 0x7,
        FANTASY_SCORING_CAMPS_STACKED = 0x8,
        FANTASY_SCORING_RUNES_GRABBED = 0x9,
        FANTASY_SCORING_FIRST_BLOOD = 0xa,
        FANTASY_SCORING_STUNS = 0xb,
        FANTASY_SCORING_SMOKES_USED = 0xc,
        FANTASY_SCORING_NEUTRAL_TOKENS_FOUND = 0xd,
        FANTASY_SCORING_WATCHERS_TAKEN = 0xe,
        FANTASY_SCORING_LOTUSES_GAINED = 0xf,
        FANTASY_SCORING_TORMENTOR_KILLS = 0x10,
        FANTASY_SCORING_COURIER_KILLS = 0x11,
        FANTASY_SCORING_TYPES = 0x12,
        FANTASY_SCORING_INVALID = 0x13,
    };
};

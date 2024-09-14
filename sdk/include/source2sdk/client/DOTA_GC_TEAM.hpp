#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 15
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_GC_TEAM : std::uint32_t
    {
        DOTA_GC_TEAM_GOOD_GUYS = 0x0,
        DOTA_GC_TEAM_BAD_GUYS = 0x1,
        DOTA_GC_TEAM_BROADCASTER = 0x2,
        DOTA_GC_TEAM_SPECTATOR = 0x3,
        DOTA_GC_TEAM_PLAYER_POOL = 0x4,
        DOTA_GC_TEAM_NOTEAM = 0x5,
        DOTA_GC_TEAM_CUSTOM_1 = 0x6,
        DOTA_GC_TEAM_CUSTOM_2 = 0x7,
        DOTA_GC_TEAM_CUSTOM_3 = 0x8,
        DOTA_GC_TEAM_CUSTOM_4 = 0x9,
        DOTA_GC_TEAM_CUSTOM_5 = 0xa,
        DOTA_GC_TEAM_CUSTOM_6 = 0xb,
        DOTA_GC_TEAM_CUSTOM_7 = 0xc,
        DOTA_GC_TEAM_CUSTOM_8 = 0xd,
        DOTA_GC_TEAM_NEUTRALS = 0xe,
    };
};

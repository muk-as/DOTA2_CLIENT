#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 18
    // Alignment: 4
    // Size: 0x4
    enum class DOTATeam_t : std::uint32_t
    {
        DOTA_TEAM_FIRST = 0x2,
        DOTA_TEAM_GOODGUYS = 0x2,
        DOTA_TEAM_BADGUYS = 0x3,
        DOTA_TEAM_NEUTRALS = 0x4,
        DOTA_TEAM_NOTEAM = 0x5,
        DOTA_TEAM_CUSTOM_1 = 0x6,
        DOTA_TEAM_CUSTOM_2 = 0x7,
        DOTA_TEAM_CUSTOM_3 = 0x8,
        DOTA_TEAM_CUSTOM_4 = 0x9,
        DOTA_TEAM_CUSTOM_5 = 0xa,
        DOTA_TEAM_CUSTOM_6 = 0xb,
        DOTA_TEAM_CUSTOM_7 = 0xc,
        DOTA_TEAM_CUSTOM_8 = 0xd,
        DOTA_TEAM_DRAFT_POOL = 0xe,
        DOTA_TEAM_COUNT = 0xf,
        DOTA_TEAM_CUSTOM_MIN = 0x6,
        DOTA_TEAM_CUSTOM_MAX = 0xd,
        DOTA_TEAM_CUSTOM_COUNT = 0x8,
    };
};

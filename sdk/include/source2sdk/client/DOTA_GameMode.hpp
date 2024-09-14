#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 26
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_GameMode : std::uint32_t
    {
        DOTA_GAMEMODE_NONE = 0x0,
        DOTA_GAMEMODE_AP = 0x1,
        DOTA_GAMEMODE_CM = 0x2,
        DOTA_GAMEMODE_RD = 0x3,
        DOTA_GAMEMODE_SD = 0x4,
        DOTA_GAMEMODE_AR = 0x5,
        DOTA_GAMEMODE_INTRO = 0x6,
        DOTA_GAMEMODE_HW = 0x7,
        DOTA_GAMEMODE_REVERSE_CM = 0x8,
        DOTA_GAMEMODE_XMAS = 0x9,
        DOTA_GAMEMODE_TUTORIAL = 0xa,
        DOTA_GAMEMODE_MO = 0xb,
        DOTA_GAMEMODE_LP = 0xc,
        DOTA_GAMEMODE_POOL1 = 0xd,
        DOTA_GAMEMODE_FH = 0xe,
        DOTA_GAMEMODE_CUSTOM = 0xf,
        DOTA_GAMEMODE_CD = 0x10,
        DOTA_GAMEMODE_BD = 0x11,
        DOTA_GAMEMODE_ABILITY_DRAFT = 0x12,
        DOTA_GAMEMODE_EVENT = 0x13,
        DOTA_GAMEMODE_ARDM = 0x14,
        DOTA_GAMEMODE_1V1MID = 0x15,
        DOTA_GAMEMODE_ALL_DRAFT = 0x16,
        DOTA_GAMEMODE_TURBO = 0x17,
        DOTA_GAMEMODE_MUTATION = 0x18,
        DOTA_GAMEMODE_COACHES_CHALLENGE = 0x19,
    };
};

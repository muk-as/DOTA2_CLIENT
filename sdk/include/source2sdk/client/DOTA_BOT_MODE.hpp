#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 27
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_BOT_MODE : std::uint32_t
    {
        DOTA_BOT_MODE_NONE = 0x0,
        DOTA_BOT_MODE_LANING = 0x1,
        DOTA_BOT_MODE_ATTACK = 0x2,
        DOTA_BOT_MODE_ROAM = 0x3,
        DOTA_BOT_MODE_RETREAT = 0x4,
        DOTA_BOT_MODE_SECRET_SHOP = 0x5,
        DOTA_BOT_MODE_SIDE_SHOP = 0x6,
        DOTA_BOT_MODE_RUNE = 0x7,
        DOTA_BOT_MODE_PUSH_TOWER_TOP = 0x8,
        DOTA_BOT_MODE_PUSH_TOWER_MID = 0x9,
        DOTA_BOT_MODE_PUSH_TOWER_BOT = 0xa,
        DOTA_BOT_MODE_DEFEND_TOWER_TOP = 0xb,
        DOTA_BOT_MODE_DEFEND_TOWER_MID = 0xc,
        DOTA_BOT_MODE_DEFEND_TOWER_BOT = 0xd,
        DOTA_BOT_MODE_ASSEMBLE = 0xe,
        DOTA_BOT_MODE_ASSEMBLE_WITH_HUMANS = 0xf,
        DOTA_BOT_MODE_TEAM_ROAM = 0x10,
        DOTA_BOT_MODE_FARM = 0x11,
        DOTA_BOT_MODE_DEFEND_ALLY = 0x12,
        DOTA_BOT_MODE_EVASIVE_MANEUVERS = 0x13,
        DOTA_BOT_MODE_ROSHAN = 0x14,
        DOTA_BOT_MODE_ITEM = 0x15,
        DOTA_BOT_MODE_WARD = 0x16,
        DOTA_BOT_MODE_COMPANION = 0x17,
        DOTA_BOT_MODE_TUTORIAL_BOSS = 0x18,
        DOTA_BOT_MODE_MINION = 0x19,
        DOTA_BOT_MODE_OUTPOST = 0x1a,
    };
};

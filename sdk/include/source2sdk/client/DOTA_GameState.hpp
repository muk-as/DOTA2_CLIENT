#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 14
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_GameState : std::uint32_t
    {
        DOTA_GAMERULES_STATE_INIT = 0x0,
        DOTA_GAMERULES_STATE_WAIT_FOR_PLAYERS_TO_LOAD = 0x1,
        DOTA_GAMERULES_STATE_HERO_SELECTION = 0x2,
        DOTA_GAMERULES_STATE_STRATEGY_TIME = 0x3,
        DOTA_GAMERULES_STATE_PRE_GAME = 0x4,
        DOTA_GAMERULES_STATE_GAME_IN_PROGRESS = 0x5,
        DOTA_GAMERULES_STATE_POST_GAME = 0x6,
        DOTA_GAMERULES_STATE_DISCONNECT = 0x7,
        DOTA_GAMERULES_STATE_TEAM_SHOWCASE = 0x8,
        DOTA_GAMERULES_STATE_CUSTOM_GAME_SETUP = 0x9,
        DOTA_GAMERULES_STATE_WAIT_FOR_MAP_TO_LOAD = 0xa,
        DOTA_GAMERULES_STATE_SCENARIO_SETUP = 0xb,
        DOTA_GAMERULES_STATE_PLAYER_DRAFT = 0xc,
        DOTA_GAMERULES_STATE_LAST = 0xd,
    };
};

#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class DOTALimits_t : std::uint32_t
    {
        // MScriptDescription "Max number of players per team. Max number of players connected to the server including spectators."
        DOTA_MAX_PLAYERS = 0x40,
        // MScriptDescription "Max number of player teams supported. Max number of players per team."
        DOTA_MAX_TEAM = 0x18,
        // MScriptDescription "Max number of non-spectator players supported. Max number of player teams supported."
        DOTA_MAX_PLAYER_TEAMS = 0xa,
        // MScriptDescription "How many spectators can watch. Max number of non-spectator players supported."
        DOTA_MAX_TEAM_PLAYERS = 0x18,
        // MScriptDescription "Max number of viewers in a spectator lobby. How many spectators can watch."
        DOTA_MAX_SPECTATOR_TEAM_SIZE = 0x28,
        // MScriptDescription "Default number of players per team. Max number of viewers in a spectator lobby."
        DOTA_MAX_SPECTATOR_LOBBY_SIZE = 0xf,
        // MScriptDescription "Default number of non-spectator players supported. Default number of players per team."
        DOTA_DEFAULT_MAX_TEAM = 0x5,
        // MScriptDescription "Default number of non-spectator players supported."
        DOTA_DEFAULT_MAX_TEAM_PLAYERS = 0xa,
    };
};

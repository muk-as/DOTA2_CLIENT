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
    enum class DOTAJoinLobbyResult : std::uint32_t
    {
        DOTA_JOIN_RESULT_SUCCESS = 0x0,
        DOTA_JOIN_RESULT_ALREADY_IN_GAME = 0x1,
        DOTA_JOIN_RESULT_INVALID_LOBBY = 0x2,
        DOTA_JOIN_RESULT_INCORRECT_PASSWORD = 0x3,
        DOTA_JOIN_RESULT_ACCESS_DENIED = 0x4,
        DOTA_JOIN_RESULT_GENERIC_ERROR = 0x5,
        DOTA_JOIN_RESULT_INCORRECT_VERSION = 0x6,
        DOTA_JOIN_RESULT_IN_TEAM_PARTY = 0x7,
        DOTA_JOIN_RESULT_NO_LOBBY_FOUND = 0x8,
        DOTA_JOIN_RESULT_LOBBY_FULL = 0x9,
        DOTA_JOIN_RESULT_CUSTOM_GAME_INCORRECT_VERSION = 0xa,
        DOTA_JOIN_RESULT_TIMEOUT = 0xb,
        DOTA_JOIN_RESULT_CUSTOM_GAME_COOLDOWN = 0xc,
        DOTA_JOIN_RESULT_BUSY = 0xd,
        DOTA_JOIN_RESULT_NO_PLAYTIME = 0xe,
    };
};

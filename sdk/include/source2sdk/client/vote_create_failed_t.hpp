#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 16
    // Alignment: 4
    // Size: 0x4
    enum class vote_create_failed_t : std::uint32_t
    {
        VOTE_FAILED_GENERIC = 0x0,
        VOTE_FAILED_TRANSITIONING_PLAYERS = 0x1,
        VOTE_FAILED_RATE_EXCEEDED = 0x2,
        VOTE_FAILED_YES_MUST_EXCEED_NO = 0x3,
        VOTE_FAILED_QUORUM_FAILURE = 0x4,
        VOTE_FAILED_ISSUE_DISABLED = 0x5,
        VOTE_FAILED_MAP_NOT_FOUND = 0x6,
        VOTE_FAILED_MAP_NAME_REQUIRED = 0x7,
        VOTE_FAILED_FAILED_RECENTLY = 0x8,
        VOTE_FAILED_TEAM_CANT_CALL = 0x9,
        VOTE_FAILED_WAITINGFORPLAYERS = 0xa,
        VOTE_FAILED_PLAYERNOTFOUND = 0xb,
        VOTE_FAILED_CANNOT_KICK_ADMIN = 0xc,
        VOTE_FAILED_SCRAMBLE_IN_PROGRESS = 0xd,
        VOTE_FAILED_SPECTATOR = 0xe,
        VOTE_FAILED_MAX = 0xf,
    };
};

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
    enum class ETeamInviteResult : std::uint32_t
    {
        TEAM_INVITE_SUCCESS = 0x0,
        TEAM_INVITE_FAILURE_INVITE_REJECTED = 0x1,
        TEAM_INVITE_FAILURE_INVITE_TIMEOUT = 0x2,
        TEAM_INVITE_ERROR_TEAM_AT_MEMBER_LIMIT = 0x3,
        TEAM_INVITE_ERROR_TEAM_LOCKED = 0x4,
        TEAM_INVITE_ERROR_INVITEE_NOT_AVAILABLE = 0x5,
        TEAM_INVITE_ERROR_INVITEE_BUSY = 0x6,
        TEAM_INVITE_ERROR_INVITEE_ALREADY_MEMBER = 0x7,
        TEAM_INVITE_ERROR_INVITEE_AT_TEAM_LIMIT = 0x8,
        TEAM_INVITE_ERROR_INVITEE_INSUFFICIENT_PLAY_TIME = 0x9,
        TEAM_INVITE_ERROR_INVITER_INVALID_ACCOUNT_TYPE = 0xa,
        TEAM_INVITE_ERROR_INVITER_NOT_ADMIN = 0xb,
        TEAM_INVITE_ERROR_INCORRECT_USER_RESPONDED = 0xc,
        TEAM_INVITE_ERROR_UNSPECIFIED = 0xd,
    };
};

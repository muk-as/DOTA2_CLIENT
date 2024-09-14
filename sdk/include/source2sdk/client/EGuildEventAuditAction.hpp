#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 9
    // Alignment: 4
    // Size: 0x4
    enum class EGuildEventAuditAction : std::uint32_t
    {
        k_EGuildEventAuditAction_Invalid = 0x0,
        k_EGuildEventAuditAction_DevGrant = 0x1,
        k_EGuildEventAuditAction_CompleteContract = 0x2,
        k_EGuildEventAuditAction_CompleteChallenge = 0x3,
        k_EGuildEventAuditAction_CompleteMatch_Winner = 0x4,
        k_EGuildEventAuditAction_ChallengeProgress = 0x5,
        k_EGuildEventAuditAction_CompleteMatch_Loser = 0x6,
        k_EGuildEventAuditAction_WeeklyLeaderboard = 0x7,
        k_EGuildEventAuditAction_ManualGrant = 0x8,
    };
};

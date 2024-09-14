#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 17
    // Alignment: 4
    // Size: 0x4
    enum class EOverworldAuditAction : std::uint32_t
    {
        k_eOverworldAuditAction_Invalid = 0x0,
        k_eOverworldAuditAction_DevModifyTokens = 0x1,
        k_eOverworldAuditAction_DevClearInventory = 0x2,
        k_eOverworldAuditAction_DevGrantTokens = 0x3,
        k_eOverworldAuditAction_CompletePath = 0x4,
        k_eOverworldAuditAction_ClaimEncounterReward = 0x5,
        k_eOverworldAuditAction_DevResetNode = 0x6,
        k_eOverworldAuditAction_DevResetPath = 0x7,
        k_eOverworldAuditAction_MatchRewardsFull = 0x8,
        k_eOverworldAuditAction_MatchRewardsHalf = 0x9,
        k_eOverworldAuditAction_EventActionTokenGrant = 0xa,
        k_eOverworldAuditAction_TokenTraderLost = 0xb,
        k_eOverworldAuditAction_TokenTraderGained = 0xc,
        k_eOverworldAuditAction_EncounterRewardTokenCost = 0xd,
        k_eOverworldAuditAction_EncounterRewardTokenReward = 0xe,
        k_eOverworldAuditAction_SupportGrantTokens = 0x10,
        k_eOverworldAuditAction_TokenGiftSent = 0x11,
    };
};

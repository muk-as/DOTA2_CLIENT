#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 16
        // Alignment: 4
        // Size: 0x_
        enum class EMonsterHunterAuditAction : std::uint32_t
        {
            k_eMonsterHunterAuditAction_Invalid = 0x0,
            k_eMonsterHunterAuditAction_DevModifyMaterials = 0x1,
            k_eMonsterHunterAuditAction_DevGrantMaterials = 0x2,
            k_eMonsterHunterAuditAction_DevResetAll = 0x3,
            k_eMonsterHunterAuditAction_ClaimReward = 0x4,
            k_eMonsterHunterAuditAction_MatchRewardsWin = 0x5,
            k_eMonsterHunterAuditAction_MatchRewardsLose = 0x6,
            k_eMonsterHunterAuditAction_MaterialTraderLost = 0x7,
            k_eMonsterHunterAuditAction_MaterialTraderGained = 0x8,
            k_eMonsterHunterAuditAction_RewardMaterialCost = 0x9,
            k_eMonsterHunterAuditAction_SupportGrantMaterials = 0xa,
            k_eMonsterHunterAuditAction_MaterialGiftSent = 0xb,
            k_eMonsterHunterAuditAction_DevClaimInvestigationRewards = 0xc,
            k_eMonsterHunterAuditAction_HeroCodexUpdate = 0xd,
            k_eMonsterHunterAuditAction_EventActionReward = 0xe,
            k_eMonsterHunterAuditAction_AutoCraft = 0xf,
        };
    };
};

#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 22
    // Alignment: 4
    // Size: 0x4
    enum class EDOTA_ModifyGold_Reason : std::uint32_t
    {
        DOTA_ModifyGold_Unspecified = 0x0,
        DOTA_ModifyGold_Death = 0x1,
        DOTA_ModifyGold_Buyback = 0x2,
        DOTA_ModifyGold_PurchaseConsumable = 0x3,
        DOTA_ModifyGold_PurchaseItem = 0x4,
        DOTA_ModifyGold_AbandonedRedistribute = 0x5,
        DOTA_ModifyGold_SellItem = 0x6,
        DOTA_ModifyGold_AbilityCost = 0x7,
        DOTA_ModifyGold_CheatCommand = 0x8,
        DOTA_ModifyGold_SelectionPenalty = 0x9,
        DOTA_ModifyGold_GameTick = 0xa,
        DOTA_ModifyGold_Building = 0xb,
        DOTA_ModifyGold_HeroKill = 0xc,
        DOTA_ModifyGold_CreepKill = 0xd,
        DOTA_ModifyGold_NeutralKill = 0xe,
        DOTA_ModifyGold_RoshanKill = 0xf,
        DOTA_ModifyGold_CourierKill = 0x10,
        DOTA_ModifyGold_BountyRune = 0x11,
        DOTA_ModifyGold_SharedGold = 0x12,
        DOTA_ModifyGold_AbilityGold = 0x13,
        DOTA_ModifyGold_WardKill = 0x14,
        DOTA_ModifyGold_CourierKilledByThisPlayer = 0x15,
    };
};

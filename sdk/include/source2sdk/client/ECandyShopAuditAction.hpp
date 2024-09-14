#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 12
    // Alignment: 4
    // Size: 0x4
    enum class ECandyShopAuditAction : std::uint32_t
    {
        k_ECandyShopAuditAction_Invalid = 0x0,
        k_ECandyShopAuditAction_SupportModify = 0x1,
        k_ECandyShopAuditAction_PurchaseReward = 0x2,
        k_ECandyShopAuditAction_OpenBags = 0x3,
        k_ECandyShopAuditAction_RerollRewards = 0x4,
        k_ECandyShopAuditAction_DoVariableExchange = 0x5,
        k_ECandyShopAuditAction_DoExchange = 0x6,
        k_ECandyShopAuditAction_DEPRECATED_EventActionGrantInventorySizeIncrease = 0x7,
        k_ECandyShopAuditAction_EventActionGrantRerollChargesIncrease = 0x8,
        k_ECandyShopAuditAction_EventActionGrantUpgrade_InventorySize = 0x64,
        k_ECandyShopAuditAction_EventActionGrantUpgrade_RewardShelf = 0x65,
        k_ECandyShopAuditAction_EventActionGrantUpgrade_ExtraExchangeRecipe = 0x66,
    };
};

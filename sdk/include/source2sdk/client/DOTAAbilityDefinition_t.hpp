#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/DOTAOutgoingBonus_t.hpp"
#include "source2sdk/client/DotaGestureSlot_t.hpp"
#include "source2sdk/client/ItemQuality_t.hpp"
#include "source2sdk/client/ItemRecipe_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    struct DOTASpecialAbility_t;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: true
    // Size: 0x258
    #pragma pack(push, 1)
    struct DOTAAbilityDefinition_t
    {
    public:
        char* m_pszAbilityName; // 0x0        
        char* m_pszTextureName; // 0x8        
        char* m_pszSharedCooldownName; // 0x10        
        char* m_pszKeyOverride; // 0x18        
        char* m_pszItemRecipeName; // 0x20        
        char* m_pszLinkedAbility; // 0x28        
        int32_t m_castActivity; // 0x30        
        client::DotaGestureSlot_t m_castActivityGestureSlot; // 0x34        
        KeyValues* m_pKVData; // 0x38        
        client::AbilityID_t m_iAbilityID; // 0x40        
        int32_t m_iAbilityType; // 0x44        
        uint64_t m_iAbilityBehavior; // 0x48        
        int32_t m_iAbilityTargetTeam; // 0x50        
        int32_t m_iAbilityTargetType; // 0x54        
        int32_t m_iAbilityTargetFlags; // 0x58        
        int32_t m_iAbilityDamageType; // 0x5c        
        int32_t m_iAbilityImmunityType; // 0x60        
        int32_t m_iAbilityDispellableType; // 0x64        
        int32_t m_iFightRecapLevel; // 0x68        
        int32_t m_iTokenTier; // 0x6c        
        client::item_definition_index_t m_iAssociatedConsumableItemDef; // 0x70        
        uint32_t m_nRequiredEffectsMask; // 0x74        
        int32_t m_iAssociatedEventID; // 0x78        
        int32_t m_iMaxLevel; // 0x7c        
        int32_t m_iItemBaseLevel; // 0x80        
        float m_flItemLevelByGameTime; // 0x84        
        int32_t m_iItemCost; // 0x88        
        int32_t m_iItemInitialCharges; // 0x8c        
        int32_t m_iItemNeutralTierIndex; // 0x90        
        int32_t m_iItemStockMax; // 0x94        
        float m_fItemStockTime; // 0x98        
        [[maybe_unused]] std::uint8_t pad_0x9c[0x4]; // 0x9c
        int32* m_pItemShopTagKeys; // 0xa0        
        client::AbilityID_t m_nRecipeResultAbilityID; // 0xa8        
        [[maybe_unused]] std::uint8_t pad_0xac[0x4]; // 0xac
        // m_vecItemCombinesInto has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::AbilityID_t> m_vecItemCombinesInto;
        char m_vecItemCombinesInto[0x18]; // 0xb0        
        // m_vecItemRecipes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ItemRecipe_t> m_vecItemRecipes;
        char m_vecItemRecipes[0x18]; // 0xc8        
        int32_t m_nUpgradeGoal; // 0xe0        
        client::ItemQuality_t m_ItemQuality; // 0xe4        
        float m_flModifierValue; // 0xe8        
        float m_flModifierValueBonus; // 0xec        
        // m_InvalidHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_InvalidHeroes;
        char m_InvalidHeroes[0x18]; // 0xf0        
        [[maybe_unused]] std::uint8_t pad_0x108[0xcc]; // 0x108
        bool m_bHasScepterUpgrade; // 0x1d4        
        bool m_bHasShardUpgrade; // 0x1d5        
        bool m_bSharedWithTeammates; // 0x1d6        
        [[maybe_unused]] std::uint8_t pad_0x1d7[0x1]; // 0x1d7
        int32_t m_nCastRangeBuffer; // 0x1d8        
        int32_t m_nSpecialAbilities; // 0x1dc        
        client::DOTASpecialAbility_t* m_pSpecialAbilities; // 0x1e0        
        // m_OutgoingBonuses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::DOTAOutgoingBonus_t> m_OutgoingBonuses;
        char m_OutgoingBonuses[0x18]; // 0x1e8        
        char* m_pModelName; // 0x200        
        char* m_pModelAlternateName; // 0x208        
        char* m_pEffectName; // 0x210        
        char* m_pPingOverrideText; // 0x218        
        char* m_pszRequiredCustomShopName; // 0x220        
        char* m_pszLinkedScepterAbility; // 0x228        
        char* m_pszLinkedShardAbility; // 0x230        
        char* m_pszDependentOnAbility; // 0x238        
        int32_t m_nKillToastOverride; // 0x240        
        int32_t m_iLevelsBetweenUpgrades; // 0x244        
        int32_t m_iRequiredLevel; // 0x248        
        // start of bitfield block at 0x24c
        uint64_t m_bIsItem: 1;
        uint64_t m_bItemIsRecipe: 1;
        uint64_t m_bItemIsRecipeGenerated: 1;
        uint64_t m_bItemRecipeConsumesCharges: 1;
        uint64_t m_bItemAvailableAtSecretShop: 1;
        uint64_t m_bItemAvailableAtGlobalShop: 1;
        uint64_t m_bItemAvailableAtSideShop: 1;
        uint64_t m_bItemAvailableAtCustomShop: 1;
        uint64_t m_bItemIsPureSupport: 1;
        uint64_t m_bItemIsPurchasable: 1;
        uint64_t m_bItemIsUpgradeable: 1;
        uint64_t m_bItemStackable: 1;
        uint64_t m_bDisplayAdditionalHeroes: 1;
        uint64_t m_bItemContributesToNetWorthWhenDropped: 1;
        uint64_t m_bOnCastbar: 1;
        uint64_t m_bOnLearnbar: 1;
        uint64_t m_bIsGrantedByScepter: 1;
        uint64_t m_bIsGrantedByShard: 1;
        uint64_t m_bIsCastableWhileHidden: 1;
        uint64_t m_bAnimationIgnoresModelScale: 1;
        uint64_t m_bIsPlayerSpecificCooldown: 1;
        uint64_t m_bIsAllowedInBackpack: 1;
        uint64_t m_bIsObsolete: 1;
        uint64_t m_bItemRequiresCustomShop: 1;
        uint64_t m_bSuggestPregame: 1;
        uint64_t m_bSuggestEarlygame: 1;
        uint64_t m_bSuggestLategame: 1;
        uint64_t m_bIsAffectedByAoEIncrease: 1;
        uint64_t m_bHasCastAnimation: 1;
        uint64_t m_bItemHasPassive: 1;
        uint64_t m_bDisplayOverheadAlertOnReceived: 1;
        uint64_t m_bInnate: 1;
        uint64_t m_bIsSpeciallyAllowedInNeutralSlot: 1;
        uint64_t m_bIsSpeciallyBannedFromNeutralSlot: 1;
        uint64_t m_bIsCooldownPausedOutOfInventory: 1;
        uint64_t m_bAllowCombineFromGround: 1;
        uint64_t m_bRestrictToMaxLevel: 1;
        uint64_t m_bHasDynamicValue: 1;
        uint64_t m_bBreakable: 1;
        // end of bitfield block // 39 bits
        [[maybe_unused]] std::uint8_t pad_0x254[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DOTAAbilityDefinition_t, m_pszAbilityName) == 0x0);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_pszTextureName) == 0x8);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_pszSharedCooldownName) == 0x10);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_pszKeyOverride) == 0x18);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_pszItemRecipeName) == 0x20);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_pszLinkedAbility) == 0x28);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_castActivity) == 0x30);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_castActivityGestureSlot) == 0x34);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_pKVData) == 0x38);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iAbilityID) == 0x40);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iAbilityType) == 0x44);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iAbilityBehavior) == 0x48);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iAbilityTargetTeam) == 0x50);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iAbilityTargetType) == 0x54);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iAbilityTargetFlags) == 0x58);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iAbilityDamageType) == 0x5c);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iAbilityImmunityType) == 0x60);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iAbilityDispellableType) == 0x64);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iFightRecapLevel) == 0x68);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iTokenTier) == 0x6c);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iAssociatedConsumableItemDef) == 0x70);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_nRequiredEffectsMask) == 0x74);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iAssociatedEventID) == 0x78);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iMaxLevel) == 0x7c);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iItemBaseLevel) == 0x80);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_flItemLevelByGameTime) == 0x84);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iItemCost) == 0x88);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iItemInitialCharges) == 0x8c);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iItemNeutralTierIndex) == 0x90);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iItemStockMax) == 0x94);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_fItemStockTime) == 0x98);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_pItemShopTagKeys) == 0xa0);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_nRecipeResultAbilityID) == 0xa8);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_vecItemCombinesInto) == 0xb0);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_vecItemRecipes) == 0xc8);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_nUpgradeGoal) == 0xe0);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_ItemQuality) == 0xe4);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_flModifierValue) == 0xe8);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_flModifierValueBonus) == 0xec);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_InvalidHeroes) == 0xf0);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_bHasScepterUpgrade) == 0x1d4);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_bHasShardUpgrade) == 0x1d5);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_bSharedWithTeammates) == 0x1d6);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_nCastRangeBuffer) == 0x1d8);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_nSpecialAbilities) == 0x1dc);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_pSpecialAbilities) == 0x1e0);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_OutgoingBonuses) == 0x1e8);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_pModelName) == 0x200);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_pModelAlternateName) == 0x208);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_pEffectName) == 0x210);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_pPingOverrideText) == 0x218);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_pszRequiredCustomShopName) == 0x220);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_pszLinkedScepterAbility) == 0x228);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_pszLinkedShardAbility) == 0x230);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_pszDependentOnAbility) == 0x238);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_nKillToastOverride) == 0x240);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iLevelsBetweenUpgrades) == 0x244);
    static_assert(offsetof(DOTAAbilityDefinition_t, m_iRequiredLevel) == 0x248);
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsItem
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemIsRecipe
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemIsRecipeGenerated
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemRecipeConsumesCharges
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemAvailableAtSecretShop
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemAvailableAtGlobalShop
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemAvailableAtSideShop
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemAvailableAtCustomShop
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemIsPureSupport
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemIsPurchasable
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemIsUpgradeable
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemStackable
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bDisplayAdditionalHeroes
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemContributesToNetWorthWhenDropped
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bOnCastbar
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bOnLearnbar
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsGrantedByScepter
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsGrantedByShard
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsCastableWhileHidden
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bAnimationIgnoresModelScale
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsPlayerSpecificCooldown
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsAllowedInBackpack
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsObsolete
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemRequiresCustomShop
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bSuggestPregame
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bSuggestEarlygame
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bSuggestLategame
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsAffectedByAoEIncrease
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bHasCastAnimation
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemHasPassive
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bDisplayOverheadAlertOnReceived
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bInnate
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsSpeciallyAllowedInNeutralSlot
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsSpeciallyBannedFromNeutralSlot
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsCooldownPausedOutOfInventory
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bAllowCombineFromGround
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bRestrictToMaxLevel
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bHasDynamicValue
    // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bBreakable
    
    static_assert(sizeof(DOTAAbilityDefinition_t) == 0x258);
};

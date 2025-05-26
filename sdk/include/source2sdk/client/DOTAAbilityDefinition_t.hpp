#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ABILITY_TYPES.hpp"
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/DAMAGE_TYPES.hpp"
#include "source2sdk/client/DOTAOutgoingBonus_t.hpp"
#include "source2sdk/client/DOTA_ABILITY_BEHAVIOR.hpp"
#include "source2sdk/client/DOTA_UNIT_TARGET_FLAGS.hpp"
#include "source2sdk/client/DOTA_UNIT_TARGET_TEAM.hpp"
#include "source2sdk/client/DOTA_UNIT_TARGET_TYPE.hpp"
#include "source2sdk/client/DotaAbilityRelationship_t.hpp"
#include "source2sdk/client/DotaGestureSlot_t.hpp"
#include "source2sdk/client/ItemQuality_t.hpp"
#include "source2sdk/client/ItemRecipe_t.hpp"
#include "source2sdk/client/SPELL_DISPELLABLE_TYPES.hpp"
#include "source2sdk/client/SPELL_IMMUNITY_TYPES.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct DOTASpecialAbility_t;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: true
        // Size: 0x280
        #pragma pack(push, 1)
        struct DOTAAbilityDefinition_t
        {
        public:
            char* m_pszAbilityName; // 0x0            
            char* m_pszBaseAbilityName; // 0x8            
            char* m_pszTextureName; // 0x10            
            char* m_pszSharedCooldownName; // 0x18            
            char* m_pszKeyOverride; // 0x20            
            char* m_pszItemRecipeName; // 0x28            
            char* m_pszLinkedAbility; // 0x30            
            std::int32_t m_castActivity; // 0x38            
            source2sdk::client::DotaGestureSlot_t m_castActivityGestureSlot; // 0x3c            
            KeyValues* m_pKVData; // 0x40            
            source2sdk::client::AbilityID_t m_iAbilityID; // 0x48            
            source2sdk::client::ABILITY_TYPES m_iAbilityType; // 0x4c            
            source2sdk::client::DOTA_ABILITY_BEHAVIOR m_iAbilityBehavior; // 0x50            
            source2sdk::client::DOTA_UNIT_TARGET_TEAM m_iAbilityTargetTeam; // 0x58            
            source2sdk::client::DOTA_UNIT_TARGET_TYPE m_iAbilityTargetType; // 0x5c            
            source2sdk::client::DOTA_UNIT_TARGET_FLAGS m_iAbilityTargetFlags; // 0x60            
            source2sdk::client::DAMAGE_TYPES m_iAbilityDamageType; // 0x64            
            source2sdk::client::SPELL_IMMUNITY_TYPES m_iAbilityImmunityType; // 0x68            
            source2sdk::client::SPELL_DISPELLABLE_TYPES m_iAbilityDispellableType; // 0x6c            
            std::int32_t m_iFightRecapLevel; // 0x70            
            std::int32_t m_iTokenTier; // 0x74            
            source2sdk::client::item_definition_index_t m_iAssociatedConsumableItemDef; // 0x78            
            std::uint32_t m_nRequiredEffectsMask; // 0x7c            
            std::int32_t m_iAssociatedEventID; // 0x80            
            std::int32_t m_iMaxLevel; // 0x84            
            std::int32_t m_iItemBaseLevel; // 0x88            
            float m_flItemLevelByGameTime; // 0x8c            
            std::int32_t m_iItemCost; // 0x90            
            std::int32_t m_iItemInitialCharges; // 0x94            
            std::int32_t m_iItemNeutralTierIndex; // 0x98            
            std::int32_t m_iItemStockMax; // 0x9c            
            float m_fItemStockTime; // 0xa0            
            uint8_t _pad00a4[0x4]; // 0xa4
            std::uint32_t* m_pItemShopTagKeys; // 0xa8            
            std::int32_t m_nNumShopTagKeys; // 0xb0            
            source2sdk::client::AbilityID_t m_nRecipeResultAbilityID; // 0xb4            
            // m_vecItemCombinesInto has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AbilityID_t> m_vecItemCombinesInto;
            char m_vecItemCombinesInto[0x18]; // 0xb8            
            // m_vecItemRecipes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ItemRecipe_t> m_vecItemRecipes;
            char m_vecItemRecipes[0x18]; // 0xd0            
            std::int32_t m_nUpgradeGoal; // 0xe8            
            source2sdk::client::ItemQuality_t m_ItemQuality; // 0xec            
            float m_flModifierValue; // 0xf0            
            float m_flModifierValueBonus; // 0xf4            
            uint8_t _pad00f8[0xcc]; // 0xf8
            bool m_bHasScepterUpgrade; // 0x1c4            
            bool m_bHasShardUpgrade; // 0x1c5            
            uint8_t _pad01c6[0x2]; // 0x1c6
            CUtlStringToken m_strScepterRequiredFacet; // 0x1c8            
            CUtlStringToken m_strShardRequiredFacet; // 0x1cc            
            bool m_bSharedWithTeammates; // 0x1d0            
            uint8_t _pad01d1[0x3]; // 0x1d1
            std::int32_t m_nCastRangeBuffer; // 0x1d4            
            std::int32_t m_nSpecialAbilities; // 0x1d8            
            uint8_t _pad01dc[0x4]; // 0x1dc
            source2sdk::client::DOTASpecialAbility_t* m_pSpecialAbilities; // 0x1e0            
            // m_OutgoingBonuses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::DOTAOutgoingBonus_t> m_OutgoingBonuses;
            char m_OutgoingBonuses[0x18]; // 0x1e8            
            // m_mapRelationships has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlStringToken,source2sdk::client::DotaAbilityRelationship_t> m_mapRelationships;
            char m_mapRelationships[0x28]; // 0x200            
            char* m_pModelName; // 0x228            
            char* m_pModelAlternateName; // 0x230            
            char* m_pEffectName; // 0x238            
            char* m_pPingOverrideText; // 0x240            
            char* m_pszRequiredCustomShopName; // 0x248            
            char* m_pszLinkedScepterAbility; // 0x250            
            char* m_pszLinkedShardAbility; // 0x258            
            char* m_pszDependentOnAbility; // 0x260            
            std::int32_t m_nKillToastOverride; // 0x268            
            std::int32_t m_iLevelsBetweenUpgrades; // 0x26c            
            std::int32_t m_iRequiredLevel; // 0x270            
            // start of bitfield block
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
            uint64_t m_bSuggestNotMaingame: 1;
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
            uint64_t m_bActiveNeutral: 1;
            uint64_t m_bPassiveNeutral: 1;
            // end of bitfield block// 42 bits
            uint8_t _pad027c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszAbilityName) == 0x0);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszBaseAbilityName) == 0x8);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszTextureName) == 0x10);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszSharedCooldownName) == 0x18);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszKeyOverride) == 0x20);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszItemRecipeName) == 0x28);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszLinkedAbility) == 0x30);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_castActivity) == 0x38);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_castActivityGestureSlot) == 0x3c);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pKVData) == 0x40);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityID) == 0x48);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityType) == 0x4c);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityBehavior) == 0x50);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityTargetTeam) == 0x58);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityTargetType) == 0x5c);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityTargetFlags) == 0x60);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityDamageType) == 0x64);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityImmunityType) == 0x68);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityDispellableType) == 0x6c);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iFightRecapLevel) == 0x70);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iTokenTier) == 0x74);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAssociatedConsumableItemDef) == 0x78);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nRequiredEffectsMask) == 0x7c);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAssociatedEventID) == 0x80);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iMaxLevel) == 0x84);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iItemBaseLevel) == 0x88);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_flItemLevelByGameTime) == 0x8c);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iItemCost) == 0x90);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iItemInitialCharges) == 0x94);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iItemNeutralTierIndex) == 0x98);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iItemStockMax) == 0x9c);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_fItemStockTime) == 0xa0);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pItemShopTagKeys) == 0xa8);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nNumShopTagKeys) == 0xb0);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nRecipeResultAbilityID) == 0xb4);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_vecItemCombinesInto) == 0xb8);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_vecItemRecipes) == 0xd0);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nUpgradeGoal) == 0xe8);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_ItemQuality) == 0xec);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_flModifierValue) == 0xf0);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_flModifierValueBonus) == 0xf4);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_bHasScepterUpgrade) == 0x1c4);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_bHasShardUpgrade) == 0x1c5);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_strScepterRequiredFacet) == 0x1c8);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_strShardRequiredFacet) == 0x1cc);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_bSharedWithTeammates) == 0x1d0);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nCastRangeBuffer) == 0x1d4);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nSpecialAbilities) == 0x1d8);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pSpecialAbilities) == 0x1e0);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_OutgoingBonuses) == 0x1e8);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_mapRelationships) == 0x200);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pModelName) == 0x228);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pModelAlternateName) == 0x230);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pEffectName) == 0x238);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pPingOverrideText) == 0x240);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszRequiredCustomShopName) == 0x248);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszLinkedScepterAbility) == 0x250);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszLinkedShardAbility) == 0x258);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszDependentOnAbility) == 0x260);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nKillToastOverride) == 0x268);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iLevelsBetweenUpgrades) == 0x26c);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iRequiredLevel) == 0x270);
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
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bSuggestNotMaingame
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
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bActiveNeutral
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bPassiveNeutral
        
        static_assert(sizeof(source2sdk::client::DOTAAbilityDefinition_t) == 0x280);
    };
};

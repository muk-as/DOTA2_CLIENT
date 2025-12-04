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
        // Size: 0x_
        #pragma pack(push, 1)
        struct DOTAAbilityDefinition_t
        {
        public:
            char* m_pszAbilityName; // 0x_            
            char* m_pszBaseAbilityName; // 0x_            
            char* m_pszTextureName; // 0x_            
            char* m_pszSharedCooldownName; // 0x_            
            char* m_pszKeyOverride; // 0x_            
            char* m_pszItemRecipeName; // 0x_            
            char* m_pszLinkedAbility; // 0x_            
            std::int32_t m_castActivity; // 0x_            
            source2sdk::client::DotaGestureSlot_t m_castActivityGestureSlot; // 0x_            
            KeyValues* m_pKVData; // 0x_            
            source2sdk::client::AbilityID_t m_iAbilityID; // 0x_            
            source2sdk::client::ABILITY_TYPES m_iAbilityType; // 0x_            
            source2sdk::client::DOTA_ABILITY_BEHAVIOR m_iAbilityBehavior; // 0x_            
            source2sdk::client::DOTA_UNIT_TARGET_TEAM m_iAbilityTargetTeam; // 0x_            
            source2sdk::client::DOTA_UNIT_TARGET_TYPE m_iAbilityTargetType; // 0x_            
            source2sdk::client::DOTA_UNIT_TARGET_FLAGS m_iAbilityTargetFlags; // 0x_            
            source2sdk::client::DAMAGE_TYPES m_iAbilityDamageType; // 0x_            
            source2sdk::client::SPELL_IMMUNITY_TYPES m_iAbilityImmunityType; // 0x_            
            source2sdk::client::SPELL_DISPELLABLE_TYPES m_iAbilityDispellableType; // 0x_            
            std::int32_t m_iFightRecapLevel; // 0x_            
            std::int32_t m_iTokenTier; // 0x_            
            source2sdk::client::item_definition_index_t m_iAssociatedConsumableItemDef; // 0x_            
            std::uint32_t m_nRequiredEffectsMask; // 0x_            
            std::int32_t m_iAssociatedEventID; // 0x_            
            std::int32_t m_iMaxLevel; // 0x_            
            std::int32_t m_iItemBaseLevel; // 0x_            
            float m_flItemLevelByGameTime; // 0x_            
            std::int32_t m_iItemCost; // 0x_            
            std::int32_t m_iItemInitialCharges; // 0x_            
            std::int32_t m_iItemNeutralTierIndex; // 0x_            
            std::int32_t m_iItemStockMax; // 0x_            
            float m_fItemStockTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint32_t* m_pItemShopTagKeys; // 0x_            
            std::int32_t m_nNumShopTagKeys; // 0x_            
            source2sdk::client::AbilityID_t m_nRecipeResultAbilityID; // 0x_            
            // m_vecItemCombinesInto has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AbilityID_t> m_vecItemCombinesInto;
            char m_vecItemCombinesInto[0x_]; // 0x_            
            // m_vecItemRecipes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ItemRecipe_t> m_vecItemRecipes;
            char m_vecItemRecipes[0x_]; // 0x_            
            std::int32_t m_nUpgradeGoal; // 0x_            
            source2sdk::client::ItemQuality_t m_ItemQuality; // 0x_            
            float m_flModifierValue; // 0x_            
            float m_flModifierValueBonus; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bHasScepterUpgrade; // 0x_            
            bool m_bHasShardUpgrade; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlStringToken m_strScepterRequiredFacet; // 0x_            
            CUtlStringToken m_strShardRequiredFacet; // 0x_            
            bool m_bSharedWithTeammates; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nCastRangeBuffer; // 0x_            
            std::int32_t m_nSpecialAbilities; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::DOTASpecialAbility_t* m_pSpecialAbilities; // 0x_            
            // m_OutgoingBonuses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::DOTAOutgoingBonus_t> m_OutgoingBonuses;
            char m_OutgoingBonuses[0x_]; // 0x_            
            // m_mapRelationships has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlStringToken,source2sdk::client::DotaAbilityRelationship_t> m_mapRelationships;
            char m_mapRelationships[0x_]; // 0x_            
            char* m_pModelName; // 0x_            
            char* m_pModelAlternateName; // 0x_            
            char* m_pEffectName; // 0x_            
            char* m_pPingOverrideText; // 0x_            
            char* m_pszRequiredCustomShopName; // 0x_            
            char* m_pszLinkedScepterAbility; // 0x_            
            char* m_pszLinkedShardAbility; // 0x_            
            char* m_pszDependentOnAbility; // 0x_            
            std::int32_t m_nKillToastOverride; // 0x_            
            std::int32_t m_iLevelsBetweenUpgrades; // 0x_            
            std::int32_t m_iRequiredLevel; // 0x_            
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
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszAbilityName) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszBaseAbilityName) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszTextureName) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszSharedCooldownName) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszKeyOverride) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszItemRecipeName) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszLinkedAbility) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_castActivity) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_castActivityGestureSlot) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pKVData) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityID) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityType) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityBehavior) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityTargetTeam) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityTargetType) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityTargetFlags) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityDamageType) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityImmunityType) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityDispellableType) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iFightRecapLevel) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iTokenTier) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAssociatedConsumableItemDef) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nRequiredEffectsMask) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAssociatedEventID) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iMaxLevel) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iItemBaseLevel) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_flItemLevelByGameTime) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iItemCost) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iItemInitialCharges) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iItemNeutralTierIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iItemStockMax) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_fItemStockTime) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pItemShopTagKeys) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nNumShopTagKeys) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nRecipeResultAbilityID) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_vecItemCombinesInto) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_vecItemRecipes) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nUpgradeGoal) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_ItemQuality) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_flModifierValue) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_flModifierValueBonus) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_bHasScepterUpgrade) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_bHasShardUpgrade) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_strScepterRequiredFacet) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_strShardRequiredFacet) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_bSharedWithTeammates) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nCastRangeBuffer) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nSpecialAbilities) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pSpecialAbilities) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_OutgoingBonuses) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_mapRelationships) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pModelName) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pModelAlternateName) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pEffectName) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pPingOverrideText) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszRequiredCustomShopName) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszLinkedScepterAbility) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszLinkedShardAbility) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pszDependentOnAbility) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nKillToastOverride) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iLevelsBetweenUpgrades) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iRequiredLevel) == 0x_);
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
        
        static_assert(sizeof(source2sdk::client::DOTAAbilityDefinition_t) == 0x_);
    };
};

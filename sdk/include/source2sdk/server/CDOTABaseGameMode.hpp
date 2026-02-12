#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/HeroFacetID_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CDOTACustomShopInfo.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "CUtlString m_ForcedHUDSkin"
        // static metadata: MNetworkVarNames "HeroID_t m_nCustomGameForceHeroSelectionId"
        // static metadata: MNetworkVarNames "HeroFacetID_t m_nCustomGameForceHeroVariant"
        // static metadata: MNetworkVarNames "bool m_bAlwaysShowPlayerInventory"
        // static metadata: MNetworkVarNames "bool m_bGoldSoundDisabled"
        // static metadata: MNetworkVarNames "bool m_bRecommendedItemsDisabled"
        // static metadata: MNetworkVarNames "bool m_bStickyItemDisabled"
        // static metadata: MNetworkVarNames "bool m_bStashPurchasingDisabled"
        // static metadata: MNetworkVarNames "bool m_bFogOfWarDisabled"
        // static metadata: MNetworkVarNames "bool m_bUseUnseenFOW"
        // static metadata: MNetworkVarNames "bool m_bUseCustomBuybackCost"
        // static metadata: MNetworkVarNames "bool m_bUseCustomBuybackCooldown"
        // static metadata: MNetworkVarNames "bool m_bBuybackEnabled"
        // static metadata: MNetworkVarNames "bool m_bUseTurboCouriers"
        // static metadata: MNetworkVarNames "float m_flCameraDistanceOverride"
        // static metadata: MNetworkVarNames "int m_nCameraSmoothCountOverride"
        // static metadata: MNetworkVarNames "CHandle<CDOTA_BaseNPC> m_hOverrideSelectionEntity"
        // static metadata: MNetworkVarNames "bool m_bTopBarTeamValuesOverride"
        // static metadata: MNetworkVarNames "bool m_bTopBarTeamValuesVisible"
        // static metadata: MNetworkVarNames "int m_nTeamGoodGuysTopBarValue"
        // static metadata: MNetworkVarNames "int m_nTeamBadGuysTopBarValue"
        // static metadata: MNetworkVarNames "bool m_bAlwaysShowPlayerNames"
        // static metadata: MNetworkVarNames "bool m_bUseCustomHeroLevels"
        // static metadata: MNetworkVarNames "int m_nCustomXPRequiredToReachNextLevel"
        // static metadata: MNetworkVarNames "bool m_bTowerBackdoorProtectionEnabled"
        // static metadata: MNetworkVarNames "bool m_bBotThinkingEnabled"
        // static metadata: MNetworkVarNames "bool m_bAnnouncerDisabled"
        // static metadata: MNetworkVarNames "bool m_bAnnouncerGameModeAnnounceDisabled"
        // static metadata: MNetworkVarNames "bool m_bDeathTipsDisabled"
        // static metadata: MNetworkVarNames "bool m_bFilterPlayerHeroAvailability"
        // static metadata: MNetworkVarNames "bool m_bKillingSpreeAnnouncerDisabled"
        // static metadata: MNetworkVarNames "float m_flFixedRespawnTime"
        // static metadata: MNetworkVarNames "float m_flBuybackCostScale"
        // static metadata: MNetworkVarNames "float m_flRespawnTimeScale"
        // static metadata: MNetworkVarNames "bool m_bLoseGoldOnDeath"
        // static metadata: MNetworkVarNames "bool m_bKillableTombstones"
        // static metadata: MNetworkVarNames "uint32 m_nHUDVisibilityBits"
        // static metadata: MNetworkVarNames "float m_flMinimumAttackSpeed"
        // static metadata: MNetworkVarNames "float m_flMaximumAttackSpeed"
        // static metadata: MNetworkVarNames "bool m_bIsDaynightCycleDisabled"
        // static metadata: MNetworkVarNames "float m_flDaynightCycleAdvanceRate"
        // static metadata: MNetworkVarNames "bool m_bAreWeatherEffectsDisabled"
        // static metadata: MNetworkVarNames "bool m_bDisableHudFlip"
        // static metadata: MNetworkVarNames "bool m_bEnableFriendlyBuildingMoveTo"
        // static metadata: MNetworkVarNames "bool m_bIsDeathOverlayDisabled"
        // static metadata: MNetworkVarNames "bool m_bIsHudCombatEventsDisabled"
        // static metadata: MNetworkVarNames "CUtlString m_strDefaultStickyItem"
        // static metadata: MNetworkVarNames "CUtlString m_sCustomTerrainWeatherEffect"
        // static metadata: MNetworkVarNames "CUtlString m_strTPScrollSlotItemOverride"
        // static metadata: MNetworkVarNames "float m_flStrengthDamage"
        // static metadata: MNetworkVarNames "float m_flStrengthHP"
        // static metadata: MNetworkVarNames "float m_flStrengthHPRegen"
        // static metadata: MNetworkVarNames "float m_flAgilityDamage"
        // static metadata: MNetworkVarNames "float m_flAgilityArmor"
        // static metadata: MNetworkVarNames "float m_flAgilityAttackSpeed"
        // static metadata: MNetworkVarNames "float m_flAgilityMovementSpeedPercent"
        // static metadata: MNetworkVarNames "float m_flIntelligenceDamage"
        // static metadata: MNetworkVarNames "float m_flIntelligenceMana"
        // static metadata: MNetworkVarNames "float m_flIntelligenceManaRegen"
        // static metadata: MNetworkVarNames "float m_flIntelligenceMres"
        // static metadata: MNetworkVarNames "float m_flIntelligenceSpellAmpPercent"
        // static metadata: MNetworkVarNames "float m_flStrengthMagicResistancePercent"
        // static metadata: MNetworkVarNames "float m_flAttributeAllDamage"
        // static metadata: MNetworkVarNames "float m_flDraftingHeroPickSelectTimeOverride"
        // static metadata: MNetworkVarNames "float m_flDraftingBanningTimeOverride"
        // static metadata: MNetworkVarNames "bool m_bPauseEnabled"
        // static metadata: MNetworkVarNames "int m_iCustomScanMaxCharges"
        // static metadata: MNetworkVarNames "float m_flCustomScanCooldown"
        // static metadata: MNetworkVarNames "float m_flCustomGlyphCooldown"
        // static metadata: MNetworkVarNames "float m_flCustomBackpackSwapCooldown"
        // static metadata: MNetworkVarNames "float m_flCustomBackpackCooldownPercent"
        // static metadata: MNetworkVarNames "bool m_bDefaultRuneSpawnLogic"
        // static metadata: MNetworkVarNames "bool m_bEnableFreeCourierMode"
        // static metadata: MNetworkVarNames "bool m_bAllowNeutralItemDrops"
        // static metadata: MNetworkVarNames "bool m_bEnableNeutralStash"
        // static metadata: MNetworkVarNames "bool m_bEnableNeutralStashTeamViewOnly"
        // static metadata: MNetworkVarNames "bool m_bEnableNeutralItemHideUndiscovered"
        // static metadata: MNetworkVarNames "bool m_bEnableSendToStash"
        // static metadata: MNetworkVarNames "bool m_bForceRightClickAttackDisabled"
        // static metadata: MNetworkVarNames "CDOTACustomShopInfo m_vecCustomShopInfo"
        // static metadata: MNetworkVarNames "bool m_bCanSellAnywhere"
        // static metadata: MNetworkVarNames "float m_flCameraNearZ"
        // static metadata: MNetworkVarNames "float m_flCameraFarZ"
        // static metadata: MNetworkVarNames "int m_nCustomRadiantScore"
        // static metadata: MNetworkVarNames "int m_nCustomDireScore"
        // static metadata: MNetworkVarNames "bool m_bAbilityUpgradeWhitelistEnabled"
        // static metadata: MNetworkVarNames "AbilityID_t m_vecAbilityUpgradeWhitelist"
        // static metadata: MNetworkVarNames "bool m_bGiveFreeTPOnDeath"
        // static metadata: MNetworkVarNames "int m_nInnateMeleeDamageBlockPct"
        // static metadata: MNetworkVarNames "int m_nInnateMeleeDamageBlockAmount"
        // static metadata: MNetworkVarNames "int m_nInnateMeleeDamageBlockPerLevelAmount"
        // static metadata: MNetworkVarNames "float m_flWaterRuneSpawnInterval"
        // static metadata: MNetworkVarNames "CHandle< CDOTA_BaseNPC > m_vecBigHealthBarUnits"
        #pragma pack(push, 1)
        class CDOTABaseGameMode : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnForcedHUDSkinChanged"
            CUtlString m_ForcedHUDSkin; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_nCustomGameForceHeroSelectionId; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::HeroFacetID_t m_nCustomGameForceHeroVariant; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAlwaysShowPlayerInventory; // 0x_            
            // metadata: MNetworkEnable
            bool m_bGoldSoundDisabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bRecommendedItemsDisabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bStickyItemDisabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bStashPurchasingDisabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bFogOfWarDisabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUseUnseenFOW; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUseCustomBuybackCost; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUseCustomBuybackCooldown; // 0x_            
            // metadata: MNetworkEnable
            bool m_bBuybackEnabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUseTurboCouriers; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flCameraDistanceOverride; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nCameraSmoothCountOverride; // 0x_            
            // metadata: MNetworkEnable
            // m_hOverrideSelectionEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hOverrideSelectionEntity;
            char m_hOverrideSelectionEntity[0x_]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bTopBarTeamValuesOverride; // 0x_            
            // metadata: MNetworkEnable
            bool m_bTopBarTeamValuesVisible; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nTeamGoodGuysTopBarValue; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nTeamBadGuysTopBarValue; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAlwaysShowPlayerNames; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUseCustomHeroLevels; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_nCustomXPRequiredToReachNextLevel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::int32_t> m_nCustomXPRequiredToReachNextLevel;
            char m_nCustomXPRequiredToReachNextLevel[0x_]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bTowerBackdoorProtectionEnabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bBotThinkingEnabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAnnouncerDisabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAnnouncerGameModeAnnounceDisabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bDeathTipsDisabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bFilterPlayerHeroAvailability; // 0x_            
            // metadata: MNetworkEnable
            bool m_bKillingSpreeAnnouncerDisabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flFixedRespawnTime; // 0x_            
            // metadata: MNetworkEnable
            float m_flBuybackCostScale; // 0x_            
            // metadata: MNetworkEnable
            float m_flRespawnTimeScale; // 0x_            
            // metadata: MNetworkEnable
            bool m_bLoseGoldOnDeath; // 0x_            
            // metadata: MNetworkEnable
            bool m_bKillableTombstones; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint32_t m_nHUDVisibilityBits; // 0x_            
            // metadata: MNetworkEnable
            float m_flMinimumAttackSpeed; // 0x_            
            // metadata: MNetworkEnable
            float m_flMaximumAttackSpeed; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsDaynightCycleDisabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flDaynightCycleAdvanceRate; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAreWeatherEffectsDisabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bDisableHudFlip; // 0x_            
            // metadata: MNetworkEnable
            bool m_bEnableFriendlyBuildingMoveTo; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsDeathOverlayDisabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsHudCombatEventsDisabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            CUtlString m_strDefaultStickyItem; // 0x_            
            // metadata: MNetworkEnable
            CUtlString m_sCustomTerrainWeatherEffect; // 0x_            
            // metadata: MNetworkEnable
            CUtlString m_strTPScrollSlotItemOverride; // 0x_            
            // metadata: MNetworkEnable
            float m_flStrengthDamage; // 0x_            
            // metadata: MNetworkEnable
            float m_flStrengthHP; // 0x_            
            // metadata: MNetworkEnable
            float m_flStrengthHPRegen; // 0x_            
            // metadata: MNetworkEnable
            float m_flAgilityDamage; // 0x_            
            // metadata: MNetworkEnable
            float m_flAgilityArmor; // 0x_            
            // metadata: MNetworkEnable
            float m_flAgilityAttackSpeed; // 0x_            
            // metadata: MNetworkEnable
            float m_flAgilityMovementSpeedPercent; // 0x_            
            // metadata: MNetworkEnable
            float m_flIntelligenceDamage; // 0x_            
            // metadata: MNetworkEnable
            float m_flIntelligenceMana; // 0x_            
            // metadata: MNetworkEnable
            float m_flIntelligenceManaRegen; // 0x_            
            // metadata: MNetworkEnable
            float m_flIntelligenceMres; // 0x_            
            // metadata: MNetworkEnable
            float m_flIntelligenceSpellAmpPercent; // 0x_            
            // metadata: MNetworkEnable
            float m_flStrengthMagicResistancePercent; // 0x_            
            // metadata: MNetworkEnable
            float m_flAttributeAllDamage; // 0x_            
            // metadata: MNetworkEnable
            float m_flDraftingHeroPickSelectTimeOverride; // 0x_            
            // metadata: MNetworkEnable
            float m_flDraftingBanningTimeOverride; // 0x_            
            // metadata: MNetworkEnable
            bool m_bPauseEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_iCustomScanMaxCharges; // 0x_            
            // metadata: MNetworkEnable
            float m_flCustomScanCooldown; // 0x_            
            // metadata: MNetworkEnable
            float m_flCustomGlyphCooldown; // 0x_            
            // metadata: MNetworkEnable
            float m_flCustomBackpackSwapCooldown; // 0x_            
            // metadata: MNetworkEnable
            float m_flCustomBackpackCooldownPercent; // 0x_            
            // metadata: MNetworkEnable
            bool m_bDefaultRuneSpawnLogic; // 0x_            
            // metadata: MNetworkEnable
            bool m_bEnableFreeCourierMode; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAllowNeutralItemDrops; // 0x_            
            // metadata: MNetworkEnable
            bool m_bEnableNeutralStash; // 0x_            
            // metadata: MNetworkEnable
            bool m_bEnableNeutralStashTeamViewOnly; // 0x_            
            // metadata: MNetworkEnable
            bool m_bEnableNeutralItemHideUndiscovered; // 0x_            
            // metadata: MNetworkEnable
            bool m_bEnableSendToStash; // 0x_            
            // metadata: MNetworkEnable
            bool m_bForceRightClickAttackDisabled; // 0x_            
            // metadata: MNetworkEnable
            // m_vecCustomShopInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTACustomShopInfo> m_vecCustomShopInfo;
            char m_vecCustomShopInfo[0x_]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCanSellAnywhere; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flCameraNearZ; // 0x_            
            // metadata: MNetworkEnable
            float m_flCameraFarZ; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nCustomRadiantScore; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nCustomDireScore; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAbilityUpgradeWhitelistEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_vecAbilityUpgradeWhitelist has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::AbilityID_t> m_vecAbilityUpgradeWhitelist;
            char m_vecAbilityUpgradeWhitelist[0x_]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bGiveFreeTPOnDeath; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nInnateMeleeDamageBlockPct; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nInnateMeleeDamageBlockAmount; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nInnateMeleeDamageBlockPerLevelAmount; // 0x_            
            // metadata: MNetworkEnable
            float m_flWaterRuneSpawnInterval; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_vecBigHealthBarUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_vecBigHealthBarUnits;
            char m_vecBigHealthBarUnits[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bSelectionGoldPenaltyEnabled; // 0x_            
            bool m_bRemoveIllusionsOnDeath; // 0x_            
            bool m_bRandomHeroBonusItemGrantDisabled; // 0x_            
            bool m_bDisableClumpingBehaviorByDefault; // 0x_            
            bool m_bRuneTypeEnabled[10]; // 0x_            
            bool m_bOverrideBotLateGame; // 0x_            
            bool m_bBotsAlwaysPushWithHuman; // 0x_            
            bool m_bBotsInLateGame; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nBotMaxPushTier; // 0x_            
            float m_flFountainPercentageHealthRegen; // 0x_            
            float m_flFountainPercentageManaRegen; // 0x_            
            float m_flFountainConstantManaRegen; // 0x_            
            float m_flPowerRuneSpawnInterval; // 0x_            
            float m_flBountyRuneSpawnInterval; // 0x_            
            float m_flXPRuneSpawnInterval; // 0x_            
            float m_flThinkInterval; // 0x_            
            std::int32_t m_nForcedHeroCapOnReset; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTABaseGameMode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTABaseGameMode) == 0x_);
    };
};

#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/CDOTACustomShopInfo.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/HeroFacetID_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_DOTA_BaseNPC;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x6f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
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
    // static metadata: MNetworkVarNames "CHandle< C_DOTA_BaseNPC > m_vecBigHealthBarUnits"
    #pragma pack(push, 1)
    class C_DOTABaseGameMode : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnForcedHUDSkinChanged"
        CUtlString m_ForcedHUDSkin; // 0x538        
        // metadata: MNetworkEnable
        client::HeroID_t m_nCustomGameForceHeroSelectionId; // 0x540        
        // metadata: MNetworkEnable
        client::HeroFacetID_t m_nCustomGameForceHeroVariant; // 0x544        
        // metadata: MNetworkEnable
        bool m_bAlwaysShowPlayerInventory; // 0x548        
        // metadata: MNetworkEnable
        bool m_bGoldSoundDisabled; // 0x549        
        // metadata: MNetworkEnable
        bool m_bRecommendedItemsDisabled; // 0x54a        
        // metadata: MNetworkEnable
        bool m_bStickyItemDisabled; // 0x54b        
        // metadata: MNetworkEnable
        bool m_bStashPurchasingDisabled; // 0x54c        
        // metadata: MNetworkEnable
        bool m_bFogOfWarDisabled; // 0x54d        
        // metadata: MNetworkEnable
        bool m_bUseUnseenFOW; // 0x54e        
        // metadata: MNetworkEnable
        bool m_bUseCustomBuybackCost; // 0x54f        
        // metadata: MNetworkEnable
        bool m_bUseCustomBuybackCooldown; // 0x550        
        // metadata: MNetworkEnable
        bool m_bBuybackEnabled; // 0x551        
        // metadata: MNetworkEnable
        bool m_bUseTurboCouriers; // 0x552        
        [[maybe_unused]] std::uint8_t pad_0x553[0x1]; // 0x553
        // metadata: MNetworkEnable
        float m_flCameraDistanceOverride; // 0x554        
        // metadata: MNetworkEnable
        int32_t m_nCameraSmoothCountOverride; // 0x558        
        // metadata: MNetworkEnable
        // m_hOverrideSelectionEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTA_BaseNPC> m_hOverrideSelectionEntity;
        char m_hOverrideSelectionEntity[0x4]; // 0x55c        
        // metadata: MNetworkEnable
        bool m_bTopBarTeamValuesOverride; // 0x560        
        // metadata: MNetworkEnable
        bool m_bTopBarTeamValuesVisible; // 0x561        
        [[maybe_unused]] std::uint8_t pad_0x562[0x2]; // 0x562
        // metadata: MNetworkEnable
        int32_t m_nTeamGoodGuysTopBarValue; // 0x564        
        // metadata: MNetworkEnable
        int32_t m_nTeamBadGuysTopBarValue; // 0x568        
        // metadata: MNetworkEnable
        bool m_bAlwaysShowPlayerNames; // 0x56c        
        // metadata: MNetworkEnable
        bool m_bUseCustomHeroLevels; // 0x56d        
        [[maybe_unused]] std::uint8_t pad_0x56e[0x2]; // 0x56e
        // metadata: MNetworkEnable
        // m_nCustomXPRequiredToReachNextLevel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<int32_t> m_nCustomXPRequiredToReachNextLevel;
        char m_nCustomXPRequiredToReachNextLevel[0x18]; // 0x570        
        // metadata: MNetworkEnable
        bool m_bTowerBackdoorProtectionEnabled; // 0x588        
        // metadata: MNetworkEnable
        bool m_bBotThinkingEnabled; // 0x589        
        // metadata: MNetworkEnable
        bool m_bAnnouncerDisabled; // 0x58a        
        // metadata: MNetworkEnable
        bool m_bAnnouncerGameModeAnnounceDisabled; // 0x58b        
        // metadata: MNetworkEnable
        bool m_bDeathTipsDisabled; // 0x58c        
        // metadata: MNetworkEnable
        bool m_bFilterPlayerHeroAvailability; // 0x58d        
        // metadata: MNetworkEnable
        bool m_bKillingSpreeAnnouncerDisabled; // 0x58e        
        [[maybe_unused]] std::uint8_t pad_0x58f[0x1]; // 0x58f
        // metadata: MNetworkEnable
        float m_flFixedRespawnTime; // 0x590        
        // metadata: MNetworkEnable
        float m_flBuybackCostScale; // 0x594        
        // metadata: MNetworkEnable
        float m_flRespawnTimeScale; // 0x598        
        // metadata: MNetworkEnable
        bool m_bLoseGoldOnDeath; // 0x59c        
        // metadata: MNetworkEnable
        bool m_bKillableTombstones; // 0x59d        
        [[maybe_unused]] std::uint8_t pad_0x59e[0x2]; // 0x59e
        // metadata: MNetworkEnable
        uint32_t m_nHUDVisibilityBits; // 0x5a0        
        // metadata: MNetworkEnable
        float m_flMinimumAttackSpeed; // 0x5a4        
        // metadata: MNetworkEnable
        float m_flMaximumAttackSpeed; // 0x5a8        
        // metadata: MNetworkEnable
        bool m_bIsDaynightCycleDisabled; // 0x5ac        
        [[maybe_unused]] std::uint8_t pad_0x5ad[0x3]; // 0x5ad
        // metadata: MNetworkEnable
        float m_flDaynightCycleAdvanceRate; // 0x5b0        
        // metadata: MNetworkEnable
        bool m_bAreWeatherEffectsDisabled; // 0x5b4        
        // metadata: MNetworkEnable
        bool m_bDisableHudFlip; // 0x5b5        
        // metadata: MNetworkEnable
        bool m_bEnableFriendlyBuildingMoveTo; // 0x5b6        
        // metadata: MNetworkEnable
        bool m_bIsDeathOverlayDisabled; // 0x5b7        
        // metadata: MNetworkEnable
        bool m_bIsHudCombatEventsDisabled; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5b9[0x7]; // 0x5b9
        // metadata: MNetworkEnable
        CUtlString m_strDefaultStickyItem; // 0x5c0        
        // metadata: MNetworkEnable
        CUtlString m_sCustomTerrainWeatherEffect; // 0x5c8        
        // metadata: MNetworkEnable
        CUtlString m_strTPScrollSlotItemOverride; // 0x5d0        
        // metadata: MNetworkEnable
        float m_flStrengthDamage; // 0x5d8        
        // metadata: MNetworkEnable
        float m_flStrengthHP; // 0x5dc        
        // metadata: MNetworkEnable
        float m_flStrengthHPRegen; // 0x5e0        
        // metadata: MNetworkEnable
        float m_flAgilityDamage; // 0x5e4        
        // metadata: MNetworkEnable
        float m_flAgilityArmor; // 0x5e8        
        // metadata: MNetworkEnable
        float m_flAgilityAttackSpeed; // 0x5ec        
        // metadata: MNetworkEnable
        float m_flAgilityMovementSpeedPercent; // 0x5f0        
        // metadata: MNetworkEnable
        float m_flIntelligenceDamage; // 0x5f4        
        // metadata: MNetworkEnable
        float m_flIntelligenceMana; // 0x5f8        
        // metadata: MNetworkEnable
        float m_flIntelligenceManaRegen; // 0x5fc        
        // metadata: MNetworkEnable
        float m_flIntelligenceMres; // 0x600        
        // metadata: MNetworkEnable
        float m_flIntelligenceSpellAmpPercent; // 0x604        
        // metadata: MNetworkEnable
        float m_flStrengthMagicResistancePercent; // 0x608        
        // metadata: MNetworkEnable
        float m_flAttributeAllDamage; // 0x60c        
        // metadata: MNetworkEnable
        float m_flDraftingHeroPickSelectTimeOverride; // 0x610        
        // metadata: MNetworkEnable
        float m_flDraftingBanningTimeOverride; // 0x614        
        // metadata: MNetworkEnable
        bool m_bPauseEnabled; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x619[0x3]; // 0x619
        // metadata: MNetworkEnable
        int32_t m_iCustomScanMaxCharges; // 0x61c        
        // metadata: MNetworkEnable
        float m_flCustomScanCooldown; // 0x620        
        // metadata: MNetworkEnable
        float m_flCustomGlyphCooldown; // 0x624        
        // metadata: MNetworkEnable
        float m_flCustomBackpackSwapCooldown; // 0x628        
        // metadata: MNetworkEnable
        float m_flCustomBackpackCooldownPercent; // 0x62c        
        // metadata: MNetworkEnable
        bool m_bDefaultRuneSpawnLogic; // 0x630        
        // metadata: MNetworkEnable
        bool m_bEnableFreeCourierMode; // 0x631        
        // metadata: MNetworkEnable
        bool m_bAllowNeutralItemDrops; // 0x632        
        // metadata: MNetworkEnable
        bool m_bEnableNeutralStash; // 0x633        
        // metadata: MNetworkEnable
        bool m_bEnableNeutralStashTeamViewOnly; // 0x634        
        // metadata: MNetworkEnable
        bool m_bEnableNeutralItemHideUndiscovered; // 0x635        
        // metadata: MNetworkEnable
        bool m_bEnableSendToStash; // 0x636        
        // metadata: MNetworkEnable
        bool m_bForceRightClickAttackDisabled; // 0x637        
        // metadata: MNetworkEnable
        // m_vecCustomShopInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::CDOTACustomShopInfo> m_vecCustomShopInfo;
        char m_vecCustomShopInfo[0x50]; // 0x638        
        // metadata: MNetworkEnable
        bool m_bCanSellAnywhere; // 0x688        
        [[maybe_unused]] std::uint8_t pad_0x689[0x3]; // 0x689
        // metadata: MNetworkEnable
        float m_flCameraNearZ; // 0x68c        
        // metadata: MNetworkEnable
        float m_flCameraFarZ; // 0x690        
        // metadata: MNetworkEnable
        int32_t m_nCustomRadiantScore; // 0x694        
        // metadata: MNetworkEnable
        int32_t m_nCustomDireScore; // 0x698        
        // metadata: MNetworkEnable
        bool m_bAbilityUpgradeWhitelistEnabled; // 0x69c        
        [[maybe_unused]] std::uint8_t pad_0x69d[0x3]; // 0x69d
        // metadata: MNetworkEnable
        // m_vecAbilityUpgradeWhitelist has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<client::AbilityID_t> m_vecAbilityUpgradeWhitelist;
        char m_vecAbilityUpgradeWhitelist[0x18]; // 0x6a0        
        // metadata: MNetworkEnable
        bool m_bGiveFreeTPOnDeath; // 0x6b8        
        [[maybe_unused]] std::uint8_t pad_0x6b9[0x3]; // 0x6b9
        // metadata: MNetworkEnable
        int32_t m_nInnateMeleeDamageBlockPct; // 0x6bc        
        // metadata: MNetworkEnable
        int32_t m_nInnateMeleeDamageBlockAmount; // 0x6c0        
        // metadata: MNetworkEnable
        int32_t m_nInnateMeleeDamageBlockPerLevelAmount; // 0x6c4        
        // metadata: MNetworkEnable
        float m_flWaterRuneSpawnInterval; // 0x6c8        
        [[maybe_unused]] std::uint8_t pad_0x6cc[0x4]; // 0x6cc
        // metadata: MNetworkEnable
        // m_vecBigHealthBarUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_DOTA_BaseNPC>> m_vecBigHealthBarUnits;
        char m_vecBigHealthBarUnits[0x18]; // 0x6d0        
        [[maybe_unused]] std::uint8_t pad_0x6e8[0x8]; // 0x6e8
        uint32_t m_nHUDVisibilityBitsPrevious; // 0x6f0        
        [[maybe_unused]] std::uint8_t pad_0x6f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTABaseGameMode because it is not a standard-layout class
    static_assert(sizeof(C_DOTABaseGameMode) == 0x6f8);
};

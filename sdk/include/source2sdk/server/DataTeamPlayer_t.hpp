#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/HeroFacetID_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/OverworldID_t.hpp"
#include "source2sdk/client/OverworldTokenID_t.hpp"
#include "source2sdk/client/WeightedAbilitySuggestion_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_UnitInventory.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x560
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iReliableGold"
    // static metadata: MNetworkVarNames "int m_iUnreliableGold"
    // static metadata: MNetworkVarNames "int m_iStartingPosition"
    // static metadata: MNetworkVarNames "int m_iTotalEarnedGold"
    // static metadata: MNetworkVarNames "int m_iTotalEarnedXP"
    // static metadata: MNetworkVarNames "int m_iSharedGold"
    // static metadata: MNetworkVarNames "int m_iHeroKillGold"
    // static metadata: MNetworkVarNames "int m_iCreepKillGold"
    // static metadata: MNetworkVarNames "int m_iNeutralKillGold"
    // static metadata: MNetworkVarNames "int m_iCourierGold"
    // static metadata: MNetworkVarNames "int m_iBountyGold"
    // static metadata: MNetworkVarNames "int m_iRoshanGold"
    // static metadata: MNetworkVarNames "int m_iBuildingGold"
    // static metadata: MNetworkVarNames "int m_iOtherGold"
    // static metadata: MNetworkVarNames "int m_iComebackGold"
    // static metadata: MNetworkVarNames "int m_iExperimentalGold"
    // static metadata: MNetworkVarNames "int m_iExperimental2Gold"
    // static metadata: MNetworkVarNames "int m_iCreepDenyGold"
    // static metadata: MNetworkVarNames "int m_iTPScrollsPurchased"
    // static metadata: MNetworkVarNames "float m_flCustomStats"
    // static metadata: MNetworkVarNames "int m_iIncomeGold"
    // static metadata: MNetworkVarNames "int m_iWardKillGold"
    // static metadata: MNetworkVarNames "int m_iAbilityGold"
    // static metadata: MNetworkVarNames "int m_iNetWorth"
    // static metadata: MNetworkVarNames "int m_iDenyCount"
    // static metadata: MNetworkVarNames "int m_iLastHitCount"
    // static metadata: MNetworkVarNames "int m_iLastHitStreak"
    // static metadata: MNetworkVarNames "int m_iLastHitMultikill"
    // static metadata: MNetworkVarNames "int m_iNearbyCreepDeathCount"
    // static metadata: MNetworkVarNames "int m_iClaimedDenyCount"
    // static metadata: MNetworkVarNames "int m_iClaimedMissCount"
    // static metadata: MNetworkVarNames "int m_iMissCount"
    // static metadata: MNetworkVarNames "HeroID_t m_nPossibleHeroSelection"
    // static metadata: MNetworkVarNames "HeroFacetID_t m_nPossibleHeroFacetSelection"
    // static metadata: MNetworkVarNames "GameTime_t m_flBuybackCooldownTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flBuybackGoldLimitTime"
    // static metadata: MNetworkVarNames "float m_flBuybackCostTime"
    // static metadata: MNetworkVarNames "float m_flCustomBuybackCooldown"
    // static metadata: MNetworkVarNames "float m_fStuns"
    // static metadata: MNetworkVarNames "float m_fHealing"
    // static metadata: MNetworkVarNames "float m_fRegeneratedHealth"
    // static metadata: MNetworkVarNames "int m_iTowerKills"
    // static metadata: MNetworkVarNames "int m_iRoshanKills"
    // static metadata: MNetworkVarNames "EHANDLE m_hCameraTarget"
    // static metadata: MNetworkVarNames "EHANDLE m_hOverrideSelectionEntity"
    // static metadata: MNetworkVarNames "int m_iObserverWardsPlaced"
    // static metadata: MNetworkVarNames "int m_iSentryWardsPlaced"
    // static metadata: MNetworkVarNames "int m_iCreepsStacked"
    // static metadata: MNetworkVarNames "int m_iCampsStacked"
    // static metadata: MNetworkVarNames "int m_iRunePickups"
    // static metadata: MNetworkVarNames "int m_iGoldSpentOnSupport"
    // static metadata: MNetworkVarNames "int m_iHeroDamage"
    // static metadata: MNetworkVarNames "int m_iTowerDamage"
    // static metadata: MNetworkVarNames "int m_iWardsPurchased"
    // static metadata: MNetworkVarNames "int m_iWardsDestroyed"
    // static metadata: MNetworkVarNames "CDOTA_UnitInventory m_PreGameInventory"
    // static metadata: MNetworkVarNames "int m_nKillsPerOpposingTeamMember"
    // static metadata: MNetworkVarNames "AbilityID_t m_iSuggestedAbilities"
    // static metadata: MNetworkVarNames "float m_fSuggestedAbilityWeights"
    // static metadata: MNetworkVarNames "AbilityID_t m_iSuggestedPregameItems"
    // static metadata: MNetworkVarNames "AbilityID_t m_iSuggestedItemSequences"
    // static metadata: MNetworkVarNames "WeightedAbilitySuggestion_t m_iSuggestedWeightedItems"
    // static metadata: MNetworkVarNames "WeightedAbilitySuggestion_t m_iSuggestedTopNItems"
    // static metadata: MNetworkVarNames "WeightedAbilitySuggestion_t m_iSuggestedNeutralItems"
    // static metadata: MNetworkVarNames "HeroID_t m_iSuggestedHeroes"
    // static metadata: MNetworkVarNames "float m_flSuggestedHeroesWeights"
    // static metadata: MNetworkVarNames "int m_iDamageByTypeReceivedPreReduction"
    // static metadata: MNetworkVarNames "int m_iDamageByTypeReceivedPostReduction"
    // static metadata: MNetworkVarNames "int m_iOutgoingDamageByTypePreReduction"
    // static metadata: MNetworkVarNames "int m_iOutgoingDamageByTypePostReduction"
    // static metadata: MNetworkVarNames "OverworldID_t m_uSelectedOverworldID"
    // static metadata: MNetworkVarNames "OverworldTokenID_t m_uSelectedOverworldTokenRewards"
    // static metadata: MNetworkVarNames "int m_iCommandsIssued"
    // static metadata: MNetworkVarNames "int m_iGoldSpentOnConsumables"
    // static metadata: MNetworkVarNames "int m_iGoldSpentOnItems"
    // static metadata: MNetworkVarNames "int m_iGoldSpentOnBuybacks"
    // static metadata: MNetworkVarNames "int m_iGoldLostToDeath"
    // static metadata: MNetworkVarNames "bool m_bIsNewPlayer"
    // static metadata: MNetworkVarNames "bool m_bIsGuidePlayer"
    // static metadata: MNetworkVarNames "uint64 m_iPlayerSteamID"
    // static metadata: MNetworkVarNames "int m_iSmokesUsed"
    // static metadata: MNetworkVarNames "int m_iNeutralTokensFound"
    // static metadata: MNetworkVarNames "int m_iWatchersTaken"
    // static metadata: MNetworkVarNames "int m_iLotusesTaken"
    // static metadata: MNetworkVarNames "int m_iTormentorKills"
    // static metadata: MNetworkVarNames "int m_iCourierKills"
    #pragma pack(push, 1)
    struct DataTeamPlayer_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "48"
        int32_t m_iReliableGold; // 0x30        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "48"
        int32_t m_iUnreliableGold; // 0x34        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnStartingPositionsChanged"
        int32_t m_iStartingPosition; // 0x38        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iTotalEarnedGold; // 0x3c        
        // metadata: MNetworkEnable
        int32_t m_iTotalEarnedXP; // 0x40        
        // metadata: MNetworkEnable
        int32_t m_iSharedGold; // 0x44        
        // metadata: MNetworkEnable
        int32_t m_iHeroKillGold; // 0x48        
        // metadata: MNetworkEnable
        int32_t m_iCreepKillGold; // 0x4c        
        // metadata: MNetworkEnable
        int32_t m_iNeutralKillGold; // 0x50        
        // metadata: MNetworkEnable
        int32_t m_iCourierGold; // 0x54        
        // metadata: MNetworkEnable
        int32_t m_iBountyGold; // 0x58        
        // metadata: MNetworkEnable
        int32_t m_iRoshanGold; // 0x5c        
        // metadata: MNetworkEnable
        int32_t m_iBuildingGold; // 0x60        
        // metadata: MNetworkEnable
        int32_t m_iOtherGold; // 0x64        
        // metadata: MNetworkEnable
        int32_t m_iComebackGold; // 0x68        
        // metadata: MNetworkEnable
        int32_t m_iExperimentalGold; // 0x6c        
        // metadata: MNetworkEnable
        int32_t m_iExperimental2Gold; // 0x70        
        // metadata: MNetworkEnable
        int32_t m_iCreepDenyGold; // 0x74        
        // metadata: MNetworkEnable
        int32_t m_iTPScrollsPurchased; // 0x78        
        // metadata: MNetworkEnable
        float m_flCustomStats; // 0x7c        
        // metadata: MNetworkEnable
        int32_t m_iIncomeGold; // 0x80        
        // metadata: MNetworkEnable
        int32_t m_iWardKillGold; // 0x84        
        // metadata: MNetworkEnable
        int32_t m_iAbilityGold; // 0x88        
        // metadata: MNetworkEnable
        int32_t m_iNetWorth; // 0x8c        
        // metadata: MNetworkEnable
        int32_t m_iDenyCount; // 0x90        
        // metadata: MNetworkEnable
        int32_t m_iLastHitCount; // 0x94        
        // metadata: MNetworkEnable
        int32_t m_iLastHitStreak; // 0x98        
        // metadata: MNetworkEnable
        int32_t m_iLastHitMultikill; // 0x9c        
        // metadata: MNetworkEnable
        int32_t m_iNearbyCreepDeathCount; // 0xa0        
        // metadata: MNetworkEnable
        int32_t m_iClaimedDenyCount; // 0xa4        
        // metadata: MNetworkEnable
        int32_t m_iClaimedMissCount; // 0xa8        
        // metadata: MNetworkEnable
        int32_t m_iMissCount; // 0xac        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSelectionDirty"
        client::HeroID_t m_nPossibleHeroSelection; // 0xb0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSelectionDirty"
        client::HeroFacetID_t m_nPossibleHeroFacetSelection; // 0xb4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flBuybackCooldownTime; // 0xb8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flBuybackGoldLimitTime; // 0xbc        
        // metadata: MNetworkEnable
        float m_flBuybackCostTime; // 0xc0        
        // metadata: MNetworkEnable
        float m_flCustomBuybackCooldown; // 0xc4        
        // metadata: MNetworkEnable
        float m_fStuns; // 0xc8        
        // metadata: MNetworkEnable
        float m_fHealing; // 0xcc        
        // metadata: MNetworkEnable
        float m_fRegeneratedHealth; // 0xd0        
        // metadata: MNetworkEnable
        int32_t m_iTowerKills; // 0xd4        
        // metadata: MNetworkEnable
        int32_t m_iRoshanKills; // 0xd8        
        // metadata: MNetworkEnable
        // m_hCameraTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCameraTarget;
        char m_hCameraTarget[0x4]; // 0xdc        
        // metadata: MNetworkEnable
        // m_hOverrideSelectionEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOverrideSelectionEntity;
        char m_hOverrideSelectionEntity[0x4]; // 0xe0        
        // metadata: MNetworkEnable
        int32_t m_iObserverWardsPlaced; // 0xe4        
        // metadata: MNetworkEnable
        int32_t m_iSentryWardsPlaced; // 0xe8        
        // metadata: MNetworkEnable
        int32_t m_iCreepsStacked; // 0xec        
        // metadata: MNetworkEnable
        int32_t m_iCampsStacked; // 0xf0        
        // metadata: MNetworkEnable
        int32_t m_iRunePickups; // 0xf4        
        // metadata: MNetworkEnable
        int32_t m_iGoldSpentOnSupport; // 0xf8        
        // metadata: MNetworkEnable
        int32_t m_iHeroDamage; // 0xfc        
        // metadata: MNetworkEnable
        int32_t m_iTowerDamage; // 0x100        
        // metadata: MNetworkEnable
        int32_t m_iWardsPurchased; // 0x104        
        // metadata: MNetworkEnable
        int32_t m_iWardsDestroyed; // 0x108        
        [[maybe_unused]] std::uint8_t pad_0x10c[0x4]; // 0x10c
        // metadata: MNetworkEnable
        server::CDOTA_UnitInventory m_PreGameInventory; // 0x110        
        // metadata: MNetworkEnable
        int32_t m_nKillsPerOpposingTeamMember[24]; // 0x1e8        
        // metadata: MNetworkEnable
        client::AbilityID_t m_iSuggestedAbilities[5]; // 0x248        
        // metadata: MNetworkEnable
        float m_fSuggestedAbilityWeights[5]; // 0x25c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSuggestedItemsChanged"
        client::AbilityID_t m_iSuggestedPregameItems[15]; // 0x270        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSuggestedItemsChanged"
        client::AbilityID_t m_iSuggestedItemSequences[30]; // 0x2ac        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSuggestedItemsChanged"
        client::WeightedAbilitySuggestion_t m_iSuggestedWeightedItems[15]; // 0x324        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSuggestedItemsChanged"
        client::WeightedAbilitySuggestion_t m_iSuggestedTopNItems[3]; // 0x39c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSuggestedItemsChanged"
        client::WeightedAbilitySuggestion_t m_iSuggestedNeutralItems[30]; // 0x3b4        
        // metadata: MNetworkEnable
        client::HeroID_t m_iSuggestedHeroes[10]; // 0x4a4        
        // metadata: MNetworkEnable
        float m_flSuggestedHeroesWeights[10]; // 0x4cc        
        // metadata: MNetworkEnable
        int32_t m_iDamageByTypeReceivedPreReduction[3]; // 0x4f4        
        // metadata: MNetworkEnable
        int32_t m_iDamageByTypeReceivedPostReduction[3]; // 0x500        
        // metadata: MNetworkEnable
        int32_t m_iOutgoingDamageByTypePreReduction[3]; // 0x50c        
        // metadata: MNetworkEnable
        int32_t m_iOutgoingDamageByTypePostReduction[3]; // 0x518        
        // metadata: MNetworkEnable
        client::OverworldID_t m_uSelectedOverworldID; // 0x524        
        // metadata: MNetworkEnable
        client::OverworldTokenID_t m_uSelectedOverworldTokenRewards[3]; // 0x525        
        // metadata: MNetworkEnable
        int32_t m_iCommandsIssued; // 0x528        
        // metadata: MNetworkEnable
        int32_t m_iGoldSpentOnConsumables; // 0x52c        
        // metadata: MNetworkEnable
        int32_t m_iGoldSpentOnItems; // 0x530        
        // metadata: MNetworkEnable
        int32_t m_iGoldSpentOnBuybacks; // 0x534        
        // metadata: MNetworkEnable
        int32_t m_iGoldLostToDeath; // 0x538        
        // metadata: MNetworkEnable
        bool m_bIsNewPlayer; // 0x53c        
        // metadata: MNetworkEnable
        bool m_bIsGuidePlayer; // 0x53d        
        [[maybe_unused]] std::uint8_t pad_0x53e[0x2]; // 0x53e
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "fixed64"
        // metadata: MNetworkChangeCallback "OnPlayerSteamIDsChanged"
        uint64_t m_iPlayerSteamID; // 0x540        
        // metadata: MNetworkEnable
        int32_t m_iSmokesUsed; // 0x548        
        // metadata: MNetworkEnable
        int32_t m_iNeutralTokensFound; // 0x54c        
        // metadata: MNetworkEnable
        int32_t m_iWatchersTaken; // 0x550        
        // metadata: MNetworkEnable
        int32_t m_iLotusesTaken; // 0x554        
        // metadata: MNetworkEnable
        int32_t m_iTormentorKills; // 0x558        
        // metadata: MNetworkEnable
        int32_t m_iCourierKills; // 0x55c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DataTeamPlayer_t, m_iReliableGold) == 0x30);
    static_assert(offsetof(DataTeamPlayer_t, m_iUnreliableGold) == 0x34);
    static_assert(offsetof(DataTeamPlayer_t, m_iStartingPosition) == 0x38);
    static_assert(offsetof(DataTeamPlayer_t, m_iTotalEarnedGold) == 0x3c);
    static_assert(offsetof(DataTeamPlayer_t, m_iTotalEarnedXP) == 0x40);
    static_assert(offsetof(DataTeamPlayer_t, m_iSharedGold) == 0x44);
    static_assert(offsetof(DataTeamPlayer_t, m_iHeroKillGold) == 0x48);
    static_assert(offsetof(DataTeamPlayer_t, m_iCreepKillGold) == 0x4c);
    static_assert(offsetof(DataTeamPlayer_t, m_iNeutralKillGold) == 0x50);
    static_assert(offsetof(DataTeamPlayer_t, m_iCourierGold) == 0x54);
    static_assert(offsetof(DataTeamPlayer_t, m_iBountyGold) == 0x58);
    static_assert(offsetof(DataTeamPlayer_t, m_iRoshanGold) == 0x5c);
    static_assert(offsetof(DataTeamPlayer_t, m_iBuildingGold) == 0x60);
    static_assert(offsetof(DataTeamPlayer_t, m_iOtherGold) == 0x64);
    static_assert(offsetof(DataTeamPlayer_t, m_iComebackGold) == 0x68);
    static_assert(offsetof(DataTeamPlayer_t, m_iExperimentalGold) == 0x6c);
    static_assert(offsetof(DataTeamPlayer_t, m_iExperimental2Gold) == 0x70);
    static_assert(offsetof(DataTeamPlayer_t, m_iCreepDenyGold) == 0x74);
    static_assert(offsetof(DataTeamPlayer_t, m_iTPScrollsPurchased) == 0x78);
    static_assert(offsetof(DataTeamPlayer_t, m_flCustomStats) == 0x7c);
    static_assert(offsetof(DataTeamPlayer_t, m_iIncomeGold) == 0x80);
    static_assert(offsetof(DataTeamPlayer_t, m_iWardKillGold) == 0x84);
    static_assert(offsetof(DataTeamPlayer_t, m_iAbilityGold) == 0x88);
    static_assert(offsetof(DataTeamPlayer_t, m_iNetWorth) == 0x8c);
    static_assert(offsetof(DataTeamPlayer_t, m_iDenyCount) == 0x90);
    static_assert(offsetof(DataTeamPlayer_t, m_iLastHitCount) == 0x94);
    static_assert(offsetof(DataTeamPlayer_t, m_iLastHitStreak) == 0x98);
    static_assert(offsetof(DataTeamPlayer_t, m_iLastHitMultikill) == 0x9c);
    static_assert(offsetof(DataTeamPlayer_t, m_iNearbyCreepDeathCount) == 0xa0);
    static_assert(offsetof(DataTeamPlayer_t, m_iClaimedDenyCount) == 0xa4);
    static_assert(offsetof(DataTeamPlayer_t, m_iClaimedMissCount) == 0xa8);
    static_assert(offsetof(DataTeamPlayer_t, m_iMissCount) == 0xac);
    static_assert(offsetof(DataTeamPlayer_t, m_nPossibleHeroSelection) == 0xb0);
    static_assert(offsetof(DataTeamPlayer_t, m_nPossibleHeroFacetSelection) == 0xb4);
    static_assert(offsetof(DataTeamPlayer_t, m_flBuybackCooldownTime) == 0xb8);
    static_assert(offsetof(DataTeamPlayer_t, m_flBuybackGoldLimitTime) == 0xbc);
    static_assert(offsetof(DataTeamPlayer_t, m_flBuybackCostTime) == 0xc0);
    static_assert(offsetof(DataTeamPlayer_t, m_flCustomBuybackCooldown) == 0xc4);
    static_assert(offsetof(DataTeamPlayer_t, m_fStuns) == 0xc8);
    static_assert(offsetof(DataTeamPlayer_t, m_fHealing) == 0xcc);
    static_assert(offsetof(DataTeamPlayer_t, m_fRegeneratedHealth) == 0xd0);
    static_assert(offsetof(DataTeamPlayer_t, m_iTowerKills) == 0xd4);
    static_assert(offsetof(DataTeamPlayer_t, m_iRoshanKills) == 0xd8);
    static_assert(offsetof(DataTeamPlayer_t, m_hCameraTarget) == 0xdc);
    static_assert(offsetof(DataTeamPlayer_t, m_hOverrideSelectionEntity) == 0xe0);
    static_assert(offsetof(DataTeamPlayer_t, m_iObserverWardsPlaced) == 0xe4);
    static_assert(offsetof(DataTeamPlayer_t, m_iSentryWardsPlaced) == 0xe8);
    static_assert(offsetof(DataTeamPlayer_t, m_iCreepsStacked) == 0xec);
    static_assert(offsetof(DataTeamPlayer_t, m_iCampsStacked) == 0xf0);
    static_assert(offsetof(DataTeamPlayer_t, m_iRunePickups) == 0xf4);
    static_assert(offsetof(DataTeamPlayer_t, m_iGoldSpentOnSupport) == 0xf8);
    static_assert(offsetof(DataTeamPlayer_t, m_iHeroDamage) == 0xfc);
    static_assert(offsetof(DataTeamPlayer_t, m_iTowerDamage) == 0x100);
    static_assert(offsetof(DataTeamPlayer_t, m_iWardsPurchased) == 0x104);
    static_assert(offsetof(DataTeamPlayer_t, m_iWardsDestroyed) == 0x108);
    static_assert(offsetof(DataTeamPlayer_t, m_PreGameInventory) == 0x110);
    static_assert(offsetof(DataTeamPlayer_t, m_nKillsPerOpposingTeamMember) == 0x1e8);
    static_assert(offsetof(DataTeamPlayer_t, m_iSuggestedAbilities) == 0x248);
    static_assert(offsetof(DataTeamPlayer_t, m_fSuggestedAbilityWeights) == 0x25c);
    static_assert(offsetof(DataTeamPlayer_t, m_iSuggestedPregameItems) == 0x270);
    static_assert(offsetof(DataTeamPlayer_t, m_iSuggestedItemSequences) == 0x2ac);
    static_assert(offsetof(DataTeamPlayer_t, m_iSuggestedWeightedItems) == 0x324);
    static_assert(offsetof(DataTeamPlayer_t, m_iSuggestedTopNItems) == 0x39c);
    static_assert(offsetof(DataTeamPlayer_t, m_iSuggestedNeutralItems) == 0x3b4);
    static_assert(offsetof(DataTeamPlayer_t, m_iSuggestedHeroes) == 0x4a4);
    static_assert(offsetof(DataTeamPlayer_t, m_flSuggestedHeroesWeights) == 0x4cc);
    static_assert(offsetof(DataTeamPlayer_t, m_iDamageByTypeReceivedPreReduction) == 0x4f4);
    static_assert(offsetof(DataTeamPlayer_t, m_iDamageByTypeReceivedPostReduction) == 0x500);
    static_assert(offsetof(DataTeamPlayer_t, m_iOutgoingDamageByTypePreReduction) == 0x50c);
    static_assert(offsetof(DataTeamPlayer_t, m_iOutgoingDamageByTypePostReduction) == 0x518);
    static_assert(offsetof(DataTeamPlayer_t, m_uSelectedOverworldID) == 0x524);
    static_assert(offsetof(DataTeamPlayer_t, m_uSelectedOverworldTokenRewards) == 0x525);
    static_assert(offsetof(DataTeamPlayer_t, m_iCommandsIssued) == 0x528);
    static_assert(offsetof(DataTeamPlayer_t, m_iGoldSpentOnConsumables) == 0x52c);
    static_assert(offsetof(DataTeamPlayer_t, m_iGoldSpentOnItems) == 0x530);
    static_assert(offsetof(DataTeamPlayer_t, m_iGoldSpentOnBuybacks) == 0x534);
    static_assert(offsetof(DataTeamPlayer_t, m_iGoldLostToDeath) == 0x538);
    static_assert(offsetof(DataTeamPlayer_t, m_bIsNewPlayer) == 0x53c);
    static_assert(offsetof(DataTeamPlayer_t, m_bIsGuidePlayer) == 0x53d);
    static_assert(offsetof(DataTeamPlayer_t, m_iPlayerSteamID) == 0x540);
    static_assert(offsetof(DataTeamPlayer_t, m_iSmokesUsed) == 0x548);
    static_assert(offsetof(DataTeamPlayer_t, m_iNeutralTokensFound) == 0x54c);
    static_assert(offsetof(DataTeamPlayer_t, m_iWatchersTaken) == 0x550);
    static_assert(offsetof(DataTeamPlayer_t, m_iLotusesTaken) == 0x554);
    static_assert(offsetof(DataTeamPlayer_t, m_iTormentorKills) == 0x558);
    static_assert(offsetof(DataTeamPlayer_t, m_iCourierKills) == 0x55c);
    
    static_assert(sizeof(DataTeamPlayer_t) == 0x560);
};

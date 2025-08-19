#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/OverworldID_t.hpp"
#include "source2sdk/client/OverworldTokenID_t.hpp"
#include "source2sdk/client/WeightedAbilitySuggestion_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTACourierController.hpp"
#include "source2sdk/server/CDOTA_UnitInventory.hpp"
#include "source2sdk/server/CQuickBuyController.hpp"
#include "source2sdk/server/PlayerNeutralChoices_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x1320
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
        // static metadata: MNetworkVarNames "HeroFacetKey_t m_nPossibleHeroFacetSelection"
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
        // static metadata: MNetworkVarNames "AbilityID_t m_iSuggestedItemSequence"
        // static metadata: MNetworkVarNames "AbilityID_t m_iSuggestedItemSequenceVariants"
        // static metadata: MNetworkVarNames "WeightedAbilitySuggestion_t m_iSuggestedItemOptions"
        // static metadata: MNetworkVarNames "WeightedAbilitySuggestion_t m_iSuggestedGeneralItems"
        // static metadata: MNetworkVarNames "WeightedAbilitySuggestion_t m_iSuggestedNeutralTrinkets"
        // static metadata: MNetworkVarNames "WeightedAbilitySuggestion_t m_iSuggestedNeutralEnhancements"
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
        // static metadata: MNetworkVarNames "int m_nAcquiredMadstone"
        // static metadata: MNetworkVarNames "int m_nCurrentMadstone"
        // static metadata: MNetworkVarNames "PlayerNeutralChoices_t m_NeutralChoices"
        // static metadata: MNetworkVarNames "CDOTACourierController m_CourierController"
        // static metadata: MNetworkVarNames "CQuickBuyController m_quickBuyController"
        #pragma pack(push, 1)
        struct DataTeamPlayer_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "48"
            std::int32_t m_iReliableGold; // 0x30            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "48"
            std::int32_t m_iUnreliableGold; // 0x34            
            // metadata: MNetworkEnable
            std::int32_t m_iStartingPosition; // 0x38            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iTotalEarnedGold; // 0x3c            
            // metadata: MNetworkEnable
            std::int32_t m_iTotalEarnedXP; // 0x40            
            // metadata: MNetworkEnable
            std::int32_t m_iSharedGold; // 0x44            
            // metadata: MNetworkEnable
            std::int32_t m_iHeroKillGold; // 0x48            
            // metadata: MNetworkEnable
            std::int32_t m_iCreepKillGold; // 0x4c            
            // metadata: MNetworkEnable
            std::int32_t m_iNeutralKillGold; // 0x50            
            // metadata: MNetworkEnable
            std::int32_t m_iCourierGold; // 0x54            
            // metadata: MNetworkEnable
            std::int32_t m_iBountyGold; // 0x58            
            // metadata: MNetworkEnable
            std::int32_t m_iRoshanGold; // 0x5c            
            // metadata: MNetworkEnable
            std::int32_t m_iBuildingGold; // 0x60            
            // metadata: MNetworkEnable
            std::int32_t m_iOtherGold; // 0x64            
            // metadata: MNetworkEnable
            std::int32_t m_iComebackGold; // 0x68            
            // metadata: MNetworkEnable
            std::int32_t m_iExperimentalGold; // 0x6c            
            // metadata: MNetworkEnable
            std::int32_t m_iExperimental2Gold; // 0x70            
            // metadata: MNetworkEnable
            std::int32_t m_iCreepDenyGold; // 0x74            
            // metadata: MNetworkEnable
            std::int32_t m_iTPScrollsPurchased; // 0x78            
            // metadata: MNetworkEnable
            float m_flCustomStats; // 0x7c            
            // metadata: MNetworkEnable
            std::int32_t m_iIncomeGold; // 0x80            
            // metadata: MNetworkEnable
            std::int32_t m_iWardKillGold; // 0x84            
            // metadata: MNetworkEnable
            std::int32_t m_iAbilityGold; // 0x88            
            // metadata: MNetworkEnable
            std::int32_t m_iNetWorth; // 0x8c            
            // metadata: MNetworkEnable
            std::int32_t m_iDenyCount; // 0x90            
            // metadata: MNetworkEnable
            std::int32_t m_iLastHitCount; // 0x94            
            // metadata: MNetworkEnable
            std::int32_t m_iLastHitStreak; // 0x98            
            // metadata: MNetworkEnable
            std::int32_t m_iLastHitMultikill; // 0x9c            
            // metadata: MNetworkEnable
            std::int32_t m_iNearbyCreepDeathCount; // 0xa0            
            // metadata: MNetworkEnable
            std::int32_t m_iClaimedDenyCount; // 0xa4            
            // metadata: MNetworkEnable
            std::int32_t m_iClaimedMissCount; // 0xa8            
            // metadata: MNetworkEnable
            std::int32_t m_iMissCount; // 0xac            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSelectionDirty"
            source2sdk::client::HeroID_t m_nPossibleHeroSelection; // 0xb0            
            uint8_t _pad00b4[0x4]; // 0xb4
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSelectionDirty"
            source2sdk::client::HeroFacetKey_t m_nPossibleHeroFacetSelection; // 0xb8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flBuybackCooldownTime; // 0xc0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flBuybackGoldLimitTime; // 0xc4            
            // metadata: MNetworkEnable
            float m_flBuybackCostTime; // 0xc8            
            // metadata: MNetworkEnable
            float m_flCustomBuybackCooldown; // 0xcc            
            // metadata: MNetworkEnable
            float m_fStuns; // 0xd0            
            // metadata: MNetworkEnable
            float m_fHealing; // 0xd4            
            // metadata: MNetworkEnable
            float m_fRegeneratedHealth; // 0xd8            
            // metadata: MNetworkEnable
            std::int32_t m_iTowerKills; // 0xdc            
            // metadata: MNetworkEnable
            std::int32_t m_iRoshanKills; // 0xe0            
            // metadata: MNetworkEnable
            // m_hCameraTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCameraTarget;
            char m_hCameraTarget[0x4]; // 0xe4            
            // metadata: MNetworkEnable
            // m_hOverrideSelectionEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOverrideSelectionEntity;
            char m_hOverrideSelectionEntity[0x4]; // 0xe8            
            // metadata: MNetworkEnable
            std::int32_t m_iObserverWardsPlaced; // 0xec            
            // metadata: MNetworkEnable
            std::int32_t m_iSentryWardsPlaced; // 0xf0            
            // metadata: MNetworkEnable
            std::int32_t m_iCreepsStacked; // 0xf4            
            // metadata: MNetworkEnable
            std::int32_t m_iCampsStacked; // 0xf8            
            // metadata: MNetworkEnable
            std::int32_t m_iRunePickups; // 0xfc            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldSpentOnSupport; // 0x100            
            // metadata: MNetworkEnable
            std::int32_t m_iHeroDamage; // 0x104            
            // metadata: MNetworkEnable
            std::int32_t m_iTowerDamage; // 0x108            
            // metadata: MNetworkEnable
            std::int32_t m_iWardsPurchased; // 0x10c            
            // metadata: MNetworkEnable
            std::int32_t m_iWardsDestroyed; // 0x110            
            uint8_t _pad0114[0x4]; // 0x114
            // metadata: MNetworkEnable
            source2sdk::server::CDOTA_UnitInventory m_PreGameInventory; // 0x118            
            // metadata: MNetworkEnable
            std::int32_t m_nKillsPerOpposingTeamMember[24]; // 0x210            
            // metadata: MNetworkEnable
            source2sdk::client::AbilityID_t m_iSuggestedAbilities[5]; // 0x270            
            // metadata: MNetworkEnable
            float m_fSuggestedAbilityWeights[5]; // 0x284            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSuggestedPregameItemsChanged"
            source2sdk::client::AbilityID_t m_iSuggestedPregameItems[15]; // 0x298            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSuggestedItemSequenceChanged"
            source2sdk::client::AbilityID_t m_iSuggestedItemSequence[50]; // 0x2d4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSuggestedItemSequenceVariantsChanged"
            source2sdk::client::AbilityID_t m_iSuggestedItemSequenceVariants[150]; // 0x39c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSuggestedItemOptionsChanged"
            source2sdk::client::WeightedAbilitySuggestion_t m_iSuggestedItemOptions[250]; // 0x5f4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSuggestedGeneralItemsChanged"
            source2sdk::client::WeightedAbilitySuggestion_t m_iSuggestedGeneralItems[30]; // 0xdc4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSuggestedNeutralsChanged"
            source2sdk::client::WeightedAbilitySuggestion_t m_iSuggestedNeutralTrinkets[5]; // 0xeb4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSuggestedNeutralsChanged"
            source2sdk::client::WeightedAbilitySuggestion_t m_iSuggestedNeutralEnhancements[5]; // 0xedc            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_iSuggestedHeroes[10]; // 0xf04            
            // metadata: MNetworkEnable
            float m_flSuggestedHeroesWeights[10]; // 0xf2c            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageByTypeReceivedPreReduction[3]; // 0xf54            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageByTypeReceivedPostReduction[3]; // 0xf60            
            // metadata: MNetworkEnable
            std::int32_t m_iOutgoingDamageByTypePreReduction[3]; // 0xf6c            
            // metadata: MNetworkEnable
            std::int32_t m_iOutgoingDamageByTypePostReduction[3]; // 0xf78            
            // metadata: MNetworkEnable
            source2sdk::client::OverworldID_t m_uSelectedOverworldID; // 0xf84            
            // metadata: MNetworkEnable
            source2sdk::client::OverworldTokenID_t m_uSelectedOverworldTokenRewards[3]; // 0xf85            
            // metadata: MNetworkEnable
            std::int32_t m_iCommandsIssued; // 0xf88            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldSpentOnConsumables; // 0xf8c            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldSpentOnItems; // 0xf90            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldSpentOnBuybacks; // 0xf94            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldLostToDeath; // 0xf98            
            // metadata: MNetworkEnable
            bool m_bIsNewPlayer; // 0xf9c            
            // metadata: MNetworkEnable
            bool m_bIsGuidePlayer; // 0xf9d            
            uint8_t _pad0f9e[0x2]; // 0xf9e
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerPlayerSteamIDsChanged"
            std::uint64_t m_iPlayerSteamID; // 0xfa0            
            // metadata: MNetworkEnable
            std::int32_t m_iSmokesUsed; // 0xfa8            
            // metadata: MNetworkEnable
            std::int32_t m_iNeutralTokensFound; // 0xfac            
            // metadata: MNetworkEnable
            std::int32_t m_iWatchersTaken; // 0xfb0            
            // metadata: MNetworkEnable
            std::int32_t m_iLotusesTaken; // 0xfb4            
            // metadata: MNetworkEnable
            std::int32_t m_iTormentorKills; // 0xfb8            
            // metadata: MNetworkEnable
            std::int32_t m_iCourierKills; // 0xfbc            
            // metadata: MNetworkEnable
            std::int32_t m_nAcquiredMadstone; // 0xfc0            
            // metadata: MNetworkEnable
            std::int32_t m_nCurrentMadstone; // 0xfc4            
            // metadata: MNetworkEnable
            source2sdk::server::PlayerNeutralChoices_t m_NeutralChoices; // 0xfc8            
            // metadata: MNetworkEnable
            source2sdk::server::CDOTACourierController m_CourierController; // 0x10d8            
            // metadata: MNetworkEnable
            source2sdk::server::CQuickBuyController m_quickBuyController; // 0x1198            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iReliableGold) == 0x30);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iUnreliableGold) == 0x34);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iStartingPosition) == 0x38);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iTotalEarnedGold) == 0x3c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iTotalEarnedXP) == 0x40);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSharedGold) == 0x44);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iHeroKillGold) == 0x48);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iCreepKillGold) == 0x4c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iNeutralKillGold) == 0x50);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iCourierGold) == 0x54);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iBountyGold) == 0x58);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iRoshanGold) == 0x5c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iBuildingGold) == 0x60);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iOtherGold) == 0x64);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iComebackGold) == 0x68);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iExperimentalGold) == 0x6c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iExperimental2Gold) == 0x70);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iCreepDenyGold) == 0x74);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iTPScrollsPurchased) == 0x78);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flCustomStats) == 0x7c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iIncomeGold) == 0x80);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iWardKillGold) == 0x84);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iAbilityGold) == 0x88);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iNetWorth) == 0x8c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iDenyCount) == 0x90);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iLastHitCount) == 0x94);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iLastHitStreak) == 0x98);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iLastHitMultikill) == 0x9c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iNearbyCreepDeathCount) == 0xa0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iClaimedDenyCount) == 0xa4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iClaimedMissCount) == 0xa8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iMissCount) == 0xac);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_nPossibleHeroSelection) == 0xb0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_nPossibleHeroFacetSelection) == 0xb8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flBuybackCooldownTime) == 0xc0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flBuybackGoldLimitTime) == 0xc4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flBuybackCostTime) == 0xc8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flCustomBuybackCooldown) == 0xcc);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_fStuns) == 0xd0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_fHealing) == 0xd4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_fRegeneratedHealth) == 0xd8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iTowerKills) == 0xdc);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iRoshanKills) == 0xe0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_hCameraTarget) == 0xe4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_hOverrideSelectionEntity) == 0xe8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iObserverWardsPlaced) == 0xec);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSentryWardsPlaced) == 0xf0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iCreepsStacked) == 0xf4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iCampsStacked) == 0xf8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iRunePickups) == 0xfc);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iGoldSpentOnSupport) == 0x100);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iHeroDamage) == 0x104);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iTowerDamage) == 0x108);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iWardsPurchased) == 0x10c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iWardsDestroyed) == 0x110);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_PreGameInventory) == 0x118);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_nKillsPerOpposingTeamMember) == 0x210);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedAbilities) == 0x270);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_fSuggestedAbilityWeights) == 0x284);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedPregameItems) == 0x298);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedItemSequence) == 0x2d4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedItemSequenceVariants) == 0x39c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedItemOptions) == 0x5f4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedGeneralItems) == 0xdc4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedNeutralTrinkets) == 0xeb4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedNeutralEnhancements) == 0xedc);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedHeroes) == 0xf04);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flSuggestedHeroesWeights) == 0xf2c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iDamageByTypeReceivedPreReduction) == 0xf54);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iDamageByTypeReceivedPostReduction) == 0xf60);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iOutgoingDamageByTypePreReduction) == 0xf6c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iOutgoingDamageByTypePostReduction) == 0xf78);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_uSelectedOverworldID) == 0xf84);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_uSelectedOverworldTokenRewards) == 0xf85);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iCommandsIssued) == 0xf88);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iGoldSpentOnConsumables) == 0xf8c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iGoldSpentOnItems) == 0xf90);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iGoldSpentOnBuybacks) == 0xf94);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iGoldLostToDeath) == 0xf98);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_bIsNewPlayer) == 0xf9c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_bIsGuidePlayer) == 0xf9d);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iPlayerSteamID) == 0xfa0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSmokesUsed) == 0xfa8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iNeutralTokensFound) == 0xfac);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iWatchersTaken) == 0xfb0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iLotusesTaken) == 0xfb4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iTormentorKills) == 0xfb8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iCourierKills) == 0xfbc);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_nAcquiredMadstone) == 0xfc0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_nCurrentMadstone) == 0xfc4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_NeutralChoices) == 0xfc8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_CourierController) == 0x10d8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_quickBuyController) == 0x1198);
        
        static_assert(sizeof(source2sdk::server::DataTeamPlayer_t) == 0x1320);
    };
};

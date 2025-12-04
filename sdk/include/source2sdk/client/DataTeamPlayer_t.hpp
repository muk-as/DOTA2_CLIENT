#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/CDOTACourierController.hpp"
#include "source2sdk/client/CQuickBuyController.hpp"
#include "source2sdk/client/C_DOTA_UnitInventory.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/OverworldID_t.hpp"
#include "source2sdk/client/OverworldTokenID_t.hpp"
#include "source2sdk/client/PlayerNeutralChoices_t.hpp"
#include "source2sdk/client/WeightedAbilitySuggestion_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "48"
            std::int32_t m_iReliableGold; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "48"
            std::int32_t m_iUnreliableGold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iStartingPosition; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iTotalEarnedGold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iTotalEarnedXP; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iSharedGold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iHeroKillGold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iCreepKillGold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iNeutralKillGold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iCourierGold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iBountyGold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iRoshanGold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iBuildingGold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iOtherGold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iComebackGold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iExperimentalGold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iExperimental2Gold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iCreepDenyGold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iTPScrollsPurchased; // 0x_            
            // metadata: MNetworkEnable
            float m_flCustomStats; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iIncomeGold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iWardKillGold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iAbilityGold; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iNetWorth; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iDenyCount; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iLastHitCount; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iLastHitStreak; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iLastHitMultikill; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iNearbyCreepDeathCount; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iClaimedDenyCount; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iClaimedMissCount; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iMissCount; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSelectionDirty"
            source2sdk::client::HeroID_t m_nPossibleHeroSelection; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSelectionDirty"
            source2sdk::client::HeroFacetKey_t m_nPossibleHeroFacetSelection; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flBuybackCooldownTime; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flBuybackGoldLimitTime; // 0x_            
            // metadata: MNetworkEnable
            float m_flBuybackCostTime; // 0x_            
            // metadata: MNetworkEnable
            float m_flCustomBuybackCooldown; // 0x_            
            // metadata: MNetworkEnable
            float m_fStuns; // 0x_            
            // metadata: MNetworkEnable
            float m_fHealing; // 0x_            
            // metadata: MNetworkEnable
            float m_fRegeneratedHealth; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iTowerKills; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iRoshanKills; // 0x_            
            // metadata: MNetworkEnable
            // m_hCameraTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCameraTarget;
            char m_hCameraTarget[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hOverrideSelectionEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOverrideSelectionEntity;
            char m_hOverrideSelectionEntity[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iObserverWardsPlaced; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iSentryWardsPlaced; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iCreepsStacked; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iCampsStacked; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iRunePickups; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldSpentOnSupport; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iHeroDamage; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iTowerDamage; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iWardsPurchased; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iWardsDestroyed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::C_DOTA_UnitInventory m_PreGameInventory; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nKillsPerOpposingTeamMember[24]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::AbilityID_t m_iSuggestedAbilities[5]; // 0x_            
            // metadata: MNetworkEnable
            float m_fSuggestedAbilityWeights[5]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSuggestedPregameItemsChanged"
            source2sdk::client::AbilityID_t m_iSuggestedPregameItems[15]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSuggestedItemSequenceChanged"
            source2sdk::client::AbilityID_t m_iSuggestedItemSequence[50]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSuggestedItemSequenceVariantsChanged"
            source2sdk::client::AbilityID_t m_iSuggestedItemSequenceVariants[150]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSuggestedItemOptionsChanged"
            source2sdk::client::WeightedAbilitySuggestion_t m_iSuggestedItemOptions[250]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSuggestedGeneralItemsChanged"
            source2sdk::client::WeightedAbilitySuggestion_t m_iSuggestedGeneralItems[30]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSuggestedNeutralsChanged"
            source2sdk::client::WeightedAbilitySuggestion_t m_iSuggestedNeutralTrinkets[5]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerSuggestedNeutralsChanged"
            source2sdk::client::WeightedAbilitySuggestion_t m_iSuggestedNeutralEnhancements[5]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_iSuggestedHeroes[10]; // 0x_            
            // metadata: MNetworkEnable
            float m_flSuggestedHeroesWeights[10]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageByTypeReceivedPreReduction[3]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageByTypeReceivedPostReduction[3]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iOutgoingDamageByTypePreReduction[3]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iOutgoingDamageByTypePostReduction[3]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::OverworldID_t m_uSelectedOverworldID; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::OverworldTokenID_t m_uSelectedOverworldTokenRewards[3]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iCommandsIssued; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldSpentOnConsumables; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldSpentOnItems; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldSpentOnBuybacks; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldLostToDeath; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsNewPlayer; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsGuidePlayer; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            // metadata: MNetworkChangeCallback "OnDataTeamPlayerPlayerSteamIDsChanged"
            std::uint64_t m_iPlayerSteamID; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iSmokesUsed; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iNeutralTokensFound; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iWatchersTaken; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iLotusesTaken; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iTormentorKills; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iCourierKills; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nAcquiredMadstone; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nCurrentMadstone; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerNeutralChoices_t m_NeutralChoices; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::CDOTACourierController m_CourierController; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::CQuickBuyController m_quickBuyController; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iReliableGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iUnreliableGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iStartingPosition) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iTotalEarnedGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iTotalEarnedXP) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iSharedGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iHeroKillGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iCreepKillGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iNeutralKillGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iCourierGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iBountyGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iRoshanGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iBuildingGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iOtherGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iComebackGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iExperimentalGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iExperimental2Gold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iCreepDenyGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iTPScrollsPurchased) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_flCustomStats) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iIncomeGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iWardKillGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iAbilityGold) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iNetWorth) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iDenyCount) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iLastHitCount) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iLastHitStreak) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iLastHitMultikill) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iNearbyCreepDeathCount) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iClaimedDenyCount) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iClaimedMissCount) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iMissCount) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_nPossibleHeroSelection) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_nPossibleHeroFacetSelection) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_flBuybackCooldownTime) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_flBuybackGoldLimitTime) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_flBuybackCostTime) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_flCustomBuybackCooldown) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_fStuns) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_fHealing) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_fRegeneratedHealth) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iTowerKills) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iRoshanKills) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_hCameraTarget) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_hOverrideSelectionEntity) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iObserverWardsPlaced) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iSentryWardsPlaced) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iCreepsStacked) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iCampsStacked) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iRunePickups) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iGoldSpentOnSupport) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iHeroDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iTowerDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iWardsPurchased) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iWardsDestroyed) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_PreGameInventory) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_nKillsPerOpposingTeamMember) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iSuggestedAbilities) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_fSuggestedAbilityWeights) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iSuggestedPregameItems) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iSuggestedItemSequence) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iSuggestedItemSequenceVariants) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iSuggestedItemOptions) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iSuggestedGeneralItems) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iSuggestedNeutralTrinkets) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iSuggestedNeutralEnhancements) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iSuggestedHeroes) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_flSuggestedHeroesWeights) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iDamageByTypeReceivedPreReduction) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iDamageByTypeReceivedPostReduction) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iOutgoingDamageByTypePreReduction) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iOutgoingDamageByTypePostReduction) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_uSelectedOverworldID) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_uSelectedOverworldTokenRewards) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iCommandsIssued) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iGoldSpentOnConsumables) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iGoldSpentOnItems) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iGoldSpentOnBuybacks) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iGoldLostToDeath) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_bIsNewPlayer) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_bIsGuidePlayer) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iPlayerSteamID) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iSmokesUsed) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iNeutralTokensFound) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iWatchersTaken) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iLotusesTaken) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iTormentorKills) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_iCourierKills) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_nAcquiredMadstone) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_nCurrentMadstone) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_NeutralChoices) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_CourierController) == 0x_);
        static_assert(offsetof(source2sdk::client::DataTeamPlayer_t, m_quickBuyController) == 0x_);
        
        static_assert(sizeof(source2sdk::client::DataTeamPlayer_t) == 0x_);
    };
};

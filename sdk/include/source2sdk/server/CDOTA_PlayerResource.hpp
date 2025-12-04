#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/DamageShareEvent_t.hpp"
#include "source2sdk/server/PlayerResourceBroadcasterData_t.hpp"
#include "source2sdk/server/PlayerResourcePlayerData_t.hpp"
#include "source2sdk/server/PlayerResourcePlayerTeamData_t.hpp"
#include "source2sdk/server/PurchasedItem_t.hpp"
#include "source2sdk/server/TimedKillEvent_t.hpp"
#include "source2sdk/server/sPendingTreeModelChange.hpp"
#include "source2sdk/server/sPendingTreeRemoval.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_Unit_Courier;
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
        // static metadata: MNetworkVarNames "PlayerResourcePlayerTeamData_t m_vecPlayerTeamData"
        // static metadata: MNetworkVarNames "PlayerResourcePlayerData_t m_vecPlayerData"
        // static metadata: MNetworkVarNames "PlayerResourceBroadcasterData_t m_vecBrodcasterData"
        // static metadata: MNetworkVarNames "uint32 m_vecEventsForDisplay"
        // static metadata: MNetworkVarNames "int8 m_nPrimaryEventIndex"
        #pragma pack(push, 1)
        class CDOTA_PlayerResource : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_vecPlayerTeamData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PlayerResourcePlayerTeamData_t> m_vecPlayerTeamData;
            char m_vecPlayerTeamData[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_vecPlayerData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PlayerResourcePlayerData_t> m_vecPlayerData;
            char m_vecPlayerData[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_vecBrodcasterData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PlayerResourceBroadcasterData_t> m_vecBrodcasterData;
            char m_vecBrodcasterData[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_vecEventsForDisplay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint32_t> m_vecEventsForDisplay;
            char m_vecEventsForDisplay[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::int8_t m_nPrimaryEventIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_playerIDToPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_playerIDToPlayer[64];
            char m_playerIDToPlayer[0x_]; // 0x_            
            // m_playerIDToPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_playerIDToPawn[64];
            char m_playerIDToPawn[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecPendingTreeRemovals has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sPendingTreeRemoval> m_vecPendingTreeRemovals;
            char m_vecPendingTreeRemovals[0x_]; // 0x_            
            // m_vecPendingTreeModelChanges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sPendingTreeModelChange> m_vecPendingTreeModelChanges;
            char m_vecPendingTreeModelChanges[0x_]; // 0x_            
            float m_flClaimedFarm[24]; // 0x_            
            float m_flEarnedCreepFarm[24]; // 0x_            
            std::int32_t m_iScaledPlayerDamage[24]; // 0x_            
            std::int32_t m_iScaledTowerDamage[24]; // 0x_            
            std::int32_t m_iScaledHealing[24]; // 0x_            
            std::int32_t m_iSupportAbilityValue[24]; // 0x_            
            std::int32_t m_nNumMouseClickCastOrders[24]; // 0x_            
            float m_flTimeWithUnspentSkillPoints[24]; // 0x_            
            std::int32_t m_iRawPlayerDamage[24]; // 0x_            
            std::int32_t m_iRawTowerDamage[24]; // 0x_            
            std::int32_t m_iRawHealing[24]; // 0x_            
            std::int32_t m_iRawPlayerDamageReceivedPreReduction[3][24]; // 0x_            
            std::int32_t m_iRawPlayerDamageReceivedPostReduction[3][24]; // 0x_            
            std::int32_t m_iTotalPlayerDamageMatrix[24][24]; // 0x_            
            std::int32_t m_iRawPlayerDamageMatrix[24][24]; // 0x_            
            std::int32_t m_iAssistsMatrix[24][24]; // 0x_            
            std::int32_t m_iTimeLastSeen[24]; // 0x_            
            std::int32_t m_iTotalDisconnectedTime[24]; // 0x_            
            double m_dTimeLastRecieved[24]; // 0x_            
            std::int32_t m_iGoldBonusEarned[24]; // 0x_            
            std::int32_t m_iExperimentalGoldEarned[24]; // 0x_            
            std::int32_t m_iExperimental2GoldEarned[24]; // 0x_            
            std::int32_t m_iCreepDenyGoldEarned[24]; // 0x_            
            std::int32_t m_iTPScrollsPurchased[24]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iAegisPickups[24]; // 0x_            
            std::int32_t m_iTeleportsUsed[24]; // 0x_            
            std::int32_t m_iNumConsumablesPurchased[24]; // 0x_            
            std::int32_t m_iNumItemsPurchased[24]; // 0x_            
            // m_vecItemsPurchased has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::PurchasedItem_t> m_vecItemsPurchased[24];
            char m_vecItemsPurchased[0x_]; // 0x_            
            float m_flTimeOfLastItemPurchase[24]; // 0x_            
            float m_flTimeOfLastConsumablePurchase[24]; // 0x_            
            float m_flTimeOfLastDeath[24]; // 0x_            
            std::int32_t m_iTowerDamageTaken[24]; // 0x_            
            std::int32_t m_iCreepDamageTaken[24]; // 0x_            
            std::int32_t m_iHeroDamageTaken[24]; // 0x_            
            std::int32_t m_iTotalTowerDamageTaken[24]; // 0x_            
            std::int32_t m_iTotalCreepDamageTaken[24]; // 0x_            
            std::int32_t m_iTotalHeroDamageTaken[24]; // 0x_            
            std::int32_t m_iRank[24]; // 0x_            
            std::int32_t m_iRankUncertainty[24]; // 0x_            
            bool m_bRankCalibrated[24]; // 0x_            
            bool m_bLowPriority[24]; // 0x_            
            std::int32_t m_nWins[24]; // 0x_            
            std::int32_t m_nLosses[24]; // 0x_            
            std::int32_t m_nSmurfCategory[24]; // 0x_            
            std::int32_t m_nBehaviorScore[24]; // 0x_            
            std::int32_t m_nCommScore[24]; // 0x_            
            bool m_bWasHeroPickDotaPlusSuggestion[24]; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastActiveTime[24]; // 0x_            
            float m_flIdleTime[24]; // 0x_            
            bool m_bLoggedInElsewhere[24]; // 0x_            
            bool m_bPlayerLoadedCompletely[64]; // 0x_            
            std::int32_t m_iDisconnectionReason[64]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint64_t m_SelectedGuide[64]; // 0x_            
            bool m_bIsUsingPlusGuide[64]; // 0x_            
            std::uint32_t m_vecPredictedRanks[64]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint32_t m_unLastRadiantFortPct; // 0x_            
            std::uint32_t m_unLastDireFortPct; // 0x_            
            std::int32_t m_iCustomTeamAssignments[24]; // 0x_            
            // m_vecPlayerLevelUpTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecPlayerLevelUpTimes[24];
            char m_vecPlayerLevelUpTimes[0x_]; // 0x_            
            std::int32_t m_iManaSpent[64][6]; // 0x_            
            std::int32_t m_iNeutralOption[64][6][6]; // 0x_            
            bool m_bLeaverAlreadyDetected; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_TimedKillList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::TimedKillEvent_t> m_TimedKillList;
            char m_TimedKillList[0x_]; // 0x_            
            // m_TimedAssistList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::TimedKillEvent_t> m_TimedAssistList;
            char m_TimedAssistList[0x_]; // 0x_            
            // m_TimedDeathList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::TimedKillEvent_t> m_TimedDeathList;
            char m_TimedDeathList[0x_]; // 0x_            
            std::uint32_t m_unLastHeroPickOrder; // 0x_            
            std::int32_t m_iBountyGoldEarned[24]; // 0x_            
            std::int32_t m_iRangeCreepUpgradeGoldEarned[24]; // 0x_            
            std::int32_t m_iObserverWardsDestroyed[24]; // 0x_            
            std::int32_t m_iReliableGoldEarned[24]; // 0x_            
            std::int32_t m_iGoldLossPrevented[24]; // 0x_            
            std::int32_t m_iMaxHatStacks[24]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hTeamCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_Unit_Courier>> m_hTeamCouriers[15];
            char m_hTeamCouriers[0x_]; // 0x_            
            // m_hPlayerCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_Unit_Courier>> m_hPlayerCouriers[64];
            char m_hPlayerCouriers[0x_]; // 0x_            
            float m_flAvailableLaneGold[15]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_DamageShareList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::DamageShareEvent_t> m_DamageShareList[24];
            char m_DamageShareList[0x_]; // 0x_            
            source2sdk::server::DamageShareEvent_t m_AbsorbedDamageRollup[24][25]; // 0x_            
            source2sdk::client::AbilityID_t m_playerAbilityUpgradeOrder[24][25]; // 0x_            
            std::int32_t m_playerAbilityUpgradeTimes[24][25]; // 0x_            
            std::int32_t m_playerAbilityUpgradeCount[24]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_fullUpdateCount[64]; // 0x_            
            std::int32_t m_iCouriersDeployed[24]; // 0x_            
            std::int32_t m_iCouriersPotentiallyKilled[24]; // 0x_            
            std::int32_t m_iCommandsIssued[24]; // 0x_            
            std::uint32_t m_hHeroSpawnGroup[24]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_fNextLaneDetectionUpdate; // 0x_            
            float m_fNextTimedHeroStatsUpdate; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bInitializedLaneWaypoints; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint32_t m_nLastWardSuggestionBuildingState; // 0x_            
            std::uint32_t m_nLastWardSuggestionUpdateNum; // 0x_            
            bool m_bLastWardSuggestionRoshanAlive; // 0x_            
            bool m_bDoFinalPregameSuggestion[10]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_fNextCreepDistanceUpdate; // 0x_            
            float m_fCreepDistanceSafe[15]; // 0x_            
            float m_fCreepDistanceMid[15]; // 0x_            
            float m_fCreepDistanceOff[15]; // 0x_            
            source2sdk::entity2::GameTime_t m_fLastSuggestionTime; // 0x_            
            bool m_bHasRevealedAnonymizedEnemyPlayerInfo; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::PlayerID_t m_nRequestedBotPlayerID; // 0x_            
            float m_fNextCombatLogLocationUpdateTime; // 0x_            
            float m_fNextAPMUpdateTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecPendingPlayerResourceRequests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_vecPendingPlayerResourceRequests;
            char m_vecPendingPlayerResourceRequests[0x_]; // 0x_            
            std::int32_t m_iRampages[24]; // 0x_            
            std::int32_t m_iTripleKills[24]; // 0x_            
            std::int32_t m_iCouriersKilled[24]; // 0x_            
            std::int32_t m_iAegisesSnatched[24]; // 0x_            
            std::int32_t m_iCheesesEaten[24]; // 0x_            
            std::int32_t m_iRapiersPurchased[24]; // 0x_            
            float m_flPushingDamage[24]; // 0x_            
            std::int32_t m_iRoshanKillsNight[24]; // 0x_            
            std::int32_t m_iRoshanKillsDay[24]; // 0x_            
            std::int32_t m_iPortalsUsed[24]; // 0x_            
            std::int32_t m_iWisdomRunesGained[24]; // 0x_            
            std::int32_t m_iShieldRunesGained[24]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_PlayerResource because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_PlayerResource) == 0x_);
    };
};

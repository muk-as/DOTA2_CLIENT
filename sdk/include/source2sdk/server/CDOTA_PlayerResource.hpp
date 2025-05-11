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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xeef0
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
            uint8_t _pad04d8[0x240]; // 0x4d8
            // metadata: MNetworkEnable
            // m_vecPlayerTeamData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PlayerResourcePlayerTeamData_t> m_vecPlayerTeamData;
            char m_vecPlayerTeamData[0x68]; // 0x718            
            // metadata: MNetworkEnable
            // m_vecPlayerData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PlayerResourcePlayerData_t> m_vecPlayerData;
            char m_vecPlayerData[0x68]; // 0x780            
            // metadata: MNetworkEnable
            // m_vecBrodcasterData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PlayerResourceBroadcasterData_t> m_vecBrodcasterData;
            char m_vecBrodcasterData[0x68]; // 0x7e8            
            // metadata: MNetworkEnable
            // m_vecEventsForDisplay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint32_t> m_vecEventsForDisplay;
            char m_vecEventsForDisplay[0x18]; // 0x850            
            // metadata: MNetworkEnable
            std::int8_t m_nPrimaryEventIndex; // 0x868            
            uint8_t _pad0869[0x13]; // 0x869
            // m_playerIDToPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_playerIDToPlayer[64];
            char m_playerIDToPlayer[0x100]; // 0x87c            
            uint8_t _pad097c[0x244]; // 0x97c
            // m_vecPendingTreeRemovals has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sPendingTreeRemoval> m_vecPendingTreeRemovals;
            char m_vecPendingTreeRemovals[0x18]; // 0xbc0            
            // m_vecPendingTreeModelChanges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sPendingTreeModelChange> m_vecPendingTreeModelChanges;
            char m_vecPendingTreeModelChanges[0x18]; // 0xbd8            
            float m_flClaimedFarm[24]; // 0xbf0            
            float m_flEarnedCreepFarm[24]; // 0xc50            
            std::int32_t m_iScaledPlayerDamage[24]; // 0xcb0            
            std::int32_t m_iScaledTowerDamage[24]; // 0xd10            
            std::int32_t m_iScaledHealing[24]; // 0xd70            
            std::int32_t m_iSupportAbilityValue[24]; // 0xdd0            
            std::int32_t m_nNumMouseClickCastOrders[24]; // 0xe30            
            float m_flTimeWithUnspentSkillPoints[24]; // 0xe90            
            std::int32_t m_iRawPlayerDamage[24]; // 0xef0            
            std::int32_t m_iRawTowerDamage[24]; // 0xf50            
            std::int32_t m_iRawHealing[24]; // 0xfb0            
            std::int32_t m_iRawPlayerDamageReceivedPreReduction[3][24]; // 0x1010            
            std::int32_t m_iRawPlayerDamageReceivedPostReduction[3][24]; // 0x1130            
            std::int32_t m_iTotalPlayerDamageMatrix[24][24]; // 0x1250            
            std::int32_t m_iRawPlayerDamageMatrix[24][24]; // 0x1b50            
            std::int32_t m_iAssistsMatrix[24][24]; // 0x2450            
            std::int32_t m_iTimeLastSeen[24]; // 0x2d50            
            std::int32_t m_iTotalDisconnectedTime[24]; // 0x2db0            
            double m_dTimeLastRecieved[24]; // 0x2e10            
            std::int32_t m_iGoldBonusEarned[24]; // 0x2ed0            
            std::int32_t m_iExperimentalGoldEarned[24]; // 0x2f30            
            std::int32_t m_iExperimental2GoldEarned[24]; // 0x2f90            
            std::int32_t m_iCreepDenyGoldEarned[24]; // 0x2ff0            
            std::int32_t m_iTPScrollsPurchased[24]; // 0x3050            
            uint8_t _pad30b0[0x240]; // 0x30b0
            std::int32_t m_iAegisPickups[24]; // 0x32f0            
            std::int32_t m_iTeleportsUsed[24]; // 0x3350            
            std::int32_t m_iNumConsumablesPurchased[24]; // 0x33b0            
            std::int32_t m_iNumItemsPurchased[24]; // 0x3410            
            // m_vecItemsPurchased has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::PurchasedItem_t> m_vecItemsPurchased[24];
            char m_vecItemsPurchased[0x240]; // 0x3470            
            float m_flTimeOfLastItemPurchase[24]; // 0x36b0            
            float m_flTimeOfLastConsumablePurchase[24]; // 0x3710            
            float m_flTimeOfLastDeath[24]; // 0x3770            
            std::int32_t m_iTowerDamageTaken[24]; // 0x37d0            
            std::int32_t m_iCreepDamageTaken[24]; // 0x3830            
            std::int32_t m_iHeroDamageTaken[24]; // 0x3890            
            std::int32_t m_iTotalTowerDamageTaken[24]; // 0x38f0            
            std::int32_t m_iTotalCreepDamageTaken[24]; // 0x3950            
            std::int32_t m_iTotalHeroDamageTaken[24]; // 0x39b0            
            std::int32_t m_iRank[24]; // 0x3a10            
            std::int32_t m_iRankUncertainty[24]; // 0x3a70            
            bool m_bRankCalibrated[24]; // 0x3ad0            
            bool m_bLowPriority[24]; // 0x3ae8            
            std::int32_t m_nWins[24]; // 0x3b00            
            std::int32_t m_nLosses[24]; // 0x3b60            
            std::int32_t m_nSmurfCategory[24]; // 0x3bc0            
            std::int32_t m_nBehaviorScore[24]; // 0x3c20            
            std::int32_t m_nCommScore[24]; // 0x3c80            
            bool m_bWasHeroPickDotaPlusSuggestion[24]; // 0x3ce0            
            source2sdk::entity2::GameTime_t m_flLastActiveTime[24]; // 0x3cf8            
            float m_flIdleTime[24]; // 0x3d58            
            bool m_bLoggedInElsewhere[24]; // 0x3db8            
            bool m_bPlayerLoadedCompletely[64]; // 0x3dd0            
            std::int32_t m_iDisconnectionReason[64]; // 0x3e10            
            uint8_t _pad3f10[0x600]; // 0x3f10
            std::uint64_t m_SelectedGuide[64]; // 0x4510            
            bool m_bIsUsingPlusGuide[64]; // 0x4710            
            std::uint32_t m_vecPredictedRanks[64]; // 0x4750            
            uint8_t _pad4850[0xc00]; // 0x4850
            std::uint32_t m_unLastRadiantFortPct; // 0x5450            
            std::uint32_t m_unLastDireFortPct; // 0x5454            
            std::int32_t m_iCustomTeamAssignments[24]; // 0x5458            
            // m_vecPlayerLevelUpTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecPlayerLevelUpTimes[24];
            char m_vecPlayerLevelUpTimes[0x240]; // 0x54b8            
            std::int32_t m_iManaSpent[64][6]; // 0x56f8            
            std::int32_t m_iNeutralOption[64][6][6]; // 0x5cf8            
            bool m_bLeaverAlreadyDetected; // 0x80f8            
            uint8_t _pad80f9[0x427]; // 0x80f9
            // m_TimedKillList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::TimedKillEvent_t> m_TimedKillList;
            char m_TimedKillList[0x18]; // 0x8520            
            // m_TimedAssistList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::TimedKillEvent_t> m_TimedAssistList;
            char m_TimedAssistList[0x18]; // 0x8538            
            // m_TimedDeathList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::TimedKillEvent_t> m_TimedDeathList;
            char m_TimedDeathList[0x18]; // 0x8550            
            std::uint32_t m_unLastHeroPickOrder; // 0x8568            
            std::int32_t m_iBountyGoldEarned[24]; // 0x856c            
            std::int32_t m_iRangeCreepUpgradeGoldEarned[24]; // 0x85cc            
            std::int32_t m_iObserverWardsDestroyed[24]; // 0x862c            
            std::int32_t m_iReliableGoldEarned[24]; // 0x868c            
            std::int32_t m_iGoldLossPrevented[24]; // 0x86ec            
            std::int32_t m_iMaxHatStacks[24]; // 0x874c            
            uint8_t _pad87ac[0x5c]; // 0x87ac
            // m_hTeamCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_Unit_Courier>> m_hTeamCouriers[15];
            char m_hTeamCouriers[0x168]; // 0x8808            
            // m_hPlayerCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_Unit_Courier>> m_hPlayerCouriers[64];
            char m_hPlayerCouriers[0x600]; // 0x8970            
            float m_flAvailableLaneGold[15]; // 0x8f70            
            uint8_t _pad8fac[0x4]; // 0x8fac
            // m_DamageShareList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::DamageShareEvent_t> m_DamageShareList[24];
            char m_DamageShareList[0x240]; // 0x8fb0            
            source2sdk::server::DamageShareEvent_t m_AbsorbedDamageRollup[24][25]; // 0x91f0            
            source2sdk::client::AbilityID_t m_playerAbilityUpgradeOrder[24][25]; // 0xae10            
            std::int32_t m_playerAbilityUpgradeTimes[24][25]; // 0xb770            
            std::int32_t m_playerAbilityUpgradeCount[24]; // 0xc0d0            
            uint8_t _padc130[0x40]; // 0xc130
            std::int32_t m_fullUpdateCount[64]; // 0xc170            
            std::int32_t m_iCouriersDeployed[24]; // 0xc270            
            std::int32_t m_iCouriersPotentiallyKilled[24]; // 0xc2d0            
            std::int32_t m_iCommandsIssued[24]; // 0xc330            
            std::uint32_t m_hHeroSpawnGroup[24]; // 0xc390            
            uint8_t _padc3f0[0x17c0]; // 0xc3f0
            float m_fNextLaneDetectionUpdate; // 0xdbb0            
            float m_fNextTimedHeroStatsUpdate; // 0xdbb4            
            uint8_t _paddbb8[0x2a0]; // 0xdbb8
            bool m_bInitializedLaneWaypoints; // 0xde58            
            uint8_t _padde59[0x517]; // 0xde59
            std::uint32_t m_nLastWardSuggestionBuildingState; // 0xe370            
            std::uint32_t m_nLastWardSuggestionUpdateNum; // 0xe374            
            bool m_bLastWardSuggestionRoshanAlive; // 0xe378            
            bool m_bDoFinalPregameSuggestion[10]; // 0xe379            
            uint8_t _pade383[0x1]; // 0xe383
            float m_fNextCreepDistanceUpdate; // 0xe384            
            float m_fCreepDistanceSafe[15]; // 0xe388            
            float m_fCreepDistanceMid[15]; // 0xe3c4            
            float m_fCreepDistanceOff[15]; // 0xe400            
            source2sdk::entity2::GameTime_t m_fLastSuggestionTime; // 0xe43c            
            bool m_bHasRevealedAnonymizedEnemyPlayerInfo; // 0xe440            
            uint8_t _pade441[0x607]; // 0xe441
            source2sdk::client::PlayerID_t m_nRequestedBotPlayerID; // 0xea48            
            float m_fNextCombatLogLocationUpdateTime; // 0xea4c            
            float m_fNextAPMUpdateTime; // 0xea50            
            uint8_t _padea54[0x4]; // 0xea54
            // m_vecPendingPlayerResourceRequests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_vecPendingPlayerResourceRequests;
            char m_vecPendingPlayerResourceRequests[0x18]; // 0xea58            
            std::int32_t m_iRampages[24]; // 0xea70            
            std::int32_t m_iTripleKills[24]; // 0xead0            
            std::int32_t m_iCouriersKilled[24]; // 0xeb30            
            std::int32_t m_iAegisesSnatched[24]; // 0xeb90            
            std::int32_t m_iCheesesEaten[24]; // 0xebf0            
            std::int32_t m_iRapiersPurchased[24]; // 0xec50            
            float m_flPushingDamage[24]; // 0xecb0            
            std::int32_t m_iRoshanKillsNight[24]; // 0xed10            
            std::int32_t m_iRoshanKillsDay[24]; // 0xed70            
            std::int32_t m_iPortalsUsed[24]; // 0xedd0            
            std::int32_t m_iWisdomRunesGained[24]; // 0xee30            
            std::int32_t m_iShieldRunesGained[24]; // 0xee90            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_PlayerResource because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_PlayerResource) == 0xeef0);
    };
};

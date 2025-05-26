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
        // Size: 0xeff8
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
            uint8_t _pad04e0[0x240]; // 0x4e0
            // metadata: MNetworkEnable
            // m_vecPlayerTeamData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PlayerResourcePlayerTeamData_t> m_vecPlayerTeamData;
            char m_vecPlayerTeamData[0x68]; // 0x720            
            // metadata: MNetworkEnable
            // m_vecPlayerData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PlayerResourcePlayerData_t> m_vecPlayerData;
            char m_vecPlayerData[0x68]; // 0x788            
            // metadata: MNetworkEnable
            // m_vecBrodcasterData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PlayerResourceBroadcasterData_t> m_vecBrodcasterData;
            char m_vecBrodcasterData[0x68]; // 0x7f0            
            // metadata: MNetworkEnable
            // m_vecEventsForDisplay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint32_t> m_vecEventsForDisplay;
            char m_vecEventsForDisplay[0x18]; // 0x858            
            // metadata: MNetworkEnable
            std::int8_t m_nPrimaryEventIndex; // 0x870            
            uint8_t _pad0871[0x13]; // 0x871
            // m_playerIDToPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_playerIDToPlayer[64];
            char m_playerIDToPlayer[0x100]; // 0x884            
            // m_playerIDToPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_playerIDToPawn[64];
            char m_playerIDToPawn[0x100]; // 0x984            
            uint8_t _pad0a84[0x244]; // 0xa84
            // m_vecPendingTreeRemovals has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sPendingTreeRemoval> m_vecPendingTreeRemovals;
            char m_vecPendingTreeRemovals[0x18]; // 0xcc8            
            // m_vecPendingTreeModelChanges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sPendingTreeModelChange> m_vecPendingTreeModelChanges;
            char m_vecPendingTreeModelChanges[0x18]; // 0xce0            
            float m_flClaimedFarm[24]; // 0xcf8            
            float m_flEarnedCreepFarm[24]; // 0xd58            
            std::int32_t m_iScaledPlayerDamage[24]; // 0xdb8            
            std::int32_t m_iScaledTowerDamage[24]; // 0xe18            
            std::int32_t m_iScaledHealing[24]; // 0xe78            
            std::int32_t m_iSupportAbilityValue[24]; // 0xed8            
            std::int32_t m_nNumMouseClickCastOrders[24]; // 0xf38            
            float m_flTimeWithUnspentSkillPoints[24]; // 0xf98            
            std::int32_t m_iRawPlayerDamage[24]; // 0xff8            
            std::int32_t m_iRawTowerDamage[24]; // 0x1058            
            std::int32_t m_iRawHealing[24]; // 0x10b8            
            std::int32_t m_iRawPlayerDamageReceivedPreReduction[3][24]; // 0x1118            
            std::int32_t m_iRawPlayerDamageReceivedPostReduction[3][24]; // 0x1238            
            std::int32_t m_iTotalPlayerDamageMatrix[24][24]; // 0x1358            
            std::int32_t m_iRawPlayerDamageMatrix[24][24]; // 0x1c58            
            std::int32_t m_iAssistsMatrix[24][24]; // 0x2558            
            std::int32_t m_iTimeLastSeen[24]; // 0x2e58            
            std::int32_t m_iTotalDisconnectedTime[24]; // 0x2eb8            
            double m_dTimeLastRecieved[24]; // 0x2f18            
            std::int32_t m_iGoldBonusEarned[24]; // 0x2fd8            
            std::int32_t m_iExperimentalGoldEarned[24]; // 0x3038            
            std::int32_t m_iExperimental2GoldEarned[24]; // 0x3098            
            std::int32_t m_iCreepDenyGoldEarned[24]; // 0x30f8            
            std::int32_t m_iTPScrollsPurchased[24]; // 0x3158            
            uint8_t _pad31b8[0x240]; // 0x31b8
            std::int32_t m_iAegisPickups[24]; // 0x33f8            
            std::int32_t m_iTeleportsUsed[24]; // 0x3458            
            std::int32_t m_iNumConsumablesPurchased[24]; // 0x34b8            
            std::int32_t m_iNumItemsPurchased[24]; // 0x3518            
            // m_vecItemsPurchased has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::PurchasedItem_t> m_vecItemsPurchased[24];
            char m_vecItemsPurchased[0x240]; // 0x3578            
            float m_flTimeOfLastItemPurchase[24]; // 0x37b8            
            float m_flTimeOfLastConsumablePurchase[24]; // 0x3818            
            float m_flTimeOfLastDeath[24]; // 0x3878            
            std::int32_t m_iTowerDamageTaken[24]; // 0x38d8            
            std::int32_t m_iCreepDamageTaken[24]; // 0x3938            
            std::int32_t m_iHeroDamageTaken[24]; // 0x3998            
            std::int32_t m_iTotalTowerDamageTaken[24]; // 0x39f8            
            std::int32_t m_iTotalCreepDamageTaken[24]; // 0x3a58            
            std::int32_t m_iTotalHeroDamageTaken[24]; // 0x3ab8            
            std::int32_t m_iRank[24]; // 0x3b18            
            std::int32_t m_iRankUncertainty[24]; // 0x3b78            
            bool m_bRankCalibrated[24]; // 0x3bd8            
            bool m_bLowPriority[24]; // 0x3bf0            
            std::int32_t m_nWins[24]; // 0x3c08            
            std::int32_t m_nLosses[24]; // 0x3c68            
            std::int32_t m_nSmurfCategory[24]; // 0x3cc8            
            std::int32_t m_nBehaviorScore[24]; // 0x3d28            
            std::int32_t m_nCommScore[24]; // 0x3d88            
            bool m_bWasHeroPickDotaPlusSuggestion[24]; // 0x3de8            
            source2sdk::entity2::GameTime_t m_flLastActiveTime[24]; // 0x3e00            
            float m_flIdleTime[24]; // 0x3e60            
            bool m_bLoggedInElsewhere[24]; // 0x3ec0            
            bool m_bPlayerLoadedCompletely[64]; // 0x3ed8            
            std::int32_t m_iDisconnectionReason[64]; // 0x3f18            
            uint8_t _pad4018[0x600]; // 0x4018
            std::uint64_t m_SelectedGuide[64]; // 0x4618            
            bool m_bIsUsingPlusGuide[64]; // 0x4818            
            std::uint32_t m_vecPredictedRanks[64]; // 0x4858            
            uint8_t _pad4958[0xc00]; // 0x4958
            std::uint32_t m_unLastRadiantFortPct; // 0x5558            
            std::uint32_t m_unLastDireFortPct; // 0x555c            
            std::int32_t m_iCustomTeamAssignments[24]; // 0x5560            
            // m_vecPlayerLevelUpTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecPlayerLevelUpTimes[24];
            char m_vecPlayerLevelUpTimes[0x240]; // 0x55c0            
            std::int32_t m_iManaSpent[64][6]; // 0x5800            
            std::int32_t m_iNeutralOption[64][6][6]; // 0x5e00            
            bool m_bLeaverAlreadyDetected; // 0x8200            
            uint8_t _pad8201[0x427]; // 0x8201
            // m_TimedKillList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::TimedKillEvent_t> m_TimedKillList;
            char m_TimedKillList[0x18]; // 0x8628            
            // m_TimedAssistList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::TimedKillEvent_t> m_TimedAssistList;
            char m_TimedAssistList[0x18]; // 0x8640            
            // m_TimedDeathList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::TimedKillEvent_t> m_TimedDeathList;
            char m_TimedDeathList[0x18]; // 0x8658            
            std::uint32_t m_unLastHeroPickOrder; // 0x8670            
            std::int32_t m_iBountyGoldEarned[24]; // 0x8674            
            std::int32_t m_iRangeCreepUpgradeGoldEarned[24]; // 0x86d4            
            std::int32_t m_iObserverWardsDestroyed[24]; // 0x8734            
            std::int32_t m_iReliableGoldEarned[24]; // 0x8794            
            std::int32_t m_iGoldLossPrevented[24]; // 0x87f4            
            std::int32_t m_iMaxHatStacks[24]; // 0x8854            
            uint8_t _pad88b4[0x5c]; // 0x88b4
            // m_hTeamCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_Unit_Courier>> m_hTeamCouriers[15];
            char m_hTeamCouriers[0x168]; // 0x8910            
            // m_hPlayerCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_Unit_Courier>> m_hPlayerCouriers[64];
            char m_hPlayerCouriers[0x600]; // 0x8a78            
            float m_flAvailableLaneGold[15]; // 0x9078            
            uint8_t _pad90b4[0x4]; // 0x90b4
            // m_DamageShareList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::DamageShareEvent_t> m_DamageShareList[24];
            char m_DamageShareList[0x240]; // 0x90b8            
            source2sdk::server::DamageShareEvent_t m_AbsorbedDamageRollup[24][25]; // 0x92f8            
            source2sdk::client::AbilityID_t m_playerAbilityUpgradeOrder[24][25]; // 0xaf18            
            std::int32_t m_playerAbilityUpgradeTimes[24][25]; // 0xb878            
            std::int32_t m_playerAbilityUpgradeCount[24]; // 0xc1d8            
            uint8_t _padc238[0x40]; // 0xc238
            std::int32_t m_fullUpdateCount[64]; // 0xc278            
            std::int32_t m_iCouriersDeployed[24]; // 0xc378            
            std::int32_t m_iCouriersPotentiallyKilled[24]; // 0xc3d8            
            std::int32_t m_iCommandsIssued[24]; // 0xc438            
            std::uint32_t m_hHeroSpawnGroup[24]; // 0xc498            
            uint8_t _padc4f8[0x17c0]; // 0xc4f8
            float m_fNextLaneDetectionUpdate; // 0xdcb8            
            float m_fNextTimedHeroStatsUpdate; // 0xdcbc            
            uint8_t _paddcc0[0x2a0]; // 0xdcc0
            bool m_bInitializedLaneWaypoints; // 0xdf60            
            uint8_t _paddf61[0x517]; // 0xdf61
            std::uint32_t m_nLastWardSuggestionBuildingState; // 0xe478            
            std::uint32_t m_nLastWardSuggestionUpdateNum; // 0xe47c            
            bool m_bLastWardSuggestionRoshanAlive; // 0xe480            
            bool m_bDoFinalPregameSuggestion[10]; // 0xe481            
            uint8_t _pade48b[0x1]; // 0xe48b
            float m_fNextCreepDistanceUpdate; // 0xe48c            
            float m_fCreepDistanceSafe[15]; // 0xe490            
            float m_fCreepDistanceMid[15]; // 0xe4cc            
            float m_fCreepDistanceOff[15]; // 0xe508            
            source2sdk::entity2::GameTime_t m_fLastSuggestionTime; // 0xe544            
            bool m_bHasRevealedAnonymizedEnemyPlayerInfo; // 0xe548            
            uint8_t _pade549[0x607]; // 0xe549
            source2sdk::client::PlayerID_t m_nRequestedBotPlayerID; // 0xeb50            
            float m_fNextCombatLogLocationUpdateTime; // 0xeb54            
            float m_fNextAPMUpdateTime; // 0xeb58            
            uint8_t _padeb5c[0x4]; // 0xeb5c
            // m_vecPendingPlayerResourceRequests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_vecPendingPlayerResourceRequests;
            char m_vecPendingPlayerResourceRequests[0x18]; // 0xeb60            
            std::int32_t m_iRampages[24]; // 0xeb78            
            std::int32_t m_iTripleKills[24]; // 0xebd8            
            std::int32_t m_iCouriersKilled[24]; // 0xec38            
            std::int32_t m_iAegisesSnatched[24]; // 0xec98            
            std::int32_t m_iCheesesEaten[24]; // 0xecf8            
            std::int32_t m_iRapiersPurchased[24]; // 0xed58            
            float m_flPushingDamage[24]; // 0xedb8            
            std::int32_t m_iRoshanKillsNight[24]; // 0xee18            
            std::int32_t m_iRoshanKillsDay[24]; // 0xee78            
            std::int32_t m_iPortalsUsed[24]; // 0xeed8            
            std::int32_t m_iWisdomRunesGained[24]; // 0xef38            
            std::int32_t m_iShieldRunesGained[24]; // 0xef98            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_PlayerResource because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_PlayerResource) == 0xeff8);
    };
};

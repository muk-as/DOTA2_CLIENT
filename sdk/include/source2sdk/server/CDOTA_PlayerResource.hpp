#pragma once
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
    class CDOTA_Unit_Courier;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xef48
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "PlayerResourcePlayerTeamData_t m_vecPlayerTeamData"
    // static metadata: MNetworkVarNames "PlayerResourcePlayerData_t m_vecPlayerData"
    // static metadata: MNetworkVarNames "PlayerResourceBroadcasterData_t m_vecBrodcasterData"
    // static metadata: MNetworkVarNames "uint32 m_vecEventsForDisplay"
    // static metadata: MNetworkVarNames "int8 m_nPrimaryEventIndex"
    #pragma pack(push, 1)
    class CDOTA_PlayerResource : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_vecPlayerTeamData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::PlayerResourcePlayerTeamData_t> m_vecPlayerTeamData;
        char m_vecPlayerTeamData[0x50]; // 0x4b8        
        // metadata: MNetworkEnable
        // m_vecPlayerData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::PlayerResourcePlayerData_t> m_vecPlayerData;
        char m_vecPlayerData[0x50]; // 0x508        
        // metadata: MNetworkEnable
        // m_vecBrodcasterData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::PlayerResourceBroadcasterData_t> m_vecBrodcasterData;
        char m_vecBrodcasterData[0x50]; // 0x558        
        // metadata: MNetworkEnable
        // m_vecEventsForDisplay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<uint32_t> m_vecEventsForDisplay;
        char m_vecEventsForDisplay[0x18]; // 0x5a8        
        // metadata: MNetworkEnable
        int8_t m_nPrimaryEventIndex; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c1[0x13]; // 0x5c1
        // m_playerIDToPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_playerIDToPlayer[64];
        char m_playerIDToPlayer[0x100]; // 0x5d4        
        [[maybe_unused]] std::uint8_t pad_0x6d4[0x244]; // 0x6d4
        // m_vecPendingTreeRemovals has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::sPendingTreeRemoval> m_vecPendingTreeRemovals;
        char m_vecPendingTreeRemovals[0x18]; // 0x918        
        // m_vecPendingTreeModelChanges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::sPendingTreeModelChange> m_vecPendingTreeModelChanges;
        char m_vecPendingTreeModelChanges[0x18]; // 0x930        
        float m_flClaimedFarm[24]; // 0x948        
        float m_flEarnedCreepFarm[24]; // 0x9a8        
        int32_t m_iScaledPlayerDamage[24]; // 0xa08        
        int32_t m_iScaledTowerDamage[24]; // 0xa68        
        int32_t m_iScaledHealing[24]; // 0xac8        
        int32_t m_iSupportAbilityValue[24]; // 0xb28        
        int32_t m_nNumMouseClickCastOrders[24]; // 0xb88        
        float m_flTimeWithUnspentSkillPoints[24]; // 0xbe8        
        int32_t m_iRawPlayerDamage[24]; // 0xc48        
        int32_t m_iRawTowerDamage[24]; // 0xca8        
        int32_t m_iRawHealing[24]; // 0xd08        
        int32_t m_iRawPlayerDamageReceivedPreReduction[3][24]; // 0xd68        
        int32_t m_iRawPlayerDamageReceivedPostReduction[3][24]; // 0xe88        
        int32_t m_iTotalPlayerDamageMatrix[24][24]; // 0xfa8        
        int32_t m_iRawPlayerDamageMatrix[24][24]; // 0x18a8        
        int32_t m_iAssistsMatrix[24][24]; // 0x21a8        
        int32_t m_iTimeLastSeen[24]; // 0x2aa8        
        int32_t m_iTotalDisconnectedTime[24]; // 0x2b08        
        double m_dTimeLastRecieved[24]; // 0x2b68        
        int32_t m_iGoldBonusEarned[24]; // 0x2c28        
        int32_t m_iExperimentalGoldEarned[24]; // 0x2c88        
        int32_t m_iExperimental2GoldEarned[24]; // 0x2ce8        
        int32_t m_iCreepDenyGoldEarned[24]; // 0x2d48        
        int32_t m_iTPScrollsPurchased[24]; // 0x2da8        
        [[maybe_unused]] std::uint8_t pad_0x2e08[0x240]; // 0x2e08
        int32_t m_iAegisPickups[24]; // 0x3048        
        int32_t m_iTeleportsUsed[24]; // 0x30a8        
        int32_t m_iNumConsumablesPurchased[24]; // 0x3108        
        int32_t m_iNumItemsPurchased[24]; // 0x3168        
        // m_vecItemsPurchased has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::PurchasedItem_t> m_vecItemsPurchased[24];
        char m_vecItemsPurchased[0x240]; // 0x31c8        
        float m_flTimeOfLastItemPurchase[24]; // 0x3408        
        float m_flTimeOfLastConsumablePurchase[24]; // 0x3468        
        float m_flTimeOfLastDeath[24]; // 0x34c8        
        int32_t m_iTowerDamageTaken[24]; // 0x3528        
        int32_t m_iCreepDamageTaken[24]; // 0x3588        
        int32_t m_iHeroDamageTaken[24]; // 0x35e8        
        int32_t m_iTotalTowerDamageTaken[24]; // 0x3648        
        int32_t m_iTotalCreepDamageTaken[24]; // 0x36a8        
        int32_t m_iTotalHeroDamageTaken[24]; // 0x3708        
        [[maybe_unused]] std::uint8_t pad_0x3768[0x240]; // 0x3768
        int32_t m_iRank[24]; // 0x39a8        
        bool m_bRankCalibrated[24]; // 0x3a08        
        bool m_bLowPriority[24]; // 0x3a20        
        int32_t m_nWins[24]; // 0x3a38        
        int32_t m_nLosses[24]; // 0x3a98        
        int32_t m_nSmurfCategory[24]; // 0x3af8        
        bool m_bWasHeroPickDotaPlusSuggestion[24]; // 0x3b58        
        entity2::GameTime_t m_flLastActiveTime[24]; // 0x3b70        
        float m_flIdleTime[24]; // 0x3bd0        
        bool m_bLoggedInElsewhere[24]; // 0x3c30        
        bool m_bPlayerLoadedCompletely[64]; // 0x3c48        
        int32_t m_iDisconnectionReason[64]; // 0x3c88        
        [[maybe_unused]] std::uint8_t pad_0x3d88[0x600]; // 0x3d88
        uint64_t m_SelectedGuide[64]; // 0x4388        
        bool m_bIsUsingPlusGuide[64]; // 0x4588        
        uint32_t m_vecPredictedRanks[64]; // 0x45c8        
        [[maybe_unused]] std::uint8_t pad_0x46c8[0xc00]; // 0x46c8
        uint32_t m_unLastRadiantFortPct; // 0x52c8        
        uint32_t m_unLastDireFortPct; // 0x52cc        
        int32_t m_iCustomTeamAssignments[24]; // 0x52d0        
        // m_vecPlayerLevelUpTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecPlayerLevelUpTimes[24];
        char m_vecPlayerLevelUpTimes[0x240]; // 0x5330        
        int32_t m_iManaSpent[64][6]; // 0x5570        
        int32_t m_iNeutralOption[64][6][6]; // 0x5b70        
        bool m_bLeaverAlreadyDetected; // 0x7f70        
        [[maybe_unused]] std::uint8_t pad_0x7f71[0x427]; // 0x7f71
        // m_TimedKillList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::TimedKillEvent_t> m_TimedKillList;
        char m_TimedKillList[0x18]; // 0x8398        
        // m_TimedAssistList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::TimedKillEvent_t> m_TimedAssistList;
        char m_TimedAssistList[0x18]; // 0x83b0        
        // m_TimedDeathList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::TimedKillEvent_t> m_TimedDeathList;
        char m_TimedDeathList[0x18]; // 0x83c8        
        uint32_t m_unLastHeroPickOrder; // 0x83e0        
        int32_t m_iBountyGoldEarned[24]; // 0x83e4        
        int32_t m_iRangeCreepUpgradeGoldEarned[24]; // 0x8444        
        int32_t m_iObserverWardsDestroyed[24]; // 0x84a4        
        int32_t m_iReliableGoldEarned[24]; // 0x8504        
        int32_t m_iGoldLossPrevented[24]; // 0x8564        
        [[maybe_unused]] std::uint8_t pad_0x85c4[0x5c]; // 0x85c4
        // m_hTeamCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CDOTA_Unit_Courier>> m_hTeamCouriers[15];
        char m_hTeamCouriers[0x168]; // 0x8620        
        // m_hPlayerCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CDOTA_Unit_Courier>> m_hPlayerCouriers[64];
        char m_hPlayerCouriers[0x600]; // 0x8788        
        float m_flAvailableLaneGold[15]; // 0x8d88        
        [[maybe_unused]] std::uint8_t pad_0x8dc4[0x4]; // 0x8dc4
        // m_DamageShareList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::DamageShareEvent_t> m_DamageShareList[24];
        char m_DamageShareList[0x240]; // 0x8dc8        
        server::DamageShareEvent_t m_AbsorbedDamageRollup[24][25]; // 0x9008        
        client::AbilityID_t m_playerAbilityUpgradeOrder[24][25]; // 0xac28        
        int32_t m_playerAbilityUpgradeTimes[24][25]; // 0xb588        
        int32_t m_playerAbilityUpgradeCount[24]; // 0xbee8        
        [[maybe_unused]] std::uint8_t pad_0xbf48[0x40]; // 0xbf48
        int32_t m_fullUpdateCount[64]; // 0xbf88        
        int32_t m_iCouriersDeployed[24]; // 0xc088        
        int32_t m_iCouriersPotentiallyKilled[24]; // 0xc0e8        
        int32_t m_iCommandsIssued[24]; // 0xc148        
        uint32_t m_hHeroSpawnGroup[24]; // 0xc1a8        
        [[maybe_unused]] std::uint8_t pad_0xc208[0x17c0]; // 0xc208
        float m_fNextLaneDetectionUpdate; // 0xd9c8        
        float m_fNextTimedHeroStatsUpdate; // 0xd9cc        
        [[maybe_unused]] std::uint8_t pad_0xd9d0[0x2a0]; // 0xd9d0
        bool m_bInitializedLaneWaypoints; // 0xdc70        
        [[maybe_unused]] std::uint8_t pad_0xdc71[0x757]; // 0xdc71
        uint32_t m_nLastWardSuggestionBuildingState; // 0xe3c8        
        uint32_t m_nLastWardSuggestionUpdateNum; // 0xe3cc        
        bool m_bLastWardSuggestionRoshanAlive; // 0xe3d0        
        bool m_bDoFinalPregameSuggestion[10]; // 0xe3d1        
        [[maybe_unused]] std::uint8_t pad_0xe3db[0x1]; // 0xe3db
        float m_fNextCreepDistanceUpdate; // 0xe3dc        
        float m_fCreepDistanceSafe[15]; // 0xe3e0        
        float m_fCreepDistanceMid[15]; // 0xe41c        
        float m_fCreepDistanceOff[15]; // 0xe458        
        entity2::GameTime_t m_fLastSuggestionTime; // 0xe494        
        bool m_bHasRevealedAnonymizedEnemyPlayerInfo; // 0xe498        
        [[maybe_unused]] std::uint8_t pad_0xe499[0x607]; // 0xe499
        client::PlayerID_t m_nRequestedBotPlayerID; // 0xeaa0        
        float m_fNextCombatLogLocationUpdateTime; // 0xeaa4        
        float m_fNextAPMUpdateTime; // 0xeaa8        
        [[maybe_unused]] std::uint8_t pad_0xeaac[0x4]; // 0xeaac
        // m_vecPendingPlayerResourceRequests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_vecPendingPlayerResourceRequests;
        char m_vecPendingPlayerResourceRequests[0x18]; // 0xeab0        
        int32_t m_iRampages[24]; // 0xeac8        
        int32_t m_iTripleKills[24]; // 0xeb28        
        int32_t m_iCouriersKilled[24]; // 0xeb88        
        int32_t m_iAegisesSnatched[24]; // 0xebe8        
        int32_t m_iCheesesEaten[24]; // 0xec48        
        int32_t m_iRapiersPurchased[24]; // 0xeca8        
        float m_flPushingDamage[24]; // 0xed08        
        int32_t m_iRoshanKillsNight[24]; // 0xed68        
        int32_t m_iRoshanKillsDay[24]; // 0xedc8        
        int32_t m_iPortalsUsed[24]; // 0xee28        
        int32_t m_iWisdomRunesGained[24]; // 0xee88        
        int32_t m_iShieldRunesGained[24]; // 0xeee8        
        
        // Static fields:
        static uint64_t &Get_s_unLobbySteamID() {return *reinterpret_cast<uint64_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CDOTA_PlayerResource")->GetStaticFields()[0]->m_pInstance);};
        static uint64_t &Get_s_unLobbyPartyID() {return *reinterpret_cast<uint64_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CDOTA_PlayerResource")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_PlayerResource because it is not a standard-layout class
    static_assert(sizeof(CDOTA_PlayerResource) == 0xef48);
};

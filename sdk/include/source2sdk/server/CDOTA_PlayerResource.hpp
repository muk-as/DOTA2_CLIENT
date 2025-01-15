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
    // Size: 0xf138
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
    class CDOTA_PlayerResource : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_vecPlayerTeamData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::PlayerResourcePlayerTeamData_t> m_vecPlayerTeamData;
        char m_vecPlayerTeamData[0x68]; // 0x4e0        
        // metadata: MNetworkEnable
        // m_vecPlayerData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::PlayerResourcePlayerData_t> m_vecPlayerData;
        char m_vecPlayerData[0x68]; // 0x548        
        // metadata: MNetworkEnable
        // m_vecBrodcasterData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::PlayerResourceBroadcasterData_t> m_vecBrodcasterData;
        char m_vecBrodcasterData[0x68]; // 0x5b0        
        // metadata: MNetworkEnable
        // m_vecEventsForDisplay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<uint32_t> m_vecEventsForDisplay;
        char m_vecEventsForDisplay[0x18]; // 0x618        
        // metadata: MNetworkEnable
        int8_t m_nPrimaryEventIndex; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x631[0x13]; // 0x631
        // m_playerIDToPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_playerIDToPlayer[64];
        char m_playerIDToPlayer[0x100]; // 0x644        
        [[maybe_unused]] std::uint8_t pad_0x744[0x244]; // 0x744
        // m_vecPendingTreeRemovals has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::sPendingTreeRemoval> m_vecPendingTreeRemovals;
        char m_vecPendingTreeRemovals[0x18]; // 0x988        
        // m_vecPendingTreeModelChanges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::sPendingTreeModelChange> m_vecPendingTreeModelChanges;
        char m_vecPendingTreeModelChanges[0x18]; // 0x9a0        
        float m_flClaimedFarm[24]; // 0x9b8        
        float m_flEarnedCreepFarm[24]; // 0xa18        
        int32_t m_iScaledPlayerDamage[24]; // 0xa78        
        int32_t m_iScaledTowerDamage[24]; // 0xad8        
        int32_t m_iScaledHealing[24]; // 0xb38        
        int32_t m_iSupportAbilityValue[24]; // 0xb98        
        int32_t m_nNumMouseClickCastOrders[24]; // 0xbf8        
        float m_flTimeWithUnspentSkillPoints[24]; // 0xc58        
        int32_t m_iRawPlayerDamage[24]; // 0xcb8        
        int32_t m_iRawTowerDamage[24]; // 0xd18        
        int32_t m_iRawHealing[24]; // 0xd78        
        int32_t m_iRawPlayerDamageReceivedPreReduction[3][24]; // 0xdd8        
        int32_t m_iRawPlayerDamageReceivedPostReduction[3][24]; // 0xef8        
        int32_t m_iTotalPlayerDamageMatrix[24][24]; // 0x1018        
        int32_t m_iRawPlayerDamageMatrix[24][24]; // 0x1918        
        int32_t m_iAssistsMatrix[24][24]; // 0x2218        
        int32_t m_iTimeLastSeen[24]; // 0x2b18        
        int32_t m_iTotalDisconnectedTime[24]; // 0x2b78        
        double m_dTimeLastRecieved[24]; // 0x2bd8        
        int32_t m_iGoldBonusEarned[24]; // 0x2c98        
        int32_t m_iExperimentalGoldEarned[24]; // 0x2cf8        
        int32_t m_iExperimental2GoldEarned[24]; // 0x2d58        
        int32_t m_iCreepDenyGoldEarned[24]; // 0x2db8        
        int32_t m_iTPScrollsPurchased[24]; // 0x2e18        
        [[maybe_unused]] std::uint8_t pad_0x2e78[0x240]; // 0x2e78
        int32_t m_iAegisPickups[24]; // 0x30b8        
        int32_t m_iTeleportsUsed[24]; // 0x3118        
        int32_t m_iNumConsumablesPurchased[24]; // 0x3178        
        int32_t m_iNumItemsPurchased[24]; // 0x31d8        
        // m_vecItemsPurchased has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::PurchasedItem_t> m_vecItemsPurchased[24];
        char m_vecItemsPurchased[0x240]; // 0x3238        
        float m_flTimeOfLastItemPurchase[24]; // 0x3478        
        float m_flTimeOfLastConsumablePurchase[24]; // 0x34d8        
        float m_flTimeOfLastDeath[24]; // 0x3538        
        int32_t m_iTowerDamageTaken[24]; // 0x3598        
        int32_t m_iCreepDamageTaken[24]; // 0x35f8        
        int32_t m_iHeroDamageTaken[24]; // 0x3658        
        int32_t m_iTotalTowerDamageTaken[24]; // 0x36b8        
        int32_t m_iTotalCreepDamageTaken[24]; // 0x3718        
        int32_t m_iTotalHeroDamageTaken[24]; // 0x3778        
        [[maybe_unused]] std::uint8_t pad_0x37d8[0x240]; // 0x37d8
        int32_t m_iRank[24]; // 0x3a18        
        int32_t m_iRankUncertainty[24]; // 0x3a78        
        bool m_bRankCalibrated[24]; // 0x3ad8        
        bool m_bLowPriority[24]; // 0x3af0        
        int32_t m_nWins[24]; // 0x3b08        
        int32_t m_nLosses[24]; // 0x3b68        
        int32_t m_nSmurfCategory[24]; // 0x3bc8        
        int32_t m_nBehaviorScore[24]; // 0x3c28        
        int32_t m_nCommScore[24]; // 0x3c88        
        bool m_bWasHeroPickDotaPlusSuggestion[24]; // 0x3ce8        
        entity2::GameTime_t m_flLastActiveTime[24]; // 0x3d00        
        float m_flIdleTime[24]; // 0x3d60        
        bool m_bLoggedInElsewhere[24]; // 0x3dc0        
        bool m_bPlayerLoadedCompletely[64]; // 0x3dd8        
        int32_t m_iDisconnectionReason[64]; // 0x3e18        
        [[maybe_unused]] std::uint8_t pad_0x3f18[0x600]; // 0x3f18
        uint64_t m_SelectedGuide[64]; // 0x4518        
        bool m_bIsUsingPlusGuide[64]; // 0x4718        
        uint32_t m_vecPredictedRanks[64]; // 0x4758        
        [[maybe_unused]] std::uint8_t pad_0x4858[0xc00]; // 0x4858
        uint32_t m_unLastRadiantFortPct; // 0x5458        
        uint32_t m_unLastDireFortPct; // 0x545c        
        int32_t m_iCustomTeamAssignments[24]; // 0x5460        
        // m_vecPlayerLevelUpTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecPlayerLevelUpTimes[24];
        char m_vecPlayerLevelUpTimes[0x240]; // 0x54c0        
        int32_t m_iManaSpent[64][6]; // 0x5700        
        int32_t m_iNeutralOption[64][6][6]; // 0x5d00        
        bool m_bLeaverAlreadyDetected; // 0x8100        
        [[maybe_unused]] std::uint8_t pad_0x8101[0x427]; // 0x8101
        // m_TimedKillList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::TimedKillEvent_t> m_TimedKillList;
        char m_TimedKillList[0x18]; // 0x8528        
        // m_TimedAssistList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::TimedKillEvent_t> m_TimedAssistList;
        char m_TimedAssistList[0x18]; // 0x8540        
        // m_TimedDeathList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::TimedKillEvent_t> m_TimedDeathList;
        char m_TimedDeathList[0x18]; // 0x8558        
        uint32_t m_unLastHeroPickOrder; // 0x8570        
        int32_t m_iBountyGoldEarned[24]; // 0x8574        
        int32_t m_iRangeCreepUpgradeGoldEarned[24]; // 0x85d4        
        int32_t m_iObserverWardsDestroyed[24]; // 0x8634        
        int32_t m_iReliableGoldEarned[24]; // 0x8694        
        int32_t m_iGoldLossPrevented[24]; // 0x86f4        
        int32_t m_iMaxHatStacks[24]; // 0x8754        
        [[maybe_unused]] std::uint8_t pad_0x87b4[0x5c]; // 0x87b4
        // m_hTeamCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CDOTA_Unit_Courier>> m_hTeamCouriers[15];
        char m_hTeamCouriers[0x168]; // 0x8810        
        // m_hPlayerCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CDOTA_Unit_Courier>> m_hPlayerCouriers[64];
        char m_hPlayerCouriers[0x600]; // 0x8978        
        float m_flAvailableLaneGold[15]; // 0x8f78        
        [[maybe_unused]] std::uint8_t pad_0x8fb4[0x4]; // 0x8fb4
        // m_DamageShareList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::DamageShareEvent_t> m_DamageShareList[24];
        char m_DamageShareList[0x240]; // 0x8fb8        
        server::DamageShareEvent_t m_AbsorbedDamageRollup[24][25]; // 0x91f8        
        client::AbilityID_t m_playerAbilityUpgradeOrder[24][25]; // 0xae18        
        int32_t m_playerAbilityUpgradeTimes[24][25]; // 0xb778        
        int32_t m_playerAbilityUpgradeCount[24]; // 0xc0d8        
        [[maybe_unused]] std::uint8_t pad_0xc138[0x40]; // 0xc138
        int32_t m_fullUpdateCount[64]; // 0xc178        
        int32_t m_iCouriersDeployed[24]; // 0xc278        
        int32_t m_iCouriersPotentiallyKilled[24]; // 0xc2d8        
        int32_t m_iCommandsIssued[24]; // 0xc338        
        uint32_t m_hHeroSpawnGroup[24]; // 0xc398        
        [[maybe_unused]] std::uint8_t pad_0xc3f8[0x17c0]; // 0xc3f8
        float m_fNextLaneDetectionUpdate; // 0xdbb8        
        float m_fNextTimedHeroStatsUpdate; // 0xdbbc        
        [[maybe_unused]] std::uint8_t pad_0xdbc0[0x2a0]; // 0xdbc0
        bool m_bInitializedLaneWaypoints; // 0xde60        
        [[maybe_unused]] std::uint8_t pad_0xde61[0x757]; // 0xde61
        uint32_t m_nLastWardSuggestionBuildingState; // 0xe5b8        
        uint32_t m_nLastWardSuggestionUpdateNum; // 0xe5bc        
        bool m_bLastWardSuggestionRoshanAlive; // 0xe5c0        
        bool m_bDoFinalPregameSuggestion[10]; // 0xe5c1        
        [[maybe_unused]] std::uint8_t pad_0xe5cb[0x1]; // 0xe5cb
        float m_fNextCreepDistanceUpdate; // 0xe5cc        
        float m_fCreepDistanceSafe[15]; // 0xe5d0        
        float m_fCreepDistanceMid[15]; // 0xe60c        
        float m_fCreepDistanceOff[15]; // 0xe648        
        entity2::GameTime_t m_fLastSuggestionTime; // 0xe684        
        bool m_bHasRevealedAnonymizedEnemyPlayerInfo; // 0xe688        
        [[maybe_unused]] std::uint8_t pad_0xe689[0x607]; // 0xe689
        client::PlayerID_t m_nRequestedBotPlayerID; // 0xec90        
        float m_fNextCombatLogLocationUpdateTime; // 0xec94        
        float m_fNextAPMUpdateTime; // 0xec98        
        [[maybe_unused]] std::uint8_t pad_0xec9c[0x4]; // 0xec9c
        // m_vecPendingPlayerResourceRequests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_vecPendingPlayerResourceRequests;
        char m_vecPendingPlayerResourceRequests[0x18]; // 0xeca0        
        int32_t m_iRampages[24]; // 0xecb8        
        int32_t m_iTripleKills[24]; // 0xed18        
        int32_t m_iCouriersKilled[24]; // 0xed78        
        int32_t m_iAegisesSnatched[24]; // 0xedd8        
        int32_t m_iCheesesEaten[24]; // 0xee38        
        int32_t m_iRapiersPurchased[24]; // 0xee98        
        float m_flPushingDamage[24]; // 0xeef8        
        int32_t m_iRoshanKillsNight[24]; // 0xef58        
        int32_t m_iRoshanKillsDay[24]; // 0xefb8        
        int32_t m_iPortalsUsed[24]; // 0xf018        
        int32_t m_iWisdomRunesGained[24]; // 0xf078        
        int32_t m_iShieldRunesGained[24]; // 0xf0d8        
        
        // Static fields:
        static uint64_t &Get_s_unLobbySteamID() {return *reinterpret_cast<uint64_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CDOTA_PlayerResource")->GetStaticFields()[0]->m_pInstance);};
        static uint64_t &Get_s_unLobbyPartyID() {return *reinterpret_cast<uint64_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CDOTA_PlayerResource")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_PlayerResource because it is not a standard-layout class
    static_assert(sizeof(CDOTA_PlayerResource) == 0xf138);
};

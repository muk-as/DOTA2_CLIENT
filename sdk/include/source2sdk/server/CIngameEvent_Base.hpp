#pragma once
#include "source2sdk/client/CavernCrawlMapVariant_t.hpp"
#include "source2sdk/client/DOTACavernCrawlMapResult_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/itemid_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CDOTASubChallengeInfo.hpp"
#include "source2sdk/server/CDOTA_CombatLogQueryProgress.hpp"
#include "source2sdk/server/CDOTA_PlayerChallengeInfo.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1a30
    // Has VTable
    // Is Abstract
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_CompendiumChallengeEventID"
    // static metadata: MNetworkVarNames "int m_CompendiumChallengeSequenceID"
    // static metadata: MNetworkVarNames "int m_CompendiumChallengeCoinReward"
    // static metadata: MNetworkVarNames "int m_CompendiumChallengeCoinSplash"
    // static metadata: MNetworkVarNames "int m_CompendiumChallengePointReward"
    // static metadata: MNetworkVarNames "bool m_CompendiumChallengeCompleted"
    // static metadata: MNetworkVarNames "bool m_CompendiumChallengeFailed"
    // static metadata: MNetworkVarNames "int m_CompendiumChallengeProgress"
    // static metadata: MNetworkVarNames "int m_QueryIDForProgress"
    // static metadata: MNetworkVarNames "CDOTASubChallengeInfo m_SubChallenges"
    // static metadata: MNetworkVarNames "int m_CompendiumCoinWager"
    // static metadata: MNetworkVarNames "itemid_t m_CompendiumTokenWagerItemID"
    // static metadata: MNetworkVarNames "int m_CompendiumWagerTokenBonusPct"
    // static metadata: MNetworkVarNames "int m_CompendiumCoinWagerResults"
    // static metadata: MNetworkVarNames "int m_CompendiumRankWagers"
    // static metadata: MNetworkVarNames "float m_flWagerTimer"
    // static metadata: MNetworkVarNames "GameTime_t m_flWagerEndTime"
    // static metadata: MNetworkVarNames "CDOTA_PlayerChallengeInfo m_CompendiumChallengeInfo"
    // static metadata: MNetworkVarNames "CDOTA_CombatLogQueryProgress m_PlayerQueryIDs"
    // static metadata: MNetworkVarNames "int m_ProgressForQueryID"
    // static metadata: MNetworkVarNames "int m_GoalForQueryID"
    // static metadata: MNetworkVarNames "int m_PlayerQuestRankPreviouslyCompleted"
    // static metadata: MNetworkVarNames "int m_PlayerQuestRankCompleted"
    // static metadata: MNetworkVarNames "PlayerID_t m_PlayerBountyTarget"
    // static metadata: MNetworkVarNames "GameTime_t m_flPlayerBountyTimestamp"
    // static metadata: MNetworkVarNames "int m_PlayerBountyCount"
    #pragma pack(push, 1)
    class CIngameEvent_Base : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4b8[0x20]; // 0x4b8
        bool m_bInitialized; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4d9[0x3]; // 0x4d9
        // metadata: MNetworkEnable
        int32_t m_CompendiumChallengeEventID[24]; // 0x4dc        
        // metadata: MNetworkEnable
        int32_t m_CompendiumChallengeSequenceID[24]; // 0x53c        
        // metadata: MNetworkEnable
        int32_t m_CompendiumChallengeCoinReward[24]; // 0x59c        
        // metadata: MNetworkEnable
        int32_t m_CompendiumChallengeCoinSplash[24]; // 0x5fc        
        // metadata: MNetworkEnable
        int32_t m_CompendiumChallengePointReward[24]; // 0x65c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
        bool m_CompendiumChallengeCompleted[24]; // 0x6bc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
        bool m_CompendiumChallengeFailed[24]; // 0x6d4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
        int32_t m_CompendiumChallengeProgress[24]; // 0x6ec        
        // metadata: MNetworkEnable
        int32_t m_QueryIDForProgress[24]; // 0x74c        
        [[maybe_unused]] std::uint8_t pad_0x7ac[0x4]; // 0x7ac
        // metadata: MNetworkEnable
        // m_SubChallenges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::CDOTASubChallengeInfo> m_SubChallenges;
        char m_SubChallenges[0x50]; // 0x7b0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWagerChanged"
        int32_t m_CompendiumCoinWager[10]; // 0x800        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWagerChanged"
        client::itemid_t m_CompendiumTokenWagerItemID[10]; // 0x828        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWagerChanged"
        int32_t m_CompendiumWagerTokenBonusPct[10]; // 0x878        
        // metadata: MNetworkEnable
        int32_t m_CompendiumCoinWagerResults[10]; // 0x8a0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWagerChanged"
        int32_t m_CompendiumRankWagers[10]; // 0x8c8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWagerTimeChanged"
        float m_flWagerTimer; // 0x8f0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flWagerEndTime; // 0x8f4        
        // metadata: MNetworkEnable
        // m_CompendiumChallengeInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::CDOTA_PlayerChallengeInfo> m_CompendiumChallengeInfo;
        char m_CompendiumChallengeInfo[0xac0]; // 0x8f8        
        // metadata: MNetworkEnable
        // metadata: MNetworkTypeAlias "DOTA_CombatLogQueryProgress"
        // m_PlayerQueryIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::CDOTA_CombatLogQueryProgress> m_PlayerQueryIDs;
        char m_PlayerQueryIDs[0x50]; // 0x13b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
        int32_t m_ProgressForQueryID[100]; // 0x1408        
        // metadata: MNetworkEnable
        int32_t m_GoalForQueryID[100]; // 0x1598        
        // metadata: MNetworkEnable
        int32_t m_PlayerQuestRankPreviouslyCompleted[10]; // 0x1728        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientPlayerQuestRankChanged"
        int32_t m_PlayerQuestRankCompleted[10]; // 0x1750        
        // metadata: MNetworkEnable
        client::PlayerID_t m_PlayerBountyTarget[10]; // 0x1778        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPlayerBountyTimestamp[10]; // 0x17a0        
        // metadata: MNetworkEnable
        int32_t m_PlayerBountyCount[10]; // 0x17c8        
        bool m_bHasSpentWager[10]; // 0x17f0        
        bool m_bPendingWagerSpend[10]; // 0x17fa        
        bool m_bCavernCrawlActive[24]; // 0x1804        
        client::CavernCrawlMapVariant_t m_nCavernCrawlMapVariant[24]; // 0x181c        
        bool m_bCavernHalfCredit; // 0x1834        
        bool m_bBountyReminded[24]; // 0x1835        
        bool m_bBountyAnnounced[24]; // 0x184d        
        [[maybe_unused]] std::uint8_t pad_0x1865[0x3]; // 0x1865
        uint32_t m_pCavernCrawlWinnings[24]; // 0x1868        
        uint32_t m_pCavernCrawlPlusShardWinnings[24]; // 0x18c8        
        // m_ppVecCavernCrawlMapResult has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::DOTACavernCrawlMapResult_t>* m_ppVecCavernCrawlMapResult[24];
        char m_ppVecCavernCrawlMapResult[0xc0]; // 0x1928        
        int32_t m_event_lobby_updated; // 0x19e8        
        [[maybe_unused]] std::uint8_t pad_0x19ec[0x44];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CIngameEvent_Base because it is not a standard-layout class
    static_assert(sizeof(CIngameEvent_Base) == 0x1a30);
};

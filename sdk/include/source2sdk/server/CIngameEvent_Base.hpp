#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CavernCrawlMapVariant_t.hpp"
#include "source2sdk/client/DOTACavernCrawlMapResult_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/itemid_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CDOTASubChallengeInfo.hpp"
#include "source2sdk/server/CDOTA_CombatLogQueryProgress.hpp"
#include "source2sdk/server/CDOTA_PlayerChallengeInfo.hpp"

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
        // Standard-layout class: false
        // Size: 0x1aa0
        // Has VTable
        // Is Abstract
        // MClassHasEntityLimitedDataDesc
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
        class CIngameEvent_Base : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04e0[0x20]; // 0x4e0
            bool m_bInitialized; // 0x500            
            uint8_t _pad0501[0x3]; // 0x501
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengeEventID[24]; // 0x504            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengeSequenceID[24]; // 0x564            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengeCoinReward[24]; // 0x5c4            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengeCoinSplash[24]; // 0x624            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengePointReward[24]; // 0x684            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
            bool m_CompendiumChallengeCompleted[24]; // 0x6e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
            bool m_CompendiumChallengeFailed[24]; // 0x6fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
            std::int32_t m_CompendiumChallengeProgress[24]; // 0x714            
            // metadata: MNetworkEnable
            std::int32_t m_QueryIDForProgress[24]; // 0x774            
            uint8_t _pad07d4[0x4]; // 0x7d4
            // metadata: MNetworkEnable
            // m_SubChallenges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTASubChallengeInfo> m_SubChallenges;
            char m_SubChallenges[0x68]; // 0x7d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerChanged"
            std::int32_t m_CompendiumCoinWager[10]; // 0x840            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerChanged"
            source2sdk::client::itemid_t m_CompendiumTokenWagerItemID[10]; // 0x868            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerChanged"
            std::int32_t m_CompendiumWagerTokenBonusPct[10]; // 0x8b8            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumCoinWagerResults[10]; // 0x8e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerChanged"
            std::int32_t m_CompendiumRankWagers[10]; // 0x908            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerTimeChanged"
            float m_flWagerTimer; // 0x930            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flWagerEndTime; // 0x934            
            // metadata: MNetworkEnable
            // m_CompendiumChallengeInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTA_PlayerChallengeInfo> m_CompendiumChallengeInfo;
            char m_CompendiumChallengeInfo[0xad8]; // 0x938            
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "DOTA_CombatLogQueryProgress"
            // m_PlayerQueryIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTA_CombatLogQueryProgress> m_PlayerQueryIDs;
            char m_PlayerQueryIDs[0x68]; // 0x1410            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
            std::int32_t m_ProgressForQueryID[100]; // 0x1478            
            // metadata: MNetworkEnable
            std::int32_t m_GoalForQueryID[100]; // 0x1608            
            // metadata: MNetworkEnable
            std::int32_t m_PlayerQuestRankPreviouslyCompleted[10]; // 0x1798            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerQuestRankChanged"
            std::int32_t m_PlayerQuestRankCompleted[10]; // 0x17c0            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_PlayerBountyTarget[10]; // 0x17e8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPlayerBountyTimestamp[10]; // 0x1810            
            // metadata: MNetworkEnable
            std::int32_t m_PlayerBountyCount[10]; // 0x1838            
            bool m_bHasSpentWager[10]; // 0x1860            
            bool m_bPendingWagerSpend[10]; // 0x186a            
            bool m_bCavernCrawlActive[24]; // 0x1874            
            source2sdk::client::CavernCrawlMapVariant_t m_nCavernCrawlMapVariant[24]; // 0x188c            
            bool m_bCavernHalfCredit; // 0x18a4            
            bool m_bBountyReminded[24]; // 0x18a5            
            bool m_bBountyAnnounced[24]; // 0x18bd            
            uint8_t _pad18d5[0x3]; // 0x18d5
            std::uint32_t m_pCavernCrawlWinnings[24]; // 0x18d8            
            std::uint32_t m_pCavernCrawlPlusShardWinnings[24]; // 0x1938            
            // m_ppVecCavernCrawlMapResult has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::DOTACavernCrawlMapResult_t>* m_ppVecCavernCrawlMapResult[24];
            char m_ppVecCavernCrawlMapResult[0xc0]; // 0x1998            
            std::int32_t m_event_lobby_updated; // 0x1a58            
            uint8_t _pad1a5c[0x44];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CIngameEvent_Base because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CIngameEvent_Base) == 0x1aa0);
    };
};

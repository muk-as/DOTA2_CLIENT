#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTASubChallengeInfo.hpp"
#include "source2sdk/client/CDOTA_PlayerChallengeInfo.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/C_DOTA_CombatLogQueryProgress.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/itemid_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x18d8
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
        // static metadata: MNetworkVarNames "C_DOTA_CombatLogQueryProgress m_PlayerQueryIDs"
        // static metadata: MNetworkVarNames "int m_ProgressForQueryID"
        // static metadata: MNetworkVarNames "int m_GoalForQueryID"
        // static metadata: MNetworkVarNames "int m_PlayerQuestRankPreviouslyCompleted"
        // static metadata: MNetworkVarNames "int m_PlayerQuestRankCompleted"
        // static metadata: MNetworkVarNames "PlayerID_t m_PlayerBountyTarget"
        // static metadata: MNetworkVarNames "GameTime_t m_flPlayerBountyTimestamp"
        // static metadata: MNetworkVarNames "int m_PlayerBountyCount"
        // static metadata: MNetworkVarNames "int m_PlayerBountyTimestamp_Obsolete"
        #pragma pack(push, 1)
        class C_IngameEvent_Base : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0510[0x8]; // 0x510
            bool m_bInitialized; // 0x518            
            uint8_t _pad0519[0x3]; // 0x519
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengeEventID[24]; // 0x51c            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengeSequenceID[24]; // 0x57c            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengeCoinReward[24]; // 0x5dc            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengeCoinSplash[24]; // 0x63c            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengePointReward[24]; // 0x69c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
            bool m_CompendiumChallengeCompleted[24]; // 0x6fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
            bool m_CompendiumChallengeFailed[24]; // 0x714            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
            std::int32_t m_CompendiumChallengeProgress[24]; // 0x72c            
            // metadata: MNetworkEnable
            std::int32_t m_QueryIDForProgress[24]; // 0x78c            
            uint8_t _pad07ec[0x4]; // 0x7ec
            // metadata: MNetworkEnable
            // m_SubChallenges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CDOTASubChallengeInfo> m_SubChallenges;
            char m_SubChallenges[0x68]; // 0x7f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerChanged"
            std::int32_t m_CompendiumCoinWager[10]; // 0x858            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerChanged"
            source2sdk::client::itemid_t m_CompendiumTokenWagerItemID[10]; // 0x880            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerChanged"
            std::int32_t m_CompendiumWagerTokenBonusPct[10]; // 0x8d0            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumCoinWagerResults[10]; // 0x8f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerChanged"
            std::int32_t m_CompendiumRankWagers[10]; // 0x920            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerTimeChanged"
            float m_flWagerTimer; // 0x948            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flWagerEndTime; // 0x94c            
            // metadata: MNetworkEnable
            // m_CompendiumChallengeInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CDOTA_PlayerChallengeInfo> m_CompendiumChallengeInfo;
            char m_CompendiumChallengeInfo[0xad8]; // 0x950            
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "DOTA_CombatLogQueryProgress"
            // m_PlayerQueryIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::C_DOTA_CombatLogQueryProgress> m_PlayerQueryIDs;
            char m_PlayerQueryIDs[0x68]; // 0x1428            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
            std::int32_t m_ProgressForQueryID[100]; // 0x1490            
            // metadata: MNetworkEnable
            std::int32_t m_GoalForQueryID[100]; // 0x1620            
            // metadata: MNetworkEnable
            std::int32_t m_PlayerQuestRankPreviouslyCompleted[10]; // 0x17b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerQuestRankChanged"
            std::int32_t m_PlayerQuestRankCompleted[10]; // 0x17d8            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_PlayerBountyTarget[10]; // 0x1800            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPlayerBountyTimestamp[10]; // 0x1828            
            // metadata: MNetworkEnable
            std::int32_t m_PlayerBountyCount[10]; // 0x1850            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerBountyTimestampChanged"
            std::int32_t m_PlayerBountyTimestamp_Obsolete[24]; // 0x1878            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_IngameEvent_Base because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_IngameEvent_Base) == 0x18d8);
    };
};

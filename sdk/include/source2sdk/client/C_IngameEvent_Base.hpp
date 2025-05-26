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
        // Size: 0x19a8
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
            uint8_t _pad05e0[0x8]; // 0x5e0
            bool m_bInitialized; // 0x5e8            
            uint8_t _pad05e9[0x3]; // 0x5e9
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengeEventID[24]; // 0x5ec            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengeSequenceID[24]; // 0x64c            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengeCoinReward[24]; // 0x6ac            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengeCoinSplash[24]; // 0x70c            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengePointReward[24]; // 0x76c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
            bool m_CompendiumChallengeCompleted[24]; // 0x7cc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
            bool m_CompendiumChallengeFailed[24]; // 0x7e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
            std::int32_t m_CompendiumChallengeProgress[24]; // 0x7fc            
            // metadata: MNetworkEnable
            std::int32_t m_QueryIDForProgress[24]; // 0x85c            
            uint8_t _pad08bc[0x4]; // 0x8bc
            // metadata: MNetworkEnable
            // m_SubChallenges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CDOTASubChallengeInfo> m_SubChallenges;
            char m_SubChallenges[0x68]; // 0x8c0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerChanged"
            std::int32_t m_CompendiumCoinWager[10]; // 0x928            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerChanged"
            source2sdk::client::itemid_t m_CompendiumTokenWagerItemID[10]; // 0x950            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerChanged"
            std::int32_t m_CompendiumWagerTokenBonusPct[10]; // 0x9a0            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumCoinWagerResults[10]; // 0x9c8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerChanged"
            std::int32_t m_CompendiumRankWagers[10]; // 0x9f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerTimeChanged"
            float m_flWagerTimer; // 0xa18            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flWagerEndTime; // 0xa1c            
            // metadata: MNetworkEnable
            // m_CompendiumChallengeInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CDOTA_PlayerChallengeInfo> m_CompendiumChallengeInfo;
            char m_CompendiumChallengeInfo[0xad8]; // 0xa20            
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "DOTA_CombatLogQueryProgress"
            // m_PlayerQueryIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::C_DOTA_CombatLogQueryProgress> m_PlayerQueryIDs;
            char m_PlayerQueryIDs[0x68]; // 0x14f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
            std::int32_t m_ProgressForQueryID[100]; // 0x1560            
            // metadata: MNetworkEnable
            std::int32_t m_GoalForQueryID[100]; // 0x16f0            
            // metadata: MNetworkEnable
            std::int32_t m_PlayerQuestRankPreviouslyCompleted[10]; // 0x1880            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerQuestRankChanged"
            std::int32_t m_PlayerQuestRankCompleted[10]; // 0x18a8            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_PlayerBountyTarget[10]; // 0x18d0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPlayerBountyTimestamp[10]; // 0x18f8            
            // metadata: MNetworkEnable
            std::int32_t m_PlayerBountyCount[10]; // 0x1920            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerBountyTimestampChanged"
            std::int32_t m_PlayerBountyTimestamp_Obsolete[24]; // 0x1948            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_IngameEvent_Base because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_IngameEvent_Base) == 0x19a8);
    };
};

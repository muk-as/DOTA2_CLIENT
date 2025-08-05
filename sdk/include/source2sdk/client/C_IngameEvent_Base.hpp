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
        // Size: 0x19b0
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
            uint8_t _pad05e8[0x8]; // 0x5e8
            bool m_bInitialized; // 0x5f0            
            uint8_t _pad05f1[0x3]; // 0x5f1
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengeEventID[24]; // 0x5f4            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengeSequenceID[24]; // 0x654            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengeCoinReward[24]; // 0x6b4            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengeCoinSplash[24]; // 0x714            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumChallengePointReward[24]; // 0x774            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
            bool m_CompendiumChallengeCompleted[24]; // 0x7d4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
            bool m_CompendiumChallengeFailed[24]; // 0x7ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
            std::int32_t m_CompendiumChallengeProgress[24]; // 0x804            
            // metadata: MNetworkEnable
            std::int32_t m_QueryIDForProgress[24]; // 0x864            
            uint8_t _pad08c4[0x4]; // 0x8c4
            // metadata: MNetworkEnable
            // m_SubChallenges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CDOTASubChallengeInfo> m_SubChallenges;
            char m_SubChallenges[0x68]; // 0x8c8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerChanged"
            std::int32_t m_CompendiumCoinWager[10]; // 0x930            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerChanged"
            source2sdk::client::itemid_t m_CompendiumTokenWagerItemID[10]; // 0x958            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerChanged"
            std::int32_t m_CompendiumWagerTokenBonusPct[10]; // 0x9a8            
            // metadata: MNetworkEnable
            std::int32_t m_CompendiumCoinWagerResults[10]; // 0x9d0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerChanged"
            std::int32_t m_CompendiumRankWagers[10]; // 0x9f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWagerTimeChanged"
            float m_flWagerTimer; // 0xa20            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flWagerEndTime; // 0xa24            
            // metadata: MNetworkEnable
            // m_CompendiumChallengeInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CDOTA_PlayerChallengeInfo> m_CompendiumChallengeInfo;
            char m_CompendiumChallengeInfo[0xad8]; // 0xa28            
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "DOTA_CombatLogQueryProgress"
            // m_PlayerQueryIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::C_DOTA_CombatLogQueryProgress> m_PlayerQueryIDs;
            char m_PlayerQueryIDs[0x68]; // 0x1500            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
            std::int32_t m_ProgressForQueryID[100]; // 0x1568            
            // metadata: MNetworkEnable
            std::int32_t m_GoalForQueryID[100]; // 0x16f8            
            // metadata: MNetworkEnable
            std::int32_t m_PlayerQuestRankPreviouslyCompleted[10]; // 0x1888            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientPlayerQuestRankChanged"
            std::int32_t m_PlayerQuestRankCompleted[10]; // 0x18b0            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_PlayerBountyTarget[10]; // 0x18d8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPlayerBountyTimestamp[10]; // 0x1900            
            // metadata: MNetworkEnable
            std::int32_t m_PlayerBountyCount[10]; // 0x1928            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerBountyTimestampChanged"
            std::int32_t m_PlayerBountyTimestamp_Obsolete[24]; // 0x1950            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_IngameEvent_Base because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_IngameEvent_Base) == 0x19b0);
    };
};

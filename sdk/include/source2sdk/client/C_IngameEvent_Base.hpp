#pragma once
#include "source2sdk/client/CDOTASubChallengeInfo.hpp"
#include "source2sdk/client/CDOTA_PlayerChallengeInfo.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/C_DOTA_CombatLogQueryProgress.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/itemid_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1928
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
    class C_IngameEvent_Base : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x560[0x8]; // 0x560
        bool m_bInitialized; // 0x568        
        [[maybe_unused]] std::uint8_t pad_0x569[0x3]; // 0x569
        // metadata: MNetworkEnable
        int32_t m_CompendiumChallengeEventID[24]; // 0x56c        
        // metadata: MNetworkEnable
        int32_t m_CompendiumChallengeSequenceID[24]; // 0x5cc        
        // metadata: MNetworkEnable
        int32_t m_CompendiumChallengeCoinReward[24]; // 0x62c        
        // metadata: MNetworkEnable
        int32_t m_CompendiumChallengeCoinSplash[24]; // 0x68c        
        // metadata: MNetworkEnable
        int32_t m_CompendiumChallengePointReward[24]; // 0x6ec        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
        bool m_CompendiumChallengeCompleted[24]; // 0x74c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
        bool m_CompendiumChallengeFailed[24]; // 0x764        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
        int32_t m_CompendiumChallengeProgress[24]; // 0x77c        
        // metadata: MNetworkEnable
        int32_t m_QueryIDForProgress[24]; // 0x7dc        
        [[maybe_unused]] std::uint8_t pad_0x83c[0x4]; // 0x83c
        // metadata: MNetworkEnable
        // m_SubChallenges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::CDOTASubChallengeInfo> m_SubChallenges;
        char m_SubChallenges[0x68]; // 0x840        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWagerChanged"
        int32_t m_CompendiumCoinWager[10]; // 0x8a8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWagerChanged"
        client::itemid_t m_CompendiumTokenWagerItemID[10]; // 0x8d0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWagerChanged"
        int32_t m_CompendiumWagerTokenBonusPct[10]; // 0x920        
        // metadata: MNetworkEnable
        int32_t m_CompendiumCoinWagerResults[10]; // 0x948        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWagerChanged"
        int32_t m_CompendiumRankWagers[10]; // 0x970        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWagerTimeChanged"
        float m_flWagerTimer; // 0x998        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flWagerEndTime; // 0x99c        
        // metadata: MNetworkEnable
        // m_CompendiumChallengeInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::CDOTA_PlayerChallengeInfo> m_CompendiumChallengeInfo;
        char m_CompendiumChallengeInfo[0xad8]; // 0x9a0        
        // metadata: MNetworkEnable
        // metadata: MNetworkTypeAlias "DOTA_CombatLogQueryProgress"
        // m_PlayerQueryIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::C_DOTA_CombatLogQueryProgress> m_PlayerQueryIDs;
        char m_PlayerQueryIDs[0x68]; // 0x1478        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
        int32_t m_ProgressForQueryID[100]; // 0x14e0        
        // metadata: MNetworkEnable
        int32_t m_GoalForQueryID[100]; // 0x1670        
        // metadata: MNetworkEnable
        int32_t m_PlayerQuestRankPreviouslyCompleted[10]; // 0x1800        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientPlayerQuestRankChanged"
        int32_t m_PlayerQuestRankCompleted[10]; // 0x1828        
        // metadata: MNetworkEnable
        client::PlayerID_t m_PlayerBountyTarget[10]; // 0x1850        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPlayerBountyTimestamp[10]; // 0x1878        
        // metadata: MNetworkEnable
        int32_t m_PlayerBountyCount[10]; // 0x18a0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPlayerBountyTimestampChanged"
        int32_t m_PlayerBountyTimestamp_Obsolete[24]; // 0x18c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_IngameEvent_Base because it is not a standard-layout class
    static_assert(sizeof(C_IngameEvent_Base) == 0x1928);
};

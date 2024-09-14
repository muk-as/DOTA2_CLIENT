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
    // Size: 0x18b8
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
        [[maybe_unused]] std::uint8_t pad_0x538[0x8]; // 0x538
        bool m_bInitialized; // 0x540        
        [[maybe_unused]] std::uint8_t pad_0x541[0x3]; // 0x541
        // metadata: MNetworkEnable
        int32_t m_CompendiumChallengeEventID[24]; // 0x544        
        // metadata: MNetworkEnable
        int32_t m_CompendiumChallengeSequenceID[24]; // 0x5a4        
        // metadata: MNetworkEnable
        int32_t m_CompendiumChallengeCoinReward[24]; // 0x604        
        // metadata: MNetworkEnable
        int32_t m_CompendiumChallengeCoinSplash[24]; // 0x664        
        // metadata: MNetworkEnable
        int32_t m_CompendiumChallengePointReward[24]; // 0x6c4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
        bool m_CompendiumChallengeCompleted[24]; // 0x724        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
        bool m_CompendiumChallengeFailed[24]; // 0x73c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
        int32_t m_CompendiumChallengeProgress[24]; // 0x754        
        // metadata: MNetworkEnable
        int32_t m_QueryIDForProgress[24]; // 0x7b4        
        [[maybe_unused]] std::uint8_t pad_0x814[0x4]; // 0x814
        // metadata: MNetworkEnable
        // m_SubChallenges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::CDOTASubChallengeInfo> m_SubChallenges;
        char m_SubChallenges[0x50]; // 0x818        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWagerChanged"
        int32_t m_CompendiumCoinWager[10]; // 0x868        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWagerChanged"
        client::itemid_t m_CompendiumTokenWagerItemID[10]; // 0x890        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWagerChanged"
        int32_t m_CompendiumWagerTokenBonusPct[10]; // 0x8e0        
        // metadata: MNetworkEnable
        int32_t m_CompendiumCoinWagerResults[10]; // 0x908        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWagerChanged"
        int32_t m_CompendiumRankWagers[10]; // 0x930        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWagerTimeChanged"
        float m_flWagerTimer; // 0x958        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flWagerEndTime; // 0x95c        
        // metadata: MNetworkEnable
        // m_CompendiumChallengeInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::CDOTA_PlayerChallengeInfo> m_CompendiumChallengeInfo;
        char m_CompendiumChallengeInfo[0xac0]; // 0x960        
        // metadata: MNetworkEnable
        // metadata: MNetworkTypeAlias "DOTA_CombatLogQueryProgress"
        // m_PlayerQueryIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::C_DOTA_CombatLogQueryProgress> m_PlayerQueryIDs;
        char m_PlayerQueryIDs[0x50]; // 0x1420        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientPlayerChallengeProgressChanged"
        int32_t m_ProgressForQueryID[100]; // 0x1470        
        // metadata: MNetworkEnable
        int32_t m_GoalForQueryID[100]; // 0x1600        
        // metadata: MNetworkEnable
        int32_t m_PlayerQuestRankPreviouslyCompleted[10]; // 0x1790        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientPlayerQuestRankChanged"
        int32_t m_PlayerQuestRankCompleted[10]; // 0x17b8        
        // metadata: MNetworkEnable
        client::PlayerID_t m_PlayerBountyTarget[10]; // 0x17e0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPlayerBountyTimestamp[10]; // 0x1808        
        // metadata: MNetworkEnable
        int32_t m_PlayerBountyCount[10]; // 0x1830        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPlayerBountyTimestampChanged"
        int32_t m_PlayerBountyTimestamp_Obsolete[24]; // 0x1858        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_IngameEvent_Base because it is not a standard-layout class
    static_assert(sizeof(C_IngameEvent_Base) == 0x18b8);
};

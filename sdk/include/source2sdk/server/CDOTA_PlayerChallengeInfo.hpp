#pragma once
#include "source2sdk/client/PlayerID_t.hpp"
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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x70
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int nType"
    // static metadata: MNetworkVarNames "int nQuestID"
    // static metadata: MNetworkVarNames "int nQuestChallengeID"
    // static metadata: MNetworkVarNames "int nTier"
    // static metadata: MNetworkVarNames "int nParam0"
    // static metadata: MNetworkVarNames "int nParam1"
    // static metadata: MNetworkVarNames "int nSlotID"
    // static metadata: MNetworkVarNames "int nProgress"
    // static metadata: MNetworkVarNames "int nCompletionThreshold"
    // static metadata: MNetworkVarNames "PlayerID_t nPlayerID"
    // static metadata: MNetworkVarNames "int nQueryIndex"
    // static metadata: MNetworkVarNames "int nEventID"
    // static metadata: MNetworkVarNames "int nSequenceID"
    // static metadata: MNetworkVarNames "int nCompleted"
    // static metadata: MNetworkVarNames "int nRank"
    #pragma pack(push, 1)
    class CDOTA_PlayerChallengeInfo
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        int32_t nType; // 0x30        
        // metadata: MNetworkEnable
        int32_t nQuestID; // 0x34        
        // metadata: MNetworkEnable
        int32_t nQuestChallengeID; // 0x38        
        // metadata: MNetworkEnable
        int32_t nTier; // 0x3c        
        // metadata: MNetworkEnable
        int32_t nParam0; // 0x40        
        // metadata: MNetworkEnable
        int32_t nParam1; // 0x44        
        // metadata: MNetworkEnable
        int32_t nSlotID; // 0x48        
        // metadata: MNetworkEnable
        int32_t nProgress; // 0x4c        
        // metadata: MNetworkEnable
        int32_t nCompletionThreshold; // 0x50        
        // metadata: MNetworkEnable
        client::PlayerID_t nPlayerID; // 0x54        
        // metadata: MNetworkEnable
        int32_t nQueryIndex; // 0x58        
        // metadata: MNetworkEnable
        int32_t nEventID; // 0x5c        
        // metadata: MNetworkEnable
        int32_t nSequenceID; // 0x60        
        // metadata: MNetworkEnable
        int32_t nCompleted; // 0x64        
        // metadata: MNetworkEnable
        int32_t nRank; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x6c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTA_PlayerChallengeInfo, nType) == 0x30);
    static_assert(offsetof(CDOTA_PlayerChallengeInfo, nQuestID) == 0x34);
    static_assert(offsetof(CDOTA_PlayerChallengeInfo, nQuestChallengeID) == 0x38);
    static_assert(offsetof(CDOTA_PlayerChallengeInfo, nTier) == 0x3c);
    static_assert(offsetof(CDOTA_PlayerChallengeInfo, nParam0) == 0x40);
    static_assert(offsetof(CDOTA_PlayerChallengeInfo, nParam1) == 0x44);
    static_assert(offsetof(CDOTA_PlayerChallengeInfo, nSlotID) == 0x48);
    static_assert(offsetof(CDOTA_PlayerChallengeInfo, nProgress) == 0x4c);
    static_assert(offsetof(CDOTA_PlayerChallengeInfo, nCompletionThreshold) == 0x50);
    static_assert(offsetof(CDOTA_PlayerChallengeInfo, nPlayerID) == 0x54);
    static_assert(offsetof(CDOTA_PlayerChallengeInfo, nQueryIndex) == 0x58);
    static_assert(offsetof(CDOTA_PlayerChallengeInfo, nEventID) == 0x5c);
    static_assert(offsetof(CDOTA_PlayerChallengeInfo, nSequenceID) == 0x60);
    static_assert(offsetof(CDOTA_PlayerChallengeInfo, nCompleted) == 0x64);
    static_assert(offsetof(CDOTA_PlayerChallengeInfo, nRank) == 0x68);
    
    static_assert(sizeof(CDOTA_PlayerChallengeInfo) == 0x70);
};

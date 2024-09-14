#pragma once
#include "source2sdk/client/HeroID_t.hpp"
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
    // Size: 0x60
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int nType"
    // static metadata: MNetworkVarNames "int nTier"
    // static metadata: MNetworkVarNames "int nSlotID"
    // static metadata: MNetworkVarNames "int nProgress"
    // static metadata: MNetworkVarNames "int nCompletionThreshold"
    // static metadata: MNetworkVarNames "PlayerID_t nPlayerID"
    // static metadata: MNetworkVarNames "int nQueryIndex"
    // static metadata: MNetworkVarNames "int nEventID"
    // static metadata: MNetworkVarNames "int nSequenceID"
    // static metadata: MNetworkVarNames "HeroID_t nRequiredHero"
    // static metadata: MNetworkVarNames "int nCompleted"
    #pragma pack(push, 1)
    class CDOTASubChallengeInfo
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        int32_t nType; // 0x30        
        // metadata: MNetworkEnable
        int32_t nTier; // 0x34        
        // metadata: MNetworkEnable
        int32_t nSlotID; // 0x38        
        // metadata: MNetworkEnable
        int32_t nProgress; // 0x3c        
        // metadata: MNetworkEnable
        int32_t nCompletionThreshold; // 0x40        
        // metadata: MNetworkEnable
        client::PlayerID_t nPlayerID; // 0x44        
        // metadata: MNetworkEnable
        int32_t nQueryIndex; // 0x48        
        // metadata: MNetworkEnable
        int32_t nEventID; // 0x4c        
        // metadata: MNetworkEnable
        int32_t nSequenceID; // 0x50        
        // metadata: MNetworkEnable
        client::HeroID_t nRequiredHero; // 0x54        
        // metadata: MNetworkEnable
        int32_t nCompleted; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x5c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTASubChallengeInfo, nType) == 0x30);
    static_assert(offsetof(CDOTASubChallengeInfo, nTier) == 0x34);
    static_assert(offsetof(CDOTASubChallengeInfo, nSlotID) == 0x38);
    static_assert(offsetof(CDOTASubChallengeInfo, nProgress) == 0x3c);
    static_assert(offsetof(CDOTASubChallengeInfo, nCompletionThreshold) == 0x40);
    static_assert(offsetof(CDOTASubChallengeInfo, nPlayerID) == 0x44);
    static_assert(offsetof(CDOTASubChallengeInfo, nQueryIndex) == 0x48);
    static_assert(offsetof(CDOTASubChallengeInfo, nEventID) == 0x4c);
    static_assert(offsetof(CDOTASubChallengeInfo, nSequenceID) == 0x50);
    static_assert(offsetof(CDOTASubChallengeInfo, nRequiredHero) == 0x54);
    static_assert(offsetof(CDOTASubChallengeInfo, nCompleted) == 0x58);
    
    static_assert(sizeof(CDOTASubChallengeInfo) == 0x60);
};

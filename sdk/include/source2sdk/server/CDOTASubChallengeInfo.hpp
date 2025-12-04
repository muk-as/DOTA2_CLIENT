#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t nType; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t nTier; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t nSlotID; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t nProgress; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t nCompletionThreshold; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t nPlayerID; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t nQueryIndex; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t nEventID; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t nSequenceID; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t nRequiredHero; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t nCompleted; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTASubChallengeInfo, nType) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASubChallengeInfo, nTier) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASubChallengeInfo, nSlotID) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASubChallengeInfo, nProgress) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASubChallengeInfo, nCompletionThreshold) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASubChallengeInfo, nPlayerID) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASubChallengeInfo, nQueryIndex) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASubChallengeInfo, nEventID) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASubChallengeInfo, nSequenceID) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASubChallengeInfo, nRequiredHero) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTASubChallengeInfo, nCompleted) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTASubChallengeInfo) == 0x_);
    };
};

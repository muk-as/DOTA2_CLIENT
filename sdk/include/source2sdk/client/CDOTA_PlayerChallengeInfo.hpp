#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t nType; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t nQuestID; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t nQuestChallengeID; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t nTier; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t nParam0; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t nParam1; // 0x_            
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
            std::int32_t nCompleted; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t nRank; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTA_PlayerChallengeInfo, nType) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_PlayerChallengeInfo, nQuestID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_PlayerChallengeInfo, nQuestChallengeID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_PlayerChallengeInfo, nTier) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_PlayerChallengeInfo, nParam0) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_PlayerChallengeInfo, nParam1) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_PlayerChallengeInfo, nSlotID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_PlayerChallengeInfo, nProgress) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_PlayerChallengeInfo, nCompletionThreshold) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_PlayerChallengeInfo, nPlayerID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_PlayerChallengeInfo, nQueryIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_PlayerChallengeInfo, nEventID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_PlayerChallengeInfo, nSequenceID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_PlayerChallengeInfo, nCompleted) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_PlayerChallengeInfo, nRank) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTA_PlayerChallengeInfo) == 0x_);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "float32 m_duration"
        // static metadata: MNetworkVarNames "GameTime_t m_timestamp"
        // static metadata: MNetworkVarNames "float32 m_timescale"
        // static metadata: MNetworkVarNames "WorldGroupId_t m_nWorldGroupId"
        #pragma pack(push, 1)
        class CountdownTimer
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_duration; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timestamp; // 0x_            
            // metadata: MNetworkEnable
            float m_timescale; // 0x_            
            // metadata: MNetworkEnable
            WorldGroupId_t m_nWorldGroupId; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CountdownTimer, m_duration) == 0x_);
        static_assert(offsetof(source2sdk::client::CountdownTimer, m_timestamp) == 0x_);
        static_assert(offsetof(source2sdk::client::CountdownTimer, m_timescale) == 0x_);
        static_assert(offsetof(source2sdk::client::CountdownTimer, m_nWorldGroupId) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CountdownTimer) == 0x_);
    };
};

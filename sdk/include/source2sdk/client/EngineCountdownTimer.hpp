#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // static metadata: MNetworkVarNames "float32 m_timestamp"
        // static metadata: MNetworkVarNames "float32 m_timescale"
        #pragma pack(push, 1)
        class EngineCountdownTimer
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_duration; // 0x_            
            // metadata: MNetworkEnable
            float m_timestamp; // 0x_            
            // metadata: MNetworkEnable
            float m_timescale; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::EngineCountdownTimer, m_duration) == 0x_);
        static_assert(offsetof(source2sdk::client::EngineCountdownTimer, m_timestamp) == 0x_);
        static_assert(offsetof(source2sdk::client::EngineCountdownTimer, m_timescale) == 0x_);
        
        static_assert(sizeof(source2sdk::client::EngineCountdownTimer) == 0x_);
    };
};

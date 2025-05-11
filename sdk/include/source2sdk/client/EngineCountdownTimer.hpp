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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
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
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            float m_duration; // 0x8            
            // metadata: MNetworkEnable
            float m_timestamp; // 0xc            
            // metadata: MNetworkEnable
            float m_timescale; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::EngineCountdownTimer, m_duration) == 0x8);
        static_assert(offsetof(source2sdk::client::EngineCountdownTimer, m_timestamp) == 0xc);
        static_assert(offsetof(source2sdk::client::EngineCountdownTimer, m_timescale) == 0x10);
        
        static_assert(sizeof(source2sdk::client::EngineCountdownTimer) == 0x18);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EngineLoopState_t.hpp"

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
        // Size: 0x30
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct EventSimulate_t
        {
        public:
            source2sdk::client::EngineLoopState_t m_LoopState; // 0x0            
            bool m_bFirstTick; // 0x28            
            bool m_bLastTick; // 0x29            
            uint8_t _pad002a[0x6];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::EventSimulate_t, m_LoopState) == 0x0);
        static_assert(offsetof(source2sdk::client::EventSimulate_t, m_bFirstTick) == 0x28);
        static_assert(offsetof(source2sdk::client::EventSimulate_t, m_bLastTick) == 0x29);
        
        static_assert(sizeof(source2sdk::client::EventSimulate_t) == 0x30);
    };
};

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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct EventClientProcessInput_t
        {
        public:
            source2sdk::client::EngineLoopState_t m_LoopState; // 0x_            
            float m_flRealTime; // 0x_            
            float m_flTickInterval; // 0x_            
            double m_flTickStartTime; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::EventClientProcessInput_t, m_LoopState) == 0x_);
        static_assert(offsetof(source2sdk::client::EventClientProcessInput_t, m_flRealTime) == 0x_);
        static_assert(offsetof(source2sdk::client::EventClientProcessInput_t, m_flTickInterval) == 0x_);
        static_assert(offsetof(source2sdk::client::EventClientProcessInput_t, m_flTickStartTime) == 0x_);
        
        static_assert(sizeof(source2sdk::client::EventClientProcessInput_t) == 0x_);
    };
};

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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x40
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct EventClientPostOutput_t
        {
        public:
            source2sdk::client::EngineLoopState_t m_LoopState; // 0x0            
            double m_flRenderTime; // 0x28            
            float m_flRenderFrameTime; // 0x30            
            float m_flRenderFrameTimeUnbounded; // 0x34            
            bool m_bRenderOnly; // 0x38            
            uint8_t _pad0039[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::EventClientPostOutput_t, m_LoopState) == 0x0);
        static_assert(offsetof(source2sdk::client::EventClientPostOutput_t, m_flRenderTime) == 0x28);
        static_assert(offsetof(source2sdk::client::EventClientPostOutput_t, m_flRenderFrameTime) == 0x30);
        static_assert(offsetof(source2sdk::client::EventClientPostOutput_t, m_flRenderFrameTimeUnbounded) == 0x34);
        static_assert(offsetof(source2sdk::client::EventClientPostOutput_t, m_bRenderOnly) == 0x38);
        
        static_assert(sizeof(source2sdk::client::EventClientPostOutput_t) == 0x40);
    };
};

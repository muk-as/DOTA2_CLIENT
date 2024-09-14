#pragma once
#include "source2sdk/client/EngineLoopState_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x48
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct EventClientPreOutput_t
    {
    public:
        client::EngineLoopState_t m_LoopState; // 0x0        
        double m_flRenderTime; // 0x28        
        double m_flRenderFrameTime; // 0x30        
        double m_flRenderFrameTimeUnbounded; // 0x38        
        float m_flRealTime; // 0x40        
        bool m_bRenderOnly; // 0x44        
        [[maybe_unused]] std::uint8_t pad_0x45[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(EventClientPreOutput_t, m_LoopState) == 0x0);
    static_assert(offsetof(EventClientPreOutput_t, m_flRenderTime) == 0x28);
    static_assert(offsetof(EventClientPreOutput_t, m_flRenderFrameTime) == 0x30);
    static_assert(offsetof(EventClientPreOutput_t, m_flRenderFrameTimeUnbounded) == 0x38);
    static_assert(offsetof(EventClientPreOutput_t, m_flRealTime) == 0x40);
    static_assert(offsetof(EventClientPreOutput_t, m_bRenderOnly) == 0x44);
    
    static_assert(sizeof(EventClientPreOutput_t) == 0x48);
};

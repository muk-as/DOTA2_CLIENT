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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x38
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct EventClientOutput_t
    {
    public:
        client::EngineLoopState_t m_LoopState; // 0x0        
        float m_flRenderTime; // 0x28        
        float m_flRealTime; // 0x2c        
        float m_flRenderFrameTimeUnbounded; // 0x30        
        bool m_bRenderOnly; // 0x34        
        [[maybe_unused]] std::uint8_t pad_0x35[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(EventClientOutput_t, m_LoopState) == 0x0);
    static_assert(offsetof(EventClientOutput_t, m_flRenderTime) == 0x28);
    static_assert(offsetof(EventClientOutput_t, m_flRealTime) == 0x2c);
    static_assert(offsetof(EventClientOutput_t, m_flRenderFrameTimeUnbounded) == 0x30);
    static_assert(offsetof(EventClientOutput_t, m_bRenderOnly) == 0x34);
    
    static_assert(sizeof(EventClientOutput_t) == 0x38);
};

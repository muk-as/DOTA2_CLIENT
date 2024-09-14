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
    // Size: 0x60
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct EventSetTime_t
    {
    public:
        client::EngineLoopState_t m_LoopState; // 0x0        
        int32_t m_nClientOutputFrames; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4]; // 0x2c
        double m_flRealTime; // 0x30        
        double m_flRenderTime; // 0x38        
        double m_flRenderFrameTime; // 0x40        
        double m_flRenderFrameTimeUnbounded; // 0x48        
        double m_flRenderFrameTimeUnscaled; // 0x50        
        double m_flTickRemainder; // 0x58        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(EventSetTime_t, m_LoopState) == 0x0);
    static_assert(offsetof(EventSetTime_t, m_nClientOutputFrames) == 0x28);
    static_assert(offsetof(EventSetTime_t, m_flRealTime) == 0x30);
    static_assert(offsetof(EventSetTime_t, m_flRenderTime) == 0x38);
    static_assert(offsetof(EventSetTime_t, m_flRenderFrameTime) == 0x40);
    static_assert(offsetof(EventSetTime_t, m_flRenderFrameTimeUnbounded) == 0x48);
    static_assert(offsetof(EventSetTime_t, m_flRenderFrameTimeUnscaled) == 0x50);
    static_assert(offsetof(EventSetTime_t, m_flTickRemainder) == 0x58);
    
    static_assert(sizeof(EventSetTime_t) == 0x60);
};

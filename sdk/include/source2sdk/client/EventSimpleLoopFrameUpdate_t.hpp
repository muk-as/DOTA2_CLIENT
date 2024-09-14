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
    // Size: 0x30
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct EventSimpleLoopFrameUpdate_t
    {
    public:
        client::EngineLoopState_t m_LoopState; // 0x0        
        float m_flRealTime; // 0x28        
        float m_flFrameTime; // 0x2c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(EventSimpleLoopFrameUpdate_t, m_LoopState) == 0x0);
    static_assert(offsetof(EventSimpleLoopFrameUpdate_t, m_flRealTime) == 0x28);
    static_assert(offsetof(EventSimpleLoopFrameUpdate_t, m_flFrameTime) == 0x2c);
    
    static_assert(sizeof(EventSimpleLoopFrameUpdate_t) == 0x30);
};

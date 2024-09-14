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
    // Size: 0x38
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct EventClientProcessInput_t
    {
    public:
        client::EngineLoopState_t m_LoopState; // 0x0        
        float m_flRealTime; // 0x28        
        float m_flTickInterval; // 0x2c        
        double m_flTickStartTime; // 0x30        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(EventClientProcessInput_t, m_LoopState) == 0x0);
    static_assert(offsetof(EventClientProcessInput_t, m_flRealTime) == 0x28);
    static_assert(offsetof(EventClientProcessInput_t, m_flTickInterval) == 0x2c);
    static_assert(offsetof(EventClientProcessInput_t, m_flTickStartTime) == 0x30);
    
    static_assert(sizeof(EventClientProcessInput_t) == 0x38);
};

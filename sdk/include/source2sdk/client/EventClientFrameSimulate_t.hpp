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
    struct EventClientFrameSimulate_t
    {
    public:
        client::EngineLoopState_t m_LoopState; // 0x0        
        float m_flRealTime; // 0x28        
        float m_flFrameTime; // 0x2c        
        bool m_bScheduleSendTickPacket; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x31[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(EventClientFrameSimulate_t, m_LoopState) == 0x0);
    static_assert(offsetof(EventClientFrameSimulate_t, m_flRealTime) == 0x28);
    static_assert(offsetof(EventClientFrameSimulate_t, m_flFrameTime) == 0x2c);
    static_assert(offsetof(EventClientFrameSimulate_t, m_bScheduleSendTickPacket) == 0x30);
    
    static_assert(sizeof(EventClientFrameSimulate_t) == 0x38);
};

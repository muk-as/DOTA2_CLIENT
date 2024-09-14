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
    struct EventSimulate_t
    {
    public:
        client::EngineLoopState_t m_LoopState; // 0x0        
        bool m_bFirstTick; // 0x28        
        bool m_bLastTick; // 0x29        
        [[maybe_unused]] std::uint8_t pad_0x2a[0x6];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(EventSimulate_t, m_LoopState) == 0x0);
    static_assert(offsetof(EventSimulate_t, m_bFirstTick) == 0x28);
    static_assert(offsetof(EventSimulate_t, m_bLastTick) == 0x29);
    
    static_assert(sizeof(EventSimulate_t) == 0x30);
};

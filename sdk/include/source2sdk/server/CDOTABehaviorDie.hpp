#pragma once
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x78
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorDie
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x60]; // 0x0
        server::CountdownTimer m_timer; // 0x60        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorDie, m_timer) == 0x60);
    
    static_assert(sizeof(CDOTABehaviorDie) == 0x78);
};

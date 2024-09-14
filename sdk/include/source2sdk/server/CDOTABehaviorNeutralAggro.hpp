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
    // Size: 0xa0
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorNeutralAggro
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x60]; // 0x0
        Vector m_vHomePosition; // 0x60        
        bool m_bNoLeashTime; // 0x6c        
        bool m_bShortLeashTime; // 0x6d        
        [[maybe_unused]] std::uint8_t pad_0x6e[0x2]; // 0x6e
        server::CountdownTimer m_LeashTimer; // 0x70        
        server::CountdownTimer m_FleeAgainTimer; // 0x88        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorNeutralAggro, m_vHomePosition) == 0x60);
    static_assert(offsetof(CDOTABehaviorNeutralAggro, m_bNoLeashTime) == 0x6c);
    static_assert(offsetof(CDOTABehaviorNeutralAggro, m_bShortLeashTime) == 0x6d);
    static_assert(offsetof(CDOTABehaviorNeutralAggro, m_LeashTimer) == 0x70);
    static_assert(offsetof(CDOTABehaviorNeutralAggro, m_FleeAgainTimer) == 0x88);
    
    static_assert(sizeof(CDOTABehaviorNeutralAggro) == 0xa0);
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
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
            uint8_t _pad0000[0x60]; // 0x0
            Vector m_vHomePosition; // 0x60            
            bool m_bNoLeashTime; // 0x6c            
            bool m_bShortLeashTime; // 0x6d            
            uint8_t _pad006e[0x2]; // 0x6e
            source2sdk::server::CountdownTimer m_LeashTimer; // 0x70            
            source2sdk::server::CountdownTimer m_FleeAgainTimer; // 0x88            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralAggro, m_vHomePosition) == 0x60);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralAggro, m_bNoLeashTime) == 0x6c);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralAggro, m_bShortLeashTime) == 0x6d);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralAggro, m_LeashTimer) == 0x70);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralAggro, m_FleeAgainTimer) == 0x88);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorNeutralAggro) == 0xa0);
    };
};

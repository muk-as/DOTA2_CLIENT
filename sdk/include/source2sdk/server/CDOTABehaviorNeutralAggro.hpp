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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorNeutralAggro
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vHomePosition; // 0x_            
            bool m_bNoLeashTime; // 0x_            
            bool m_bShortLeashTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_LeashTimer; // 0x_            
            source2sdk::server::CountdownTimer m_FleeAgainTimer; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralAggro, m_vHomePosition) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralAggro, m_bNoLeashTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralAggro, m_bShortLeashTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralAggro, m_LeashTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralAggro, m_FleeAgainTimer) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorNeutralAggro) == 0x_);
    };
};

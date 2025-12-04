#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABehaviorMoveTo.hpp"
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
        class CDOTABehaviorNeutralHome
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x_            
            Vector m_vHomePosition; // 0x_            
            Vector m_vHomeFacing; // 0x_            
            bool m_bHomePositionSet; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_IdleRareAnimationTime; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralHome, m_MoveTo) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralHome, m_vHomePosition) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralHome, m_vHomeFacing) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralHome, m_bHomePositionSet) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralHome, m_IdleRareAnimationTime) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorNeutralHome) == 0x_);
    };
};

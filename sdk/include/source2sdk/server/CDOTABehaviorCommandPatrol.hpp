#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABehaviorMoveTo.hpp"

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
        class CDOTABehaviorCommandPatrol
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x_            
            Vector m_vOrderPosition; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vPatrolPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vPatrolPoints;
            char m_vPatrolPoints[0x_]; // 0x_            
            std::int32_t m_nCurrentTargetIndex; // 0x_            
            std::int32_t m_nDirection; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandPatrol, m_MoveTo) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandPatrol, m_vOrderPosition) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandPatrol, m_vPatrolPoints) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandPatrol, m_nCurrentTargetIndex) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandPatrol, m_nDirection) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorCommandPatrol) == 0x_);
    };
};

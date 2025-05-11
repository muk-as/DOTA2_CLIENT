#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CVectorExponentialMovingAverage.hpp"

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
        // Size: 0x40
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CMovementStatsProperty
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            std::int32_t m_nUseCounter; // 0x10            
            source2sdk::client::CVectorExponentialMovingAverage m_emaMovementDirection; // 0x14            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CMovementStatsProperty, m_nUseCounter) == 0x10);
        static_assert(offsetof(source2sdk::server::CMovementStatsProperty, m_emaMovementDirection) == 0x14);
        
        static_assert(sizeof(source2sdk::server::CMovementStatsProperty) == 0x40);
    };
};

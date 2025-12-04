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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CMovementStatsProperty
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nUseCounter; // 0x_            
            source2sdk::client::CVectorExponentialMovingAverage m_emaMovementDirection; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CMovementStatsProperty, m_nUseCounter) == 0x_);
        static_assert(offsetof(source2sdk::server::CMovementStatsProperty, m_emaMovementDirection) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CMovementStatsProperty) == 0x_);
    };
};

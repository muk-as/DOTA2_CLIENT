#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CFloatExponentialMovingAverage
        {
        public:
            uint8_t _pad0000[0x14];
            // Datamap fields:
            // int32_t m_nSampleCount; // 0x4
            // int32_t m_nMaxSampleCount; // 0x0
            // float m_previousSample; // 0x8
            // float m_average; // 0xc
            // float m_averageDelta; // 0x10
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CFloatExponentialMovingAverage) == 0x14);
    };
};

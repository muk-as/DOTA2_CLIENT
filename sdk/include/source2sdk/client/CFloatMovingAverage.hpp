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
        // Size: 0x20
        #pragma pack(push, 1)
        class CFloatMovingAverage
        {
        public:
            uint8_t _pad0000[0x20];
            // Datamap fields:
            // void m_vecSamples; // 0x0
            // int32_t m_nSamples; // 0x18
            // int32_t m_nCurrentSampleIndex; // 0x1c
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CFloatMovingAverage) == 0x20);
    };
};

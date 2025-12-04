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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CVectorExponentialMovingAverage
        {
        public:
            uint8_t _pad_[0x_];
            // Datamap fields:
            // int32_t m_nSampleCount; // 0x_
            // int32_t m_nMaxSampleCount; // 0x_
            // Vector m_previousSample; // 0x_
            // Vector m_average; // 0x_
            // Vector m_averageDelta; // 0x_
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CVectorExponentialMovingAverage) == 0x_);
    };
};

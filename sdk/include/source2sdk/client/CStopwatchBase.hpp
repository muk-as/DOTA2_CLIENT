#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSimpleSimTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0xc
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CStopwatchBase : public source2sdk::client::CSimpleSimTimer
        {
        public:
            bool m_fIsRunning; // 0x8            
            uint8_t _pad0009[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CStopwatchBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CStopwatchBase) == 0xc);
    };
};

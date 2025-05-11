#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/IGapHost_YieldingCursor.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: false
        // Size: 0xd0
        // Has VTable
        // 
        // static metadata: MPulseInternal_IsCursor
        #pragma pack(push, 1)
        class CPulseExecCursor : public source2sdk::pulse_runtime_lib::IGapHost_YieldingCursor
        {
        public:
            uint8_t _pad0008[0xc8];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseExecCursor) == 0xd0);
    };
};

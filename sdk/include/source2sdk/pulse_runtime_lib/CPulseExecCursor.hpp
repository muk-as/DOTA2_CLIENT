#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0xd8
        // Has VTable
        // 
        // static metadata: MPulseInternal_IsCursor
        #pragma pack(push, 1)
        class CPulseExecCursor
        {
        public:
            uint8_t _pad0000[0xd8];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseExecCursor) == 0xd8);
    };
};

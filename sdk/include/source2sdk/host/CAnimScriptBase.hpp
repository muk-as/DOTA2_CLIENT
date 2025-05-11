#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: host
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace host
    {
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x10
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CAnimScriptBase
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            bool m_bIsValid; // 0x8            
            uint8_t _pad0009[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::host::CAnimScriptBase, m_bIsValid) == 0x8);
        
        static_assert(sizeof(source2sdk::host::CAnimScriptBase) == 0x10);
    };
};

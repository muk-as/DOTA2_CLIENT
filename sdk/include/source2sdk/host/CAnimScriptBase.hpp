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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CAnimScriptBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            bool m_bIsValid; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::host::CAnimScriptBase, m_bIsValid) == 0x_);
        
        static_assert(sizeof(source2sdk::host::CAnimScriptBase) == 0x_);
    };
};

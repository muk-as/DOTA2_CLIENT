#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: unknown
        // Alignment: 0x2
        // Standard-layout class: true
        // Size: 0x10
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmGraphNode_CDefinition
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            std::int16_t m_nNodeIdx; // 0x8            
            uint8_t _pad000a[0x6];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmGraphNode_CDefinition, m_nNodeIdx) == 0x8);
        
        static_assert(sizeof(source2sdk::animlib::CNmGraphNode_CDefinition) == 0x10);
    };
};

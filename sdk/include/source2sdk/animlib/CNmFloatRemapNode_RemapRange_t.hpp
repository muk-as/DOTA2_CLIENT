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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CNmFloatRemapNode_RemapRange_t
        {
        public:
            float m_flBegin; // 0x0            
            float m_flEnd; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmFloatRemapNode_RemapRange_t, m_flBegin) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmFloatRemapNode_RemapRange_t, m_flEnd) == 0x4);
        
        static_assert(sizeof(source2sdk::animlib::CNmFloatRemapNode_RemapRange_t) == 0x8);
    };
};

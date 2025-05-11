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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CNmStateNode_TimedEvent_t
        {
        public:
            CGlobalSymbol m_ID; // 0x0            
            float m_flTimeValueSeconds; // 0x8            
            uint8_t _pad000c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmStateNode_TimedEvent_t, m_ID) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmStateNode_TimedEvent_t, m_flTimeValueSeconds) == 0x8);
        
        static_assert(sizeof(source2sdk::animlib::CNmStateNode_TimedEvent_t) == 0x10);
    };
};

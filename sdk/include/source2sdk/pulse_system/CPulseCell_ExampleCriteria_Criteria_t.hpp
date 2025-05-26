#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_system
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CPulseCell_ExampleCriteria_Criteria_t
        {
        public:
            float m_flFloatValue1; // 0x0            
            float m_flFloatValue2; // 0x4            
            bool m_bMyBool; // 0x8            
            uint8_t _pad0009[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_system::CPulseCell_ExampleCriteria_Criteria_t, m_flFloatValue1) == 0x0);
        static_assert(offsetof(source2sdk::pulse_system::CPulseCell_ExampleCriteria_Criteria_t, m_flFloatValue2) == 0x4);
        static_assert(offsetof(source2sdk::pulse_system::CPulseCell_ExampleCriteria_Criteria_t, m_bMyBool) == 0x8);
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseCell_ExampleCriteria_Criteria_t) == 0xc);
    };
};

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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CPulseCell_ExampleCriteria_Criteria_t
        {
        public:
            float m_flFloatValue1; // 0x_            
            float m_flFloatValue2; // 0x_            
            bool m_bMyBool; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_system::CPulseCell_ExampleCriteria_Criteria_t, m_flFloatValue1) == 0x_);
        static_assert(offsetof(source2sdk::pulse_system::CPulseCell_ExampleCriteria_Criteria_t, m_flFloatValue2) == 0x_);
        static_assert(offsetof(source2sdk::pulse_system::CPulseCell_ExampleCriteria_Criteria_t, m_bMyBool) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseCell_ExampleCriteria_Criteria_t) == 0x_);
    };
};

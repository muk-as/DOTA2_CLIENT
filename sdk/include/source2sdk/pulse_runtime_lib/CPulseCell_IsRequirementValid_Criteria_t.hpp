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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CPulseCell_IsRequirementValid_Criteria_t
        {
        public:
            bool m_bIsValid; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_IsRequirementValid_Criteria_t, m_bIsValid) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_IsRequirementValid_Criteria_t) == 0x_);
    };
};

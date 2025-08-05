#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x4
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CSmartPropPulse_SelectionChoiceWeight_Criteria_t
        {
        public:
            // metadata: MPropertyDescription "Relative weight of this choice, higher weighted choices are more likely to be selected."
            float m_flWeight; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::smartprops::CSmartPropPulse_SelectionChoiceWeight_Criteria_t, m_flWeight) == 0x0);
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropPulse_SelectionChoiceWeight_Criteria_t) == 0x4);
    };
};

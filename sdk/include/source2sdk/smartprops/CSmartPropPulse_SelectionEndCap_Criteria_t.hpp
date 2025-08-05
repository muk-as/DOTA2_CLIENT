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
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x2
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CSmartPropPulse_SelectionEndCap_Criteria_t
        {
        public:
            // metadata: MPropertyDescription "Is this an element which should be placed at the start of the line."
            bool m_bStart; // 0x0            
            // metadata: MPropertyDescription "Is this an element which should be placed at the end of the line."
            bool m_bEnd; // 0x1            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::smartprops::CSmartPropPulse_SelectionEndCap_Criteria_t, m_bStart) == 0x0);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropPulse_SelectionEndCap_Criteria_t, m_bEnd) == 0x1);
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropPulse_SelectionEndCap_Criteria_t) == 0x2);
    };
};

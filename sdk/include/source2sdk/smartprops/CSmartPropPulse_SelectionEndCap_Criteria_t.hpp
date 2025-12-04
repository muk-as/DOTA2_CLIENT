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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CSmartPropPulse_SelectionEndCap_Criteria_t
        {
        public:
            // metadata: MPropertyDescription "Is this an element which should be placed at the start of the line."
            bool m_bStart; // 0x_            
            // metadata: MPropertyDescription "Is this an element which should be placed at the end of the line."
            bool m_bEnd; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::smartprops::CSmartPropPulse_SelectionEndCap_Criteria_t, m_bStart) == 0x_);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropPulse_SelectionEndCap_Criteria_t, m_bEnd) == 0x_);
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropPulse_SelectionEndCap_Criteria_t) == 0x_);
    };
};

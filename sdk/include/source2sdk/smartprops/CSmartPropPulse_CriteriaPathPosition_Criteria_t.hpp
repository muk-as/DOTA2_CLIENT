#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/SmartPropPathPositions_t.hpp"

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
        struct CSmartPropPulse_CriteriaPathPosition_Criteria_t
        {
        public:
            // metadata: MPropertyDescription "Specifies the method to use to determine which positions this element should be placed at along the path."
            source2sdk::smartprops::SmartPropPathPositions_t m_PlaceAtPositions; // 0x_            
            // metadata: MPropertySuppressExpr "( m_PlaceAtPositions == ALL ) || ( m_PlaceAtPositions == START_AND_END ) || ( m_PlaceAtPositions == CONTROL_POINTS )"
            // metadata: MPropertyDescription "Specifies the spacing between positions. For example, a value of 1 will place the element at very position, 2 every other position, 3 every third position"
            std::int32_t m_nPlaceEveryNthPosition; // 0x_            
            // metadata: MPropertySuppressExpr "( m_PlaceAtPositions == ALL ) || ( m_PlaceAtPositions == START_AND_END ) || ( m_PlaceAtPositions == CONTROL_POINTS )"
            // metadata: MPropertyDescription "Specifies an offset to use when determining the Nth position to place an element at. For example if placing at every third position with an offset of 0, an element will appear at positions 1, 4, 7, and so on. But if an offset of 2 is set instead of 0, then an element will appear at positions 3, 6, and 9 and so on."
            std::int32_t m_nNthPositionIndexOffset; // 0x_            
            // metadata: MPropertyDescription "Should this element be placed at the first positions on the path"
            bool m_bAllowAtStart; // 0x_            
            // metadata: MPropertyDescription "Should this element be placed at the last positions on the path"
            bool m_bAllowAtEnd; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::smartprops::CSmartPropPulse_CriteriaPathPosition_Criteria_t, m_PlaceAtPositions) == 0x_);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropPulse_CriteriaPathPosition_Criteria_t, m_nPlaceEveryNthPosition) == 0x_);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropPulse_CriteriaPathPosition_Criteria_t, m_nNthPositionIndexOffset) == 0x_);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropPulse_CriteriaPathPosition_Criteria_t, m_bAllowAtStart) == 0x_);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropPulse_CriteriaPathPosition_Criteria_t, m_bAllowAtEnd) == 0x_);
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropPulse_CriteriaPathPosition_Criteria_t) == 0x_);
    };
};

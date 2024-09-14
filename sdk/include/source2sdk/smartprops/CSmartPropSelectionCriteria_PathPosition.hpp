#pragma once
#include "source2sdk/smartprops/CSmartPropAttributePathPositions.hpp"
#include "source2sdk/smartprops/CSmartPropSelectionCriteria.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x188
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataComponentValidGrandParents
    // static metadata: MPropertyFriendlyName "Valid Path Positions"
    // static metadata: MPropertyDescription "Specifies the path positions at which this element may appear."
    #pragma pack(push, 1)
    class CSmartPropSelectionCriteria_PathPosition : public smartprops::CSmartPropSelectionCriteria
    {
    public:
        // metadata: MPropertyDescription "Specifies the method to use to determine which positions this element should be placed at along the path."
        smartprops::CSmartPropAttributePathPositions m_PlaceAtPositions; // 0x48        
        // metadata: MPropertySuppressExpr "( m_PlaceAtPositions == ALL ) || ( m_PlaceAtPositions == START_AND_END ) || ( m_PlaceAtPositions == CONTROL_POINTS )"
        // metadata: MPropertyDescription "Specifies the spacing between positions. For example, a value of 1 will place the element at very position, 2 every other position, 3 every third position"
        CSmartPropAttributeInt m_nPlaceEveryNthPosition; // 0x88        
        // metadata: MPropertySuppressExpr "( m_PlaceAtPositions == ALL ) || ( m_PlaceAtPositions == START_AND_END ) || ( m_PlaceAtPositions == CONTROL_POINTS )"
        // metadata: MPropertyDescription "Specifies an offset to use when determining the Nth position to place an element at. For example if placing at every third position with an offset of 0, an element will appear at positions 1, 4, 7, and so on. But if an offset of 2 is set instead of 0, then an element will appear at positions 3, 6, and 9 and so on."
        CSmartPropAttributeInt m_nNthPositionIndexOffset; // 0xc8        
        // metadata: MPropertyDescription "Should this element be placed at the first positions on the path"
        CSmartPropAttributeBool m_bAllowAtStart; // 0x108        
        // metadata: MPropertyDescription "Should this element be placed at the last positions on the path"
        CSmartPropAttributeBool m_bAllowAtEnd; // 0x148        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropSelectionCriteria_PathPosition because it is not a standard-layout class
    static_assert(sizeof(CSmartPropSelectionCriteria_PathPosition) == 0x188);
};

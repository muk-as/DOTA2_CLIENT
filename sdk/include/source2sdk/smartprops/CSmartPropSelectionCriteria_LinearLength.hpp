#pragma once
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
    // Size: 0x148
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataComponentValidGrandParents
    // static metadata: MPropertyFriendlyName "Linear Length"
    // static metadata: MPropertyDescription "Specifies the length of this element, used when fitting an element on to a line."
    #pragma pack(push, 1)
    class CSmartPropSelectionCriteria_LinearLength : public smartprops::CSmartPropSelectionCriteria
    {
    public:
        // metadata: MPropertyDescription "Specifies the length of the line that will be taken up if this element is selected."
        CSmartPropAttributeFloat m_flLength; // 0x48        
        // metadata: MPropertyDescription "Can this object be scaled. If enabled the minimum and maximum lengths must be set to specify the size range of allowable scale."
        CSmartPropAttributeBool m_bAllowScale; // 0x88        
        // metadata: MPropertyFriendlyName "Minimum length"
        // metadata: MPropertySuppressExpr "m_bAllowScale == false"
        // metadata: MPropertyDescription "Minimum allowable length for the object. Must be <= length. If length is 100 and minimum length is 20, then the object may be assigned a scale in the rage [ 0.2, 1.0 ]."
        CSmartPropAttributeFloat m_flMinLength; // 0xc8        
        // metadata: MPropertyFriendlyName "Maximum length"
        // metadata: MPropertySuppressExpr "m_bAllowScale == false"
        // metadata: MPropertyDescription "Maximum allowable length for the object. Must be >= length. If length is 100 and maximum length is 160, then the object may be assigned a scale in the rage [ 1.0, 1.6 ]."
        CSmartPropAttributeFloat m_flMaxLength; // 0x108        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropSelectionCriteria_LinearLength because it is not a standard-layout class
    static_assert(sizeof(CSmartPropSelectionCriteria_LinearLength) == 0x148);
};

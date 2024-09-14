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
    // Size: 0x50
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataComponentValidGrandParents
    // static metadata: MPropertyFriendlyName "Is Valid"
    // static metadata: MPropertyDescription "Specifies if this element is currently valid choice."
    #pragma pack(push, 1)
    class CSmartPropSelectionCriteria_IsValid : public smartprops::CSmartPropSelectionCriteria
    {
    public:
        // metadata: MPropertyFriendlyName "Valid When"
        // metadata: MPropertyDescription "Expression to evaluate to determine if this choice is currently valid."
        // metadata: MPropertyAttributeEditor "SmartPropAttributeEditor(expression)"
        CUtlString m_Expression; // 0x48        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropSelectionCriteria_IsValid because it is not a standard-layout class
    static_assert(sizeof(CSmartPropSelectionCriteria_IsValid) == 0x50);
};

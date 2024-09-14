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
    // Size: 0xc8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataComponentValidGrandParents
    // static metadata: MPropertyFriendlyName "End Cap Settings"
    // static metadata: MPropertyDescription "Specifies that this is a special part that should be used at the start or end of the line."
    #pragma pack(push, 1)
    class CSmartPropSelectionCriteria_EndCap : public smartprops::CSmartPropSelectionCriteria
    {
    public:
        // metadata: MPropertyDescription "Is this an element which should be placed at the start of the line."
        CSmartPropAttributeBool m_bStart; // 0x48        
        // metadata: MPropertyDescription "Is this an element which should be placed at the end of the line."
        CSmartPropAttributeBool m_bEnd; // 0x88        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropSelectionCriteria_EndCap because it is not a standard-layout class
    static_assert(sizeof(CSmartPropSelectionCriteria_EndCap) == 0xc8);
};

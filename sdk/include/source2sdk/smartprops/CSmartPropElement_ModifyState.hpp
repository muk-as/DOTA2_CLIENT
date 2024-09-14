#pragma once
#include "source2sdk/smartprops/CSmartPropElement.hpp"
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
    // Size: 0x88
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Apply Modifiers"
    // static metadata: MPropertyDescription "An element which is used to apply a set of modifiers to the state of its parent."
    // static metadata: MPropertySuppressBaseClassField
    // static metadata: MVDataOutlinerLabelExpr
    #pragma pack(push, 1)
    class CSmartPropElement_ModifyState : public smartprops::CSmartPropElement
    {
    public:
        // metadata: MPropertyFriendlyName "Label"
        // metadata: MPropertyDescription "Optional text that will appear in the outliner to help organize Smart Prop elements and communicate their purpose to other users."
        CUtlString m_sLabel; // 0x80        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropElement_ModifyState because it is not a standard-layout class
    static_assert(sizeof(CSmartPropElement_ModifyState) == 0x88);
};

#pragma once
#include "source2sdk/smartprops/CSmartPropElement_Group.hpp"
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
    // Size: 0xe8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Place Multiple"
    // static metadata: MPropertyDescription "An element which places multiple instances of its child elements."
    #pragma pack(push, 1)
    class CSmartPropElement_PlaceMultiple : public smartprops::CSmartPropElement_Group
    {
    public:
        // metadata: MPropertyDescription "Number of instances of this object and its children to be placed."
        CSmartPropAttributeInt m_nCount; // 0xa0        
        // metadata: MPropertyFriendlyName "Stop When"
        // metadata: MPropertyDescription "Stop placing copies of the children when this expression evaluates to true."
        // metadata: MPropertyAttributeEditor "SmartPropAttributeEditor(expression)"
        CUtlString m_Expression; // 0xe0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropElement_PlaceMultiple because it is not a standard-layout class
    static_assert(sizeof(CSmartPropElement_PlaceMultiple) == 0xe8);
};

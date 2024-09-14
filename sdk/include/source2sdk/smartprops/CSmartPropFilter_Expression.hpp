#pragma once
#include "source2sdk/smartprops/CSmartPropFilter.hpp"
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
    // Size: 0x58
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Filter: Expression"
    // static metadata: MPropertyDescription "Evaluates the specified expression, if the result of the expression is false evaluation of the element is stopped."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropFilter_Expression : public smartprops::CSmartPropFilter
    {
    public:
        // metadata: MPropertyAttributeEditor "SmartPropAttributeEditor(expression)"
        CUtlString m_Expression; // 0x50        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropFilter_Expression because it is not a standard-layout class
    static_assert(sizeof(CSmartPropFilter_Expression) == 0x58);
};

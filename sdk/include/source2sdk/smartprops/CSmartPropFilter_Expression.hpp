#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropFilter.hpp"

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Filter: Expression"
        // static metadata: MPropertyDescription "Evaluates the specified expression, if the result of the expression is false evaluation of the element is stopped."
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropFilter_Expression : public source2sdk::smartprops::CSmartPropFilter
        {
        public:
            // metadata: MPropertyAttributeEditor "SmartPropAttributeEditor(expression)"
            CUtlString m_Expression; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropFilter_Expression because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropFilter_Expression) == 0x_);
    };
};

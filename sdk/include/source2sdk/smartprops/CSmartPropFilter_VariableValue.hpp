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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x70
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Filter: Variable Value"
        // static metadata: MPropertyDescription "Compares the current value of a variable to the specified value. If the comparison is false the element evaluation is stopped."
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropFilter_VariableValue : public source2sdk::smartprops::CSmartPropFilter
        {
        public:
            CSmartPropVariableComparison m_VariableComparison; // 0x50            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropFilter_VariableValue because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropFilter_VariableValue) == 0x70);
    };
};

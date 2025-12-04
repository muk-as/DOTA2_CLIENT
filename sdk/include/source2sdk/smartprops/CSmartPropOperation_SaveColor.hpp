#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropOperation.hpp"

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
        // static metadata: MPropertyFriendlyName "Save Current Color"
        // static metadata: MPropertyDescription "Save the current color tint value to a specified variable"
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropOperation_SaveColor : public source2sdk::smartprops::CSmartPropOperation
        {
        public:
            // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Color )"
            CUtlString m_VariableName; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropOperation_SaveColor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropOperation_SaveColor) == 0x_);
    };
};

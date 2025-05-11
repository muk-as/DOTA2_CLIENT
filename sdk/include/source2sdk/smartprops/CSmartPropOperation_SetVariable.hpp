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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x90
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Set Variable"
        // static metadata: MPropertyDescription "Set the value of a variable."
        // static metadata: MVDataClassGroup
        // static metadata: MVDataOutlinerNameExpr
        #pragma pack(push, 1)
        class CSmartPropOperation_SetVariable : public source2sdk::smartprops::CSmartPropOperation
        {
        public:
            CSmartPropAttributeVariableValue m_VariableValue; // 0x50            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropOperation_SetVariable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropOperation_SetVariable) == 0x90);
    };
};

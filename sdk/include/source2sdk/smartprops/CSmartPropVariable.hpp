#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropParameter.hpp"

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x28
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataNodeType "1"
        // static metadata: MVDataAnonymousNode
        // static metadata: MVDataOutlinerNameExpr
        #pragma pack(push, 1)
        class CSmartPropVariable : public source2sdk::smartprops::CSmartPropParameter
        {
        public:
            CUtlString m_VariableName; // 0x10            
            // metadata: MPropertySortPriority "-1"
            // metadata: MPropertyDescription "If enabled, this value will be exposed as a parameter that can be set on the smart prop object in hammer."
            bool m_bExposeAsParameter; // 0x18            
            uint8_t _pad0019[0x7]; // 0x19
            // metadata: MPropertySortPriority "-1"
            // metadata: MPropertyReadonlyExpr
            // metadata: MPropertyFriendlyName "Parameter Display Name"
            // metadata: MPropertyDescription "Name of the parameter which will appear as a property in the Hammer object properties ui when selecting an object using this smart prop."
            CUtlString m_DisplayName; // 0x20            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropVariable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropVariable) == 0x28);
    };
};

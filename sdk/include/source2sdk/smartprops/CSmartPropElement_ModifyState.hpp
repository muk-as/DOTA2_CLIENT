#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropElement.hpp"

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
        // Size: 0x88
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Apply Modifiers"
        // static metadata: MPropertyDescription "An element which is used to apply a set of modifiers to the state of its parent."
        // static metadata: MPropertySuppressBaseClassField
        #pragma pack(push, 1)
        class CSmartPropElement_ModifyState : public source2sdk::smartprops::CSmartPropElement
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropElement_ModifyState) == 0x88);
    };
};

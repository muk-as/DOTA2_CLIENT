#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/ApplyColorMode_t.hpp"
#include "source2sdk/smartprops/CSmartPropVariable.hpp"

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
        // Size: 0x30
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Tint Mode"
        // static metadata: MPropertyDescription "Specifies how a color tint value is to be applied with respect to the existing color tint"
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropVariable_ApplyColorMode : public source2sdk::smartprops::CSmartPropVariable
        {
        public:
            source2sdk::smartprops::ApplyColorMode_t m_DefaultValue; // 0x28            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropVariable_ApplyColorMode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropVariable_ApplyColorMode) == 0x30);
    };
};

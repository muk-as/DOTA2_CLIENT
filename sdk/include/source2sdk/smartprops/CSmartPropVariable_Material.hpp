#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
        // Size: 0x118
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Material"
        // static metadata: MPropertyDescription "Material Asset Variable"
        #pragma pack(push, 1)
        class CSmartPropVariable_Material : public source2sdk::smartprops::CSmartPropVariable
        {
        public:
            // metadata: MPropertyFriendlyName "Default Material"
            // m_DefaultValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2>> m_DefaultValue;
            char m_DefaultValue[0xe0]; // 0x38            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropVariable_Material because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropVariable_Material) == 0x118);
    };
};

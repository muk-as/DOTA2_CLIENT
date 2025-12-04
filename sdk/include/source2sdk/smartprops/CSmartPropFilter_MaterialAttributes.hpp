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
        // static metadata: MPropertyFriendlyName "Filter: Material Attributes"
        // static metadata: MPropertyDescription "Allows the parent element to be conditionally evaluated based on attributes assigned to the surface material."
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropFilter_MaterialAttributes : public source2sdk::smartprops::CSmartPropFilter
        {
        public:
            // metadata: MPropertyDescription "List of material attributes on which this element is valid. If empty, the element is not restricted to any specific surfaces."
            // m_AllowedMaterialAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_AllowedMaterialAttributes;
            char m_AllowedMaterialAttributes[0x_]; // 0x_            
            // metadata: MPropertyDescription "List of material attributes on which this element is not valid. If empty, the element is not restricted to any specific surfaces."
            // m_DisallowedMaterialAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_DisallowedMaterialAttributes;
            char m_DisallowedMaterialAttributes[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropFilter_MaterialAttributes because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropFilter_MaterialAttributes) == 0x_);
    };
};

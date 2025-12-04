#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct MaterialGroupChoice_t
        {
        public:
            // metadata: MPropertyAttributeEditor "SmartPropAttributeEditor( MaterialGroupFromVariable )"
            // metadata: MPropertyFriendlyName "Material Group"
            // metadata: MPropertyDescription "Specifies the name of the material group (skin) to use when displaying the specified model."
            CSmartPropAttributeMaterialGroup m_MaterialGroupName; // 0x_            
            // metadata: MPropertyDescription "Relative weight of this choice, higher weighted choices are more likely to be selected."
            CSmartPropAttributeFloat m_flWeight; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::smartprops::MaterialGroupChoice_t, m_MaterialGroupName) == 0x_);
        static_assert(offsetof(source2sdk::smartprops::MaterialGroupChoice_t, m_flWeight) == 0x_);
        
        static_assert(sizeof(source2sdk::smartprops::MaterialGroupChoice_t) == 0x_);
    };
};

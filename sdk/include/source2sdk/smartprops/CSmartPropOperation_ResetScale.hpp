#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropTransformOperation.hpp"

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
        // static metadata: MPropertyFriendlyName "Transform: Reset Scale"
        // static metadata: MPropertyDescription "Reset the current scale such the element only inherits the object level scale, but does not inherit the scale applied to its parent."
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropOperation_ResetScale : public source2sdk::smartprops::CSmartPropTransformOperation
        {
        public:
            // metadata: MPropertyDescription "If enabled, the object level scale will be ignored, meaning any scale applied in Hammer will have no effect on the element or its children."
            CSmartPropAttributeBool m_bIgnoreObjectScale; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropOperation_ResetScale because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropOperation_ResetScale) == 0x_);
    };
};

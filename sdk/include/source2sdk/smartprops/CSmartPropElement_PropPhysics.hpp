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
        // Size: 0x148
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Prop Physics"
        // static metadata: MPropertyDescription "Places a prop physics entity."
        // static metadata: MVDataOutlinerAssetNameExpr
        #pragma pack(push, 1)
        class CSmartPropElement_PropPhysics : public source2sdk::smartprops::CSmartPropElement
        {
        public:
            // metadata: MPropertyDescription "Name of the model resource (.vmdl) to place."
            CSmartPropAttributeModelName m_sModelName; // 0x88            
            // metadata: MPropertyAttributeEditor "SmartPropAttributeEditor( MaterialGroup:m_sModelName )"
            // metadata: MPropertyFriendlyName "Material Group"
            // metadata: MPropertyDescription "Specifies the name of the material group (skin) to use when displaying the specified model."
            CSmartPropAttributeMaterialGroup m_MaterialGroupName; // 0xc8            
            // metadata: MPropertyDescription "Should this physis prop start in a sleeping (non-simulating) state such that it won't update until it is woken up by an external event."
            CSmartPropAttributeBool m_bStartAsleep; // 0x108            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropElement_PropPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropElement_PropPhysics) == 0x148);
    };
};

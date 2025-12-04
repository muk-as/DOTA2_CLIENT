#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCSmartProp.hpp"
#include "source2sdk/smartprops/CSmartPropElement.hpp"

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
        // static metadata: MPropertyFriendlyName "Smart Prop Reference"
        // static metadata: MPropertyDescription "Evaluates a specified smart prop as a child of the current element."
        // static metadata: MVDataOutlinerAssetNameExpr
        #pragma pack(push, 1)
        class CSmartPropElement_SmartProp : public source2sdk::smartprops::CSmartPropElement
        {
        public:
            // metadata: MPropertyDescription "Name of the target smart prop resource (.vsmart) to evaluate."
            // m_sSmartProp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCSmartProp>> m_sSmartProp;
            char m_sSmartProp[0x_]; // 0x_            
            // metadata: MPropertyDescription "If enabled, any changes made to the evaluation state by the target smart prop (as well as modifiers) will only apply locally and will not affect the evaluation state of the parent. Disabling this will allow modifications to the evaluation state by the referenced smart prop to apply the current state of the of the parent. For example if the referenced smart prop applies a transform and you want the transform to affect the elements in the parent after this element, then you should disable local evaluation state."
            bool m_bLocalEvaluationState; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropElement_SmartProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropElement_SmartProp) == 0x_);
    };
};

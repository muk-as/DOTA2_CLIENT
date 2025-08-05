#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropElement.hpp"
#include "source2sdk/smartprops/SmartPropDetailFadeLevel_t.hpp"

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
        // Size: 0x250
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Model"
        // static metadata: MPropertyDescription "Places a model as the child of an element."
        // static metadata: MVDataOutlinerAssetNameExpr
        #pragma pack(push, 1)
        class CSmartPropElement_Model : public source2sdk::smartprops::CSmartPropElement
        {
        public:
            // metadata: MPropertyDescription "Name of the model resource (.vmdl) to place."
            // metadata: MPropertyAutoRebuildOnChange
            CSmartPropAttributeModelName m_sModelName; // 0x88            
            // metadata: MPropertyAttributeEditor "SmartPropAttributeEditor( MaterialGroup:m_sModelName )"
            // metadata: MPropertyFriendlyName "Material Group"
            // metadata: MPropertyDescription "Specifies the name of the material group (skin) to use when displaying the specified model."
            CSmartPropAttributeMaterialGroup m_MaterialGroupName; // 0xc8            
            // metadata: MPropertyDescription "If enabled the model will be rendered as a detail object, which is faster for placing many small objects and has fade out functionality, but may have different lighting characteristics. Detail object models support only uniform scale and will use the largest component of the scale value."
            CSmartPropAttributeBool m_bDetailObject; // 0x108            
            // metadata: MPropertySuppressExpr "m_bDetailObject == true"
            // metadata: MPropertyDescription "Scale factor (may be non-uniform) to be applied directly to the model (in the model's local space)."
            CSmartPropAttributeVector m_vModelScale; // 0x148            
            // metadata: MPropertyFriendlyName "Rigid Deformation Only"
            // metadata: MPropertySuppressExpr "m_bDetailObject == true"
            // metadata: MPropertyDescription "If enabled, only the transform of the model will be modified by any active deformer, the vertices of the model will not be changed by the deformer."
            CSmartPropAttributeBool m_bRigidDeformation; // 0x188            
            // metadata: MPropertyFriendlyName "Model Scale"
            // metadata: MPropertySuppressExpr "m_bDetailObject == false"
            // metadata: MPropertyDescription "Uniform scale to be applied to the model, certain properties like detail object mean only uniform scale may be applied to the model."
            CSmartPropAttributeFloat m_flUniformModelScale; // 0x1c8            
            // metadata: MPropertyAttributeEditor "SmartPropAttributeEditor( LODLevel:m_sModelName )"
            // metadata: MPropertySuppressExpr "m_bDetailObject == true"
            // metadata: MPropertyDescription "Select model LOD level. The default Auto LOD means the lod will be picked based on the size of the model on screen. If a specific level is selected, then that lod level will always be used regardless of the size of the model on screen."
            CSmartPropAttributeInt m_nLodLevel; // 0x208            
            // metadata: MPropertyFriendlyName "Fade Level"
            // metadata: MPropertySuppressExpr "m_bDetailObject == false"
            // metadata: MPropertyDescription "Controls the size at which a model marked as a detail object will fade out."
            source2sdk::smartprops::SmartPropDetailFadeLevel_t m_nDetailObjectFadeLevel; // 0x248            
            uint8_t _pad024c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropElement_Model because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropElement_Model) == 0x250);
    };
};

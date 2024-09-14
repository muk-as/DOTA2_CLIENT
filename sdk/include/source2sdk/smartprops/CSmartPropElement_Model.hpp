#pragma once
#include "source2sdk/smartprops/CSmartPropElement.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x140
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Model"
    // static metadata: MPropertyDescription "Places a model as the child of an element."
    // static metadata: MVDataOutlinerAssetNameExpr
    #pragma pack(push, 1)
    class CSmartPropElement_Model : public smartprops::CSmartPropElement
    {
    public:
        // metadata: MPropertyDescription "Name of the model resource (.vmdl) to place."
        // metadata: MPropertyAutoRebuildOnChange
        CSmartPropAttributeModelName m_sModelName; // 0x80        
        // metadata: MPropertyAttributeEditor "SmartPropAttributeEditor( MaterialGroup:m_sModelName )"
        // metadata: MPropertyFriendlyName "Material Group"
        // metadata: MPropertyDescription "Specifies the name of the material group (skin) to use when displaying the specified model."
        CSmartPropAttributeMaterialGroup m_MaterialGroupName; // 0xc0        
        // metadata: MPropertyDescription "Scale factor (may be non-uniform) to be applied directly to the model (in the model's local space)."
        CSmartPropAttributeVector m_vModelScale; // 0x100        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropElement_Model because it is not a standard-layout class
    static_assert(sizeof(CSmartPropElement_Model) == 0x140);
};

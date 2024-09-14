#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/smartprops/CSmartPropVariable.hpp"
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
    // Size: 0x110
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Material Group"
    #pragma pack(push, 1)
    class CSmartPropVariable_MaterialGroup : public smartprops::CSmartPropVariable
    {
    public:
        // metadata: MPropertyDescription "Model containing the set of material groups to select."
        // metadata: MPropertyAutoRebuildOnChange
        // m_sModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sModelName;
        char m_sModelName[0xe0]; // 0x28        
        // metadata: MPropertyFriendlyName "Default Material Group"
        // metadata: MPropertyDescription "Default material group (skin) to assign to the variable value."
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_DefaultValue; // 0x108        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropVariable_MaterialGroup because it is not a standard-layout class
    static_assert(sizeof(CSmartPropVariable_MaterialGroup) == 0x110);
};

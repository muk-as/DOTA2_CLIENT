#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
        // Size: 0x120
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Material Group"
        #pragma pack(push, 1)
        class CSmartPropVariable_MaterialGroup : public source2sdk::smartprops::CSmartPropVariable
        {
        public:
            // metadata: MPropertyDescription "Model containing the set of material groups to select."
            // metadata: MPropertyProvidesEditContextString
            // m_sModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sModelName;
            char m_sModelName[0xe0]; // 0x38            
            // metadata: MPropertyFriendlyName "Default Material Group"
            // metadata: MPropertyDescription "Default material group (skin) to assign to the variable value."
            CModelMaterialGroupName m_DefaultValue; // 0x118            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropVariable_MaterialGroup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropVariable_MaterialGroup) == 0x120);
    };
};

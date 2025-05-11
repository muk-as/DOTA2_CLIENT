#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropMaterialReplacement.hpp"
#include "source2sdk/smartprops/CSmartPropOperation.hpp"

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
        // Size: 0xa8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Material Override"
        // static metadata: MPropertyDescription "Specifies a table of material replacements to apply to all following models. Mapping goes from the material specified by the model (including material group selection) to the replacement material. Previous material overrides are not considered when determining the base material."
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropOperation_MaterialOverride : public source2sdk::smartprops::CSmartPropOperation
        {
        public:
            // metadata: MPropertyFriendlyName "Clear Active Overrides"
            // metadata: MPropertyDescription "If enabled, clear any previous material overrides, so that only the material replacements specified in this table will be active."
            CSmartPropAttributeBool m_bClearCurrentOverrides; // 0x50            
            // metadata: MPropertyAutoExpandSelf
            // metadata: MPropertyFriendlyName "Material Replacements"
            // metadata: MPropertyDescription "Table specifying pairs of existing materials and the material to replace them with."
            // m_MaterialReplacements has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::smartprops::CSmartPropMaterialReplacement> m_MaterialReplacements;
            char m_MaterialReplacements[0x18]; // 0x90            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropOperation_MaterialOverride because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropOperation_MaterialOverride) == 0xa8);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropAttributeChoiceSelectionMode.hpp"
#include "source2sdk/smartprops/CSmartPropOperation.hpp"
#include "source2sdk/smartprops/MaterialGroupChoice_t.hpp"

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
        // static metadata: MPropertyFriendlyName "Set Material Group Choice"
        // static metadata: MPropertyDescription "Picks a material group from a set of choices and assigns that material group to a specified variable."
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropOperation_SetMateraialGroupChoice : public source2sdk::smartprops::CSmartPropOperation
        {
        public:
            // metadata: MPropertyDescription "Material group variable to set to the selected choice."
            // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:MaterialGroup )"
            // metadata: MPropertyProvidesEditContextString
            CUtlString m_VariableName; // 0x_            
            // metadata: MPropertyFriendlyName "Selection Mode"
            // metadata: MPropertyDescription "Specifies how the material group is to be selected from the authored set of choices"
            source2sdk::smartprops::CSmartPropAttributeChoiceSelectionMode m_SelectionMode; // 0x_            
            // metadata: MPropertyFriendlyName "Choice Index"
            // metadata: MPropertyDescription "Specifies the index of the material group choice to pick"
            // metadata: MPropertySuppressExpr "( m_SelectionMode != SPECIFIC )"
            CSmartPropAttributeInt m_ChoiceSelection; // 0x_            
            // metadata: MPropertyAutoExpandSelf
            // m_MaterialGroupChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::smartprops::MaterialGroupChoice_t> m_MaterialGroupChoices;
            char m_MaterialGroupChoices[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropOperation_SetMateraialGroupChoice because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropOperation_SetMateraialGroupChoice) == 0x_);
    };
};

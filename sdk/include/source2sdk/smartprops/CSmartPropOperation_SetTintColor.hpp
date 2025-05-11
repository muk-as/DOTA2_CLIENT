#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropAttributeApplyColorMode.hpp"
#include "source2sdk/smartprops/CSmartPropAttributeChoiceSelectionMode.hpp"
#include "source2sdk/smartprops/CSmartPropOperation.hpp"
#include "source2sdk/smartprops/ColorChoice_t.hpp"

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
        // Size: 0x128
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Tint Color Choice"
        // static metadata: MPropertyDescription "Set the color tint to one color out of a pre-selected set of colors."
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropOperation_SetTintColor : public source2sdk::smartprops::CSmartPropOperation
        {
        public:
            // metadata: MPropertyFriendlyName "Selection Mode"
            // metadata: MPropertyDescription "Specifies how the color is to be selected from the authored set of choices"
            source2sdk::smartprops::CSmartPropAttributeChoiceSelectionMode m_SelectionMode; // 0x50            
            // metadata: MPropertyFriendlyName "Color Selection"
            // metadata: MPropertyDescription "Specifies the index of the color to pick"
            // metadata: MPropertySuppressExpr "( m_SelectionMode != SPECIFIC )"
            CSmartPropAttributeInt m_ColorSelection; // 0x90            
            // metadata: MPropertyFriendlyName "Application Mode"
            // metadata: MPropertyDescription "Specifies how the selected color should be applied to the current color."
            source2sdk::smartprops::CSmartPropAttributeApplyColorMode m_Mode; // 0xd0            
            // metadata: MPropertyDescription "List of possible colors which may be selected"
            // m_ColorChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::smartprops::ColorChoice_t> m_ColorChoices;
            char m_ColorChoices[0x18]; // 0x110            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropOperation_SetTintColor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropOperation_SetTintColor) == 0x128);
    };
};

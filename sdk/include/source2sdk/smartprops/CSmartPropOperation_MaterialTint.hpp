#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropAttributeColorSelectionMode.hpp"
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
        // Size: 0x168
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Material Color Tint"
        // static metadata: MPropertyDescription "Set a color tint to apply to a specific material."
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropOperation_MaterialTint : public source2sdk::smartprops::CSmartPropOperation
        {
        public:
            // metadata: MPropertyAttributeEditor "SmartPropAttributeEditor(MaterialInSmartProp)"
            // metadata: MPropertyFriendlyName "Material"
            // metadata: MPropertyDescription "Material to which color tint is to be applied."
            CSmartPropAttributeMaterialName m_Material; // 0x50            
            // metadata: MPropertyFriendlyName "Selection Mode"
            // metadata: MPropertyDescription "Specifies how the color is to be specified."
            source2sdk::smartprops::CSmartPropAttributeColorSelectionMode m_SelectionMode; // 0x90            
            // metadata: MPropertyDescription "Color to be applied if this choice is selected."
            // metadata: MPropertySuppressExpr "m_SelectionMode != SPECIFIC_COLOR"
            CSmartPropAttributeColor m_Color; // 0xd0            
            // metadata: MPropertyFriendlyName "Color Gradient"
            // metadata: MPropertyDescription "Defines a color gradient from which a color can be selected based on the selection mode."
            // metadata: MPropertySuppressExpr "m_SelectionMode == SPECIFIC_COLOR"
            CColorGradient m_Gradient; // 0x110            
            // metadata: MPropertyFriendlyName "Color Position"
            // metadata: MPropertyDescription "[ 0, 1 ] Value specifying the location on the gradient to pick the color from."
            // metadata: MPropertySuppressExpr "m_SelectionMode != GRADIENT_LOCATION"
            CSmartPropAttributeFloat m_ColorPosition; // 0x128            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropOperation_MaterialTint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropOperation_MaterialTint) == 0x168);
    };
};

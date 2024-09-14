#pragma once
#include "source2sdk/smartprops/ApplyColorMode_t.hpp"
#include "source2sdk/smartprops/CSmartPropAttributeChoiceSelectionMode.hpp"
#include "source2sdk/smartprops/CSmartPropOperation.hpp"
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
    // Size: 0xf0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Tint Color Gradient"
    // static metadata: MPropertyDescription "Set the color tint to a selection from within the defined gradient."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_RandomColorTintColor : public smartprops::CSmartPropOperation
    {
    public:
        // metadata: MPropertyFriendlyName "Selection Mode"
        // metadata: MPropertyDescription "Specifies how the color is to be selected from the authored set of choices"
        smartprops::CSmartPropAttributeChoiceSelectionMode m_SelectionMode; // 0x50        
        // metadata: MPropertyFriendlyName "Color Position"
        // metadata: MPropertyDescription "[ 0, 1 ] Value specifying the location on the gradient to pick the color from."
        // metadata: MPropertySuppressExpr "( m_SelectionMode != SPECIFIC )"
        CSmartPropAttributeFloat m_ColorPosition; // 0x90        
        // metadata: MPropertyFriendlyName "Application Mode"
        // metadata: MPropertyDescription "Specifies how the selected color should be applied to the current color."
        smartprops::ApplyColorMode_t m_Mode; // 0xd0        
        [[maybe_unused]] std::uint8_t pad_0xd4[0x4]; // 0xd4
        // metadata: MPropertyDescription "Defines a color gradient from which a random color will be piked."
        CColorGradient m_Gradient; // 0xd8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_RandomColorTintColor because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_RandomColorTintColor) == 0xf0);
};

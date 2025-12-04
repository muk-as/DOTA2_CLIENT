#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "source2sdk/smartprops/ApplyColorMode_t.hpp"

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
        // static metadata: MCellForDomain "BaseDomain"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo ""
        // static metadata: MPropertyFriendlyName "Tint Color Gradient"
        // static metadata: MPropertyDescription "Set the color tint to a selection from within the defined gradient."
        #pragma pack(push, 1)
        class CSmartPropPulse_RandomColorTintColor : public source2sdk::pulse_runtime_lib::CPulseCell_BaseFlow
        {
        public:
            // metadata: MPropertyFriendlyName "Application Mode"
            // metadata: MPropertyDescription "Specifies how the selected color should be applied to the current color."
            source2sdk::smartprops::ApplyColorMode_t m_Mode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Defines a color gradient from which a random color will be piked."
            CColorGradient m_Gradient; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropPulse_RandomColorTintColor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropPulse_RandomColorTintColor) == 0x_);
    };
};

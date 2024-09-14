#pragma once
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
    // Standard-layout class: true
    // Size: 0x80
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ColorChoice_t
    {
    public:
        // metadata: MPropertyDescription "Color to be applied if this choice is selected."
        CSmartPropAttributeColor m_Color; // 0x0        
        // metadata: MPropertyDescription "Relative weight of this choice, higher weighted choices are more likely to be selected."
        CSmartPropAttributeFloat m_flWeight; // 0x40        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ColorChoice_t, m_Color) == 0x0);
    static_assert(offsetof(ColorChoice_t, m_flWeight) == 0x40);
    
    static_assert(sizeof(ColorChoice_t) == 0x80);
};

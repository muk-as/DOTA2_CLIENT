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
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x40
    // Has VTable
    // 
    // static metadata: MPropertyCustomEditor "SmartPropAttributeEditor(enum:SmartPropDirection_t)"
    #pragma pack(push, 1)
    class CSmartPropAttributeDirection
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x40];
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CSmartPropAttributeDirection) == 0x40);
};

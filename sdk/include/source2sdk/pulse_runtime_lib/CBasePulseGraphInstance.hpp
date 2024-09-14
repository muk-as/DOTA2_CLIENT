#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0xf8
    // Has VTable
    // 
    // static metadata: MPulseInstanceDomainInfo
    // static metadata: MPulseDomainHiddenInTool
    #pragma pack(push, 1)
    class CBasePulseGraphInstance
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0xf8];
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CBasePulseGraphInstance) == 0xf8);
};

#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: navlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::navlib
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x70
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CNavVolume
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x70];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CNavVolume) == 0x70);
};

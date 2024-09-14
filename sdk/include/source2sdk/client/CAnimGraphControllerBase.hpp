#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x18
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CAnimGraphControllerBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x18];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CAnimGraphControllerBase) == 0x18);
};

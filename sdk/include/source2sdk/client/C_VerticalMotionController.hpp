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
    // Size: 0x10
    // Has VTable
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class C_VerticalMotionController
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(C_VerticalMotionController) == 0x10);
};

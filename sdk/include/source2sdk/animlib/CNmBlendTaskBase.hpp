#pragma once
#include "source2sdk/animlib/CNmTask.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: false
    // Size: 0xc0
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CNmBlendTaskBase : public animlib::CNmTask
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x30[0x90];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CNmBlendTaskBase) == 0xc0);
};

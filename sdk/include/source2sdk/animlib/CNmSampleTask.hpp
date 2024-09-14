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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x40
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CNmSampleTask : public animlib::CNmTask
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x30[0x10];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CNmSampleTask) == 0x40);
};

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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x14
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct hudtextparms_t
    {
    public:
        Color color1; // 0x0        
        Color color2; // 0x4        
        uint8_t effect; // 0x8        
        uint8_t channel; // 0x9        
        [[maybe_unused]] std::uint8_t pad_0x0a[0x2]; // 0xa
        float x; // 0xc        
        float y; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(hudtextparms_t, color1) == 0x0);
    static_assert(offsetof(hudtextparms_t, color2) == 0x4);
    static_assert(offsetof(hudtextparms_t, effect) == 0x8);
    static_assert(offsetof(hudtextparms_t, channel) == 0x9);
    static_assert(offsetof(hudtextparms_t, x) == 0xc);
    static_assert(offsetof(hudtextparms_t, y) == 0x10);
    
    static_assert(sizeof(hudtextparms_t) == 0x14);
};

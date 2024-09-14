#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: vphysics2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::vphysics2
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct constraint_breakableparams_t
    {
    public:
        float strength; // 0x0        
        float forceLimit; // 0x4        
        float torqueLimit; // 0x8        
        float bodyMassScale[2]; // 0xc        
        bool isActive; // 0x14        
        [[maybe_unused]] std::uint8_t pad_0x15[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(constraint_breakableparams_t, strength) == 0x0);
    static_assert(offsetof(constraint_breakableparams_t, forceLimit) == 0x4);
    static_assert(offsetof(constraint_breakableparams_t, torqueLimit) == 0x8);
    static_assert(offsetof(constraint_breakableparams_t, bodyMassScale) == 0xc);
    static_assert(offsetof(constraint_breakableparams_t, isActive) == 0x14);
    
    static_assert(sizeof(constraint_breakableparams_t) == 0x18);
};

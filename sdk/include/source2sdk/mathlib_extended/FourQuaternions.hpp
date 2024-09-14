#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::mathlib_extended
{
    // Registered alignment: unknown
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x40
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class FourQuaternions
    {
    public:
        fltx4 x; // 0x0        
        fltx4 y; // 0x10        
        fltx4 z; // 0x20        
        fltx4 w; // 0x30        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FourQuaternions, x) == 0x0);
    static_assert(offsetof(FourQuaternions, y) == 0x10);
    static_assert(offsetof(FourQuaternions, z) == 0x20);
    static_assert(offsetof(FourQuaternions, w) == 0x30);
    
    static_assert(sizeof(FourQuaternions) == 0x40);
};

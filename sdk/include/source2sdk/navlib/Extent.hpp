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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class Extent
    {
    public:
        Vector lo; // 0x0        
        Vector hi; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(Extent, lo) == 0x0);
    static_assert(offsetof(Extent, hi) == 0xc);
    
    static_assert(sizeof(Extent) == 0x18);
};

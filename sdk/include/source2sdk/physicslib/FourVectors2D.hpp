#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x20
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class FourVectors2D
    {
    public:
        fltx4 x; // 0x0        
        fltx4 y; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FourVectors2D, x) == 0x0);
    static_assert(offsetof(FourVectors2D, y) == 0x10);
    
    static_assert(sizeof(FourVectors2D) == 0x20);
};

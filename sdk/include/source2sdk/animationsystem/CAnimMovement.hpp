#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x2c
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimMovement
    {
    public:
        int32_t endframe; // 0x0        
        int32_t motionflags; // 0x4        
        float v0; // 0x8        
        float v1; // 0xc        
        float angle; // 0x10        
        Vector vector; // 0x14        
        Vector position; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimMovement, endframe) == 0x0);
    static_assert(offsetof(CAnimMovement, motionflags) == 0x4);
    static_assert(offsetof(CAnimMovement, v0) == 0x8);
    static_assert(offsetof(CAnimMovement, v1) == 0xc);
    static_assert(offsetof(CAnimMovement, angle) == 0x10);
    static_assert(offsetof(CAnimMovement, vector) == 0x14);
    static_assert(offsetof(CAnimMovement, position) == 0x20);
    
    static_assert(sizeof(CAnimMovement) == 0x2c);
};

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
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x20
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeHingeLimit_t
    {
    public:
        uint16_t nNode[6]; // 0x0        
        uint32_t nFlags; // 0xc        
        float flWeight4; // 0x10        
        float flWeight5; // 0x14        
        float flAngleCenter; // 0x18        
        float flAngleExtents; // 0x1c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeHingeLimit_t, nNode) == 0x0);
    static_assert(offsetof(FeHingeLimit_t, nFlags) == 0xc);
    static_assert(offsetof(FeHingeLimit_t, flWeight4) == 0x10);
    static_assert(offsetof(FeHingeLimit_t, flWeight5) == 0x14);
    static_assert(offsetof(FeHingeLimit_t, flAngleCenter) == 0x18);
    static_assert(offsetof(FeHingeLimit_t, flAngleExtents) == 0x1c);
    
    static_assert(sizeof(FeHingeLimit_t) == 0x20);
};

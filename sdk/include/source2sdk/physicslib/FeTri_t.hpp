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
    // Size: 0x1c
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeTri_t
    {
    public:
        uint16_t nNode[3]; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x06[0x2]; // 0x6
        float w1; // 0x8        
        float w2; // 0xc        
        float v1x; // 0x10        
        Vector2D v2; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeTri_t, nNode) == 0x0);
    static_assert(offsetof(FeTri_t, w1) == 0x8);
    static_assert(offsetof(FeTri_t, w2) == 0xc);
    static_assert(offsetof(FeTri_t, v1x) == 0x10);
    static_assert(offsetof(FeTri_t, v2) == 0x14);
    
    static_assert(sizeof(FeTri_t) == 0x1c);
};

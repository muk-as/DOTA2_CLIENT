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
    // Size: 0x130
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeSimdQuad_t
    {
    public:
        uint16_t nNode[4][4]; // 0x0        
        fltx4 f4Slack; // 0x20        
        FourVectors vShape[4]; // 0x30        
        fltx4 f4Weights[4]; // 0xf0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeSimdQuad_t, nNode) == 0x0);
    static_assert(offsetof(FeSimdQuad_t, f4Slack) == 0x20);
    static_assert(offsetof(FeSimdQuad_t, vShape) == 0x30);
    static_assert(offsetof(FeSimdQuad_t, f4Weights) == 0xf0);
    
    static_assert(sizeof(FeSimdQuad_t) == 0x130);
};

#pragma once
#include "source2sdk/physicslib/FourVectors2D.hpp"
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
    // Size: 0x80
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeSimdTri_t
    {
    public:
        uint32_t nNode[3][4]; // 0x0        
        fltx4 w1; // 0x30        
        fltx4 w2; // 0x40        
        fltx4 v1x; // 0x50        
        physicslib::FourVectors2D v2; // 0x60        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeSimdTri_t, nNode) == 0x0);
    static_assert(offsetof(FeSimdTri_t, w1) == 0x30);
    static_assert(offsetof(FeSimdTri_t, w2) == 0x40);
    static_assert(offsetof(FeSimdTri_t, v1x) == 0x50);
    static_assert(offsetof(FeSimdTri_t, v2) == 0x60);
    
    static_assert(sizeof(FeSimdTri_t) == 0x80);
};

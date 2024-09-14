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
    // Size: 0x28
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeAxialEdgeBend_t
    {
    public:
        float te; // 0x0        
        float tv; // 0x4        
        float flDist; // 0x8        
        float flWeight[4]; // 0xc        
        uint16_t nNode[6]; // 0x1c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeAxialEdgeBend_t, te) == 0x0);
    static_assert(offsetof(FeAxialEdgeBend_t, tv) == 0x4);
    static_assert(offsetof(FeAxialEdgeBend_t, flDist) == 0x8);
    static_assert(offsetof(FeAxialEdgeBend_t, flWeight) == 0xc);
    static_assert(offsetof(FeAxialEdgeBend_t, nNode) == 0x1c);
    
    static_assert(sizeof(FeAxialEdgeBend_t) == 0x28);
};

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
    // Size: 0x30
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeSimdAnimStrayRadius_t
    {
    public:
        uint16_t nNode[2][4]; // 0x0        
        fltx4 flMaxDist; // 0x10        
        fltx4 flRelaxationFactor; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeSimdAnimStrayRadius_t, nNode) == 0x0);
    static_assert(offsetof(FeSimdAnimStrayRadius_t, flMaxDist) == 0x10);
    static_assert(offsetof(FeSimdAnimStrayRadius_t, flRelaxationFactor) == 0x20);
    
    static_assert(sizeof(FeSimdAnimStrayRadius_t) == 0x30);
};

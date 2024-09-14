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
    // Registered alignment: 0x2
    // Alignment: 0x2
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeWeightedNode_t
    {
    public:
        uint16_t nNode; // 0x0        
        uint16_t nWeight; // 0x2        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeWeightedNode_t, nNode) == 0x0);
    static_assert(offsetof(FeWeightedNode_t, nWeight) == 0x2);
    
    static_assert(sizeof(FeWeightedNode_t) == 0x4);
};

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
    // Size: 0x10
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeEdgeDesc_t
    {
    public:
        uint16_t nEdge[2]; // 0x0        
        uint16_t nSide[2][2]; // 0x4        
        uint16_t nVirtElem[2]; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeEdgeDesc_t, nEdge) == 0x0);
    static_assert(offsetof(FeEdgeDesc_t, nSide) == 0x4);
    static_assert(offsetof(FeEdgeDesc_t, nVirtElem) == 0xc);
    
    static_assert(sizeof(FeEdgeDesc_t) == 0x10);
};

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
    // Size: 0x14
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeBandBendLimit_t
    {
    public:
        float flDistMin; // 0x0        
        float flDistMax; // 0x4        
        uint16_t nNode[6]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeBandBendLimit_t, flDistMin) == 0x0);
    static_assert(offsetof(FeBandBendLimit_t, flDistMax) == 0x4);
    static_assert(offsetof(FeBandBendLimit_t, nNode) == 0x8);
    
    static_assert(sizeof(FeBandBendLimit_t) == 0x14);
};

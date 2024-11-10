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
    // Size: 0x18
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeHingeLimitBuild_t
    {
    public:
        uint16_t nNode[6]; // 0x0        
        uint32_t nFlags; // 0xc        
        float flLimitCW; // 0x10        
        float flLimitCCW; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeHingeLimitBuild_t, nNode) == 0x0);
    static_assert(offsetof(FeHingeLimitBuild_t, nFlags) == 0xc);
    static_assert(offsetof(FeHingeLimitBuild_t, flLimitCW) == 0x10);
    static_assert(offsetof(FeHingeLimitBuild_t, flLimitCCW) == 0x14);
    
    static_assert(sizeof(FeHingeLimitBuild_t) == 0x18);
};

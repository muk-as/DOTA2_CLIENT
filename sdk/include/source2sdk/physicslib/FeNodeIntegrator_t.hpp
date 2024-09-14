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
    // Size: 0x10
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeNodeIntegrator_t
    {
    public:
        float flPointDamping; // 0x0        
        float flAnimationForceAttraction; // 0x4        
        float flAnimationVertexAttraction; // 0x8        
        float flGravity; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeNodeIntegrator_t, flPointDamping) == 0x0);
    static_assert(offsetof(FeNodeIntegrator_t, flAnimationForceAttraction) == 0x4);
    static_assert(offsetof(FeNodeIntegrator_t, flAnimationVertexAttraction) == 0x8);
    static_assert(offsetof(FeNodeIntegrator_t, flGravity) == 0xc);
    
    static_assert(sizeof(FeNodeIntegrator_t) == 0x10);
};

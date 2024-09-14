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
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeSpringIntegrator_t
    {
    public:
        uint16_t nNode[2]; // 0x0        
        float flSpringRestLength; // 0x4        
        float flSpringConstant; // 0x8        
        float flSpringDamping; // 0xc        
        float flNodeWeight0; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeSpringIntegrator_t, nNode) == 0x0);
    static_assert(offsetof(FeSpringIntegrator_t, flSpringRestLength) == 0x4);
    static_assert(offsetof(FeSpringIntegrator_t, flSpringConstant) == 0x8);
    static_assert(offsetof(FeSpringIntegrator_t, flSpringDamping) == 0xc);
    static_assert(offsetof(FeSpringIntegrator_t, flNodeWeight0) == 0x10);
    
    static_assert(sizeof(FeSpringIntegrator_t) == 0x14);
};

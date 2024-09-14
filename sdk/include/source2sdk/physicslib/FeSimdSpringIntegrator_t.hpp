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
    // Size: 0x50
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeSimdSpringIntegrator_t
    {
    public:
        uint16_t nNode[2][4]; // 0x0        
        fltx4 flSpringRestLength; // 0x10        
        fltx4 flSpringConstant; // 0x20        
        fltx4 flSpringDamping; // 0x30        
        fltx4 flNodeWeight0; // 0x40        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeSimdSpringIntegrator_t, nNode) == 0x0);
    static_assert(offsetof(FeSimdSpringIntegrator_t, flSpringRestLength) == 0x10);
    static_assert(offsetof(FeSimdSpringIntegrator_t, flSpringConstant) == 0x20);
    static_assert(offsetof(FeSimdSpringIntegrator_t, flSpringDamping) == 0x30);
    static_assert(offsetof(FeSimdSpringIntegrator_t, flNodeWeight0) == 0x40);
    
    static_assert(sizeof(FeSimdSpringIntegrator_t) == 0x50);
};

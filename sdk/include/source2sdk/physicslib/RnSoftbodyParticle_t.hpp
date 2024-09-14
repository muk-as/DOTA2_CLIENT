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
    // Size: 0x4
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RnSoftbodyParticle_t
    {
    public:
        float m_flMassInv; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RnSoftbodyParticle_t, m_flMassInv) == 0x0);
    
    static_assert(sizeof(RnSoftbodyParticle_t) == 0x4);
};

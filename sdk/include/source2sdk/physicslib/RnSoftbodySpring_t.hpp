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
    // Size: 0x8
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RnSoftbodySpring_t
    {
    public:
        uint16_t m_nParticle[2]; // 0x0        
        float m_flLength; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RnSoftbodySpring_t, m_nParticle) == 0x0);
    static_assert(offsetof(RnSoftbodySpring_t, m_flLength) == 0x4);
    
    static_assert(sizeof(RnSoftbodySpring_t) == 0x8);
};

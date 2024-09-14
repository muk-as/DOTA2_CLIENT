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
    // Size: 0x20
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RnSoftbodyCapsule_t
    {
    public:
        Vector m_vCenter[2]; // 0x0        
        float m_flRadius; // 0x18        
        uint16_t m_nParticle[2]; // 0x1c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RnSoftbodyCapsule_t, m_vCenter) == 0x0);
    static_assert(offsetof(RnSoftbodyCapsule_t, m_flRadius) == 0x18);
    static_assert(offsetof(RnSoftbodyCapsule_t, m_nParticle) == 0x1c);
    
    static_assert(sizeof(RnSoftbodyCapsule_t) == 0x20);
};

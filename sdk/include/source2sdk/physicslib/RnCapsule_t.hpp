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
    // Size: 0x1c
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RnCapsule_t
    {
    public:
        Vector m_vCenter[2]; // 0x0        
        float m_flRadius; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RnCapsule_t, m_vCenter) == 0x0);
    static_assert(offsetof(RnCapsule_t, m_flRadius) == 0x18);
    
    static_assert(sizeof(RnCapsule_t) == 0x1c);
};

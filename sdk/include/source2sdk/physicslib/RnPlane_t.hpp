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
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RnPlane_t
    {
    public:
        Vector m_vNormal; // 0x0        
        float m_flOffset; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RnPlane_t, m_vNormal) == 0x0);
    static_assert(offsetof(RnPlane_t, m_flOffset) == 0xc);
    
    static_assert(sizeof(RnPlane_t) == 0x10);
};

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
    // Size: 0x20
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RnNode_t
    {
    public:
        Vector m_vMin; // 0x0        
        uint32_t m_nChildren; // 0xc        
        Vector m_vMax; // 0x10        
        uint32_t m_nTriangleOffset; // 0x1c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RnNode_t, m_vMin) == 0x0);
    static_assert(offsetof(RnNode_t, m_nChildren) == 0xc);
    static_assert(offsetof(RnNode_t, m_vMax) == 0x10);
    static_assert(offsetof(RnNode_t, m_nTriangleOffset) == 0x1c);
    
    static_assert(sizeof(RnNode_t) == 0x20);
};

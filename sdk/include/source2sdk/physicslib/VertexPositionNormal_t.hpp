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
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct VertexPositionNormal_t
    {
    public:
        Vector m_vPosition; // 0x0        
        Vector m_vNormal; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VertexPositionNormal_t, m_vPosition) == 0x0);
    static_assert(offsetof(VertexPositionNormal_t, m_vNormal) == 0xc);
    
    static_assert(sizeof(VertexPositionNormal_t) == 0x18);
};

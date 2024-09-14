#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::mathlib_extended
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct PackedAABB_t
    {
    public:
        uint32_t m_nPackedMin; // 0x0        
        uint32_t m_nPackedMax; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PackedAABB_t, m_nPackedMin) == 0x0);
    static_assert(offsetof(PackedAABB_t, m_nPackedMax) == 0x4);
    
    static_assert(sizeof(PackedAABB_t) == 0x8);
};

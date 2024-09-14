#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0xa
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct HullFlags_t
    {
    public:
        bool m_bHull_Human; // 0x0        
        bool m_bHull_SmallCentered; // 0x1        
        bool m_bHull_WideHuman; // 0x2        
        bool m_bHull_Tiny; // 0x3        
        bool m_bHull_Medium; // 0x4        
        bool m_bHull_TinyCentered; // 0x5        
        bool m_bHull_Large; // 0x6        
        bool m_bHull_LargeCentered; // 0x7        
        bool m_bHull_MediumTall; // 0x8        
        bool m_bHull_Small; // 0x9        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(HullFlags_t, m_bHull_Human) == 0x0);
    static_assert(offsetof(HullFlags_t, m_bHull_SmallCentered) == 0x1);
    static_assert(offsetof(HullFlags_t, m_bHull_WideHuman) == 0x2);
    static_assert(offsetof(HullFlags_t, m_bHull_Tiny) == 0x3);
    static_assert(offsetof(HullFlags_t, m_bHull_Medium) == 0x4);
    static_assert(offsetof(HullFlags_t, m_bHull_TinyCentered) == 0x5);
    static_assert(offsetof(HullFlags_t, m_bHull_Large) == 0x6);
    static_assert(offsetof(HullFlags_t, m_bHull_LargeCentered) == 0x7);
    static_assert(offsetof(HullFlags_t, m_bHull_MediumTall) == 0x8);
    static_assert(offsetof(HullFlags_t, m_bHull_Small) == 0x9);
    
    static_assert(sizeof(HullFlags_t) == 0xa);
};

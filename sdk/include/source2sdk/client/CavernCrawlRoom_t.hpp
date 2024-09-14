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
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct CavernCrawlRoom_t
    {
    public:
        Vector2D m_vecPosition; // 0x0        
        char* m_pCSSClass; // 0x8        
        float m_flRoomRadius; // 0x10        
        bool m_bAlwaysVisible; // 0x14        
        bool m_bStartingRoom; // 0x15        
        bool m_bFinalTreasure; // 0x16        
        [[maybe_unused]] std::uint8_t pad_0x17[0x1];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CavernCrawlRoom_t, m_vecPosition) == 0x0);
    static_assert(offsetof(CavernCrawlRoom_t, m_pCSSClass) == 0x8);
    static_assert(offsetof(CavernCrawlRoom_t, m_flRoomRadius) == 0x10);
    static_assert(offsetof(CavernCrawlRoom_t, m_bAlwaysVisible) == 0x14);
    static_assert(offsetof(CavernCrawlRoom_t, m_bStartingRoom) == 0x15);
    static_assert(offsetof(CavernCrawlRoom_t, m_bFinalTreasure) == 0x16);
    
    static_assert(sizeof(CavernCrawlRoom_t) == 0x18);
};

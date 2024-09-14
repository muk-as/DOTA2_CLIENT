#pragma once
#include "source2sdk/client/CavernCrawlRoomID_t.hpp"
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
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct CavernCrawlPath_t
    {
    public:
        client::CavernCrawlRoomID_t m_nStartingRoomID; // 0x0        
        client::CavernCrawlRoomID_t m_nEndingRoomID; // 0x1        
        [[maybe_unused]] std::uint8_t pad_0x02[0x6]; // 0x2
        char* m_pCSSClass; // 0x8        
        bool m_bCannotBeSwapped; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x11[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CavernCrawlPath_t, m_nStartingRoomID) == 0x0);
    static_assert(offsetof(CavernCrawlPath_t, m_nEndingRoomID) == 0x1);
    static_assert(offsetof(CavernCrawlPath_t, m_pCSSClass) == 0x8);
    static_assert(offsetof(CavernCrawlPath_t, m_bCannotBeSwapped) == 0x10);
    
    static_assert(sizeof(CavernCrawlPath_t) == 0x18);
};

#pragma once
#include "source2sdk/client/CavernCrawlPathID_t.hpp"
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
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x2
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct DOTACavernCrawlMapResult_t
    {
    public:
        client::CavernCrawlPathID_t m_nCompletedPathID; // 0x0        
        client::CavernCrawlRoomID_t m_nClaimedRoomID; // 0x1        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DOTACavernCrawlMapResult_t, m_nCompletedPathID) == 0x0);
    static_assert(offsetof(DOTACavernCrawlMapResult_t, m_nClaimedRoomID) == 0x1);
    
    static_assert(sizeof(DOTACavernCrawlMapResult_t) == 0x2);
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CavernCrawlRoomID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CavernCrawlPath_t
        {
        public:
            source2sdk::client::CavernCrawlRoomID_t m_nStartingRoomID; // 0x_            
            source2sdk::client::CavernCrawlRoomID_t m_nEndingRoomID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            char* m_pCSSClass; // 0x_            
            bool m_bCannotBeSwapped; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CavernCrawlPath_t, m_nStartingRoomID) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlPath_t, m_nEndingRoomID) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlPath_t, m_pCSSClass) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlPath_t, m_bCannotBeSwapped) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CavernCrawlPath_t) == 0x_);
    };
};

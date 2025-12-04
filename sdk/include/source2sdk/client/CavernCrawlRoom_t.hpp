#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CavernCrawlRoom_t
        {
        public:
            Vector2D m_vecPosition; // 0x_            
            char* m_pCSSClass; // 0x_            
            float m_flRoomRadius; // 0x_            
            bool m_bAlwaysVisible; // 0x_            
            bool m_bStartingRoom; // 0x_            
            bool m_bFinalTreasure; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CavernCrawlRoom_t, m_vecPosition) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlRoom_t, m_pCSSClass) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlRoom_t, m_flRoomRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlRoom_t, m_bAlwaysVisible) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlRoom_t, m_bStartingRoom) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlRoom_t, m_bFinalTreasure) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CavernCrawlRoom_t) == 0x_);
    };
};

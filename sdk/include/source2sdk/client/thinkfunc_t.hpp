#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTick_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct thinkfunc_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            HSCRIPT m_hFn; // 0x8            
            CUtlStringToken m_nContext; // 0x10            
            source2sdk::entity2::GameTick_t m_nNextThinkTick; // 0x14            
            source2sdk::entity2::GameTick_t m_nLastThinkTick; // 0x18            
            uint8_t _pad001c[0x4];
            
            // Datamap fields:
            // void m_think; // 0x0
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::thinkfunc_t, m_hFn) == 0x8);
        static_assert(offsetof(source2sdk::client::thinkfunc_t, m_nContext) == 0x10);
        static_assert(offsetof(source2sdk::client::thinkfunc_t, m_nNextThinkTick) == 0x14);
        static_assert(offsetof(source2sdk::client::thinkfunc_t, m_nLastThinkTick) == 0x18);
        
        static_assert(sizeof(source2sdk::client::thinkfunc_t) == 0x20);
    };
};

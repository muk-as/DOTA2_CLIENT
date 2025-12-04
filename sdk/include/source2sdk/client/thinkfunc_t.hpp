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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct thinkfunc_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            HSCRIPT m_hFn; // 0x_            
            CUtlStringToken m_nContext; // 0x_            
            source2sdk::entity2::GameTick_t m_nNextThinkTick; // 0x_            
            source2sdk::entity2::GameTick_t m_nLastThinkTick; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_think; // 0x_
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::thinkfunc_t, m_hFn) == 0x_);
        static_assert(offsetof(source2sdk::client::thinkfunc_t, m_nContext) == 0x_);
        static_assert(offsetof(source2sdk::client::thinkfunc_t, m_nNextThinkTick) == 0x_);
        static_assert(offsetof(source2sdk::client::thinkfunc_t, m_nLastThinkTick) == 0x_);
        
        static_assert(sizeof(source2sdk::client::thinkfunc_t) == 0x_);
    };
};

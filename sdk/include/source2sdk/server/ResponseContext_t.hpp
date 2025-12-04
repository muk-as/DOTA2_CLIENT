#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct ResponseContext_t
        {
        public:
            CUtlSymbolLarge m_iszName; // 0x_            
            CUtlSymbolLarge m_iszValue; // 0x_            
            source2sdk::entity2::GameTime_t m_fExpirationTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::ResponseContext_t, m_iszName) == 0x_);
        static_assert(offsetof(source2sdk::server::ResponseContext_t, m_iszValue) == 0x_);
        static_assert(offsetof(source2sdk::server::ResponseContext_t, m_fExpirationTime) == 0x_);
        
        static_assert(sizeof(source2sdk::server::ResponseContext_t) == 0x_);
    };
};

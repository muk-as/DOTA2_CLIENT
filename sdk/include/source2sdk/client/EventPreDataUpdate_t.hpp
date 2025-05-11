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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct EventPreDataUpdate_t
        {
        public:
            std::int32_t m_nCount; // 0x0            
            uint8_t _pad0004[0xc];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::EventPreDataUpdate_t, m_nCount) == 0x0);
        
        static_assert(sizeof(source2sdk::client::EventPreDataUpdate_t) == 0x10);
    };
};

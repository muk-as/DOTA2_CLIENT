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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        // Has VTable
        #pragma pack(push, 1)
        class CCopyRecipientFilter
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            std::int32_t m_Flags; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            // m_Recipients has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CPlayerSlot> m_Recipients;
            char m_Recipients[0x18]; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCopyRecipientFilter, m_Flags) == 0x8);
        static_assert(offsetof(source2sdk::client::CCopyRecipientFilter, m_Recipients) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CCopyRecipientFilter) == 0x28);
    };
};

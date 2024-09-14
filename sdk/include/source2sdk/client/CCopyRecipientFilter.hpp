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
    // Size: 0x28
    // Has VTable
    #pragma pack(push, 1)
    class CCopyRecipientFilter
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        int32_t m_Flags; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // m_Recipients has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CPlayerSlot> m_Recipients;
        char m_Recipients[0x18]; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCopyRecipientFilter, m_Flags) == 0x8);
    static_assert(offsetof(CCopyRecipientFilter, m_Recipients) == 0x10);
    
    static_assert(sizeof(CCopyRecipientFilter) == 0x28);
};

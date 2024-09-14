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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x28
    // Has VTable
    #pragma pack(push, 1)
    class CResponseCriteriaSet
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x20]; // 0x0
        int32_t m_nNumPrefixedContexts; // 0x20        
        bool m_bOverrideOnAppend; // 0x24        
        [[maybe_unused]] std::uint8_t pad_0x25[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CResponseCriteriaSet, m_nNumPrefixedContexts) == 0x20);
    static_assert(offsetof(CResponseCriteriaSet, m_bOverrideOnAppend) == 0x24);
    
    static_assert(sizeof(CResponseCriteriaSet) == 0x28);
};

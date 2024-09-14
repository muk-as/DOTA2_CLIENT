#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct ResponseContext_t
    {
    public:
        CUtlSymbolLarge m_iszName; // 0x0        
        CUtlSymbolLarge m_iszValue; // 0x8        
        entity2::GameTime_t m_fExpirationTime; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ResponseContext_t, m_iszName) == 0x0);
    static_assert(offsetof(ResponseContext_t, m_iszValue) == 0x8);
    static_assert(offsetof(ResponseContext_t, m_fExpirationTime) == 0x10);
    
    static_assert(sizeof(ResponseContext_t) == 0x18);
};

#pragma once
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
    #pragma pack(push, 1)
    class sPendingTreeModelChange
    {
    public:
        int32_t nTeam; // 0x0        
        int32_t nIndex; // 0x4        
        CUtlString strModel; // 0x8        
        int32_t nChangeToken; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(sPendingTreeModelChange, nTeam) == 0x0);
    static_assert(offsetof(sPendingTreeModelChange, nIndex) == 0x4);
    static_assert(offsetof(sPendingTreeModelChange, strModel) == 0x8);
    static_assert(offsetof(sPendingTreeModelChange, nChangeToken) == 0x10);
    
    static_assert(sizeof(sPendingTreeModelChange) == 0x18);
};

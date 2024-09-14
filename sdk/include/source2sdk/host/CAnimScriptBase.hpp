#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: host
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::host
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x10
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CAnimScriptBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        bool m_bIsValid; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x09[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimScriptBase, m_bIsValid) == 0x8);
    
    static_assert(sizeof(CAnimScriptBase) == 0x10);
};

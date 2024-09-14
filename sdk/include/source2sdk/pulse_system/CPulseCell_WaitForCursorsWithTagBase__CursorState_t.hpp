#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_system
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x30
    #pragma pack(push, 1)
    struct CPulseCell_WaitForCursorsWithTagBase__CursorState_t
    {
    public:
        CUtlSymbolLarge m_TagName; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x08[0x28];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulseCell_WaitForCursorsWithTagBase__CursorState_t, m_TagName) == 0x0);
    
    static_assert(sizeof(CPulseCell_WaitForCursorsWithTagBase__CursorState_t) == 0x30);
};

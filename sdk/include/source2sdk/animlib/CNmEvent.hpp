#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmEvent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        float m_flStartTimeSeconds; // 0x8        
        float m_flDurationSeconds; // 0xc        
        CGlobalSymbol m_syncID; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmEvent, m_flStartTimeSeconds) == 0x8);
    static_assert(offsetof(CNmEvent, m_flDurationSeconds) == 0xc);
    static_assert(offsetof(CNmEvent, m_syncID) == 0x10);
    
    static_assert(sizeof(CNmEvent) == 0x18);
};

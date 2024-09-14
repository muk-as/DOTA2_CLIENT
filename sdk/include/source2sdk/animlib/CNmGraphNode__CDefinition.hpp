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
    // Alignment: 0x2
    // Standard-layout class: true
    // Size: 0x10
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmGraphNode__CDefinition
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        int16_t m_nNodeIdx; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0a[0x6];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmGraphNode__CDefinition, m_nNodeIdx) == 0x8);
    
    static_assert(sizeof(CNmGraphNode__CDefinition) == 0x10);
};

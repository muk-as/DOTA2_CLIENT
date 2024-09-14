#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimMotorUpdaterBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        CUtlString m_name; // 0x10        
        bool m_bDefault; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x19[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimMotorUpdaterBase, m_name) == 0x10);
    static_assert(offsetof(CAnimMotorUpdaterBase, m_bDefault) == 0x18);
    
    static_assert(sizeof(CAnimMotorUpdaterBase) == 0x20);
};

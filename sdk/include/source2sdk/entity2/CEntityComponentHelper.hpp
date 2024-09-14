#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
    struct EntComponentInfo_t;
};

namespace source2sdk::entity2
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    // Has VTable
    // Is Abstract
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CEntityComponentHelper
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        uint32_t m_flags; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        entity2::EntComponentInfo_t* m_pInfo; // 0x10        
        int32_t m_nPriority; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4]; // 0x1c
        entity2::CEntityComponentHelper* m_pNext; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CEntityComponentHelper, m_flags) == 0x8);
    static_assert(offsetof(CEntityComponentHelper, m_pInfo) == 0x10);
    static_assert(offsetof(CEntityComponentHelper, m_nPriority) == 0x18);
    static_assert(offsetof(CEntityComponentHelper, m_pNext) == 0x20);
    
    static_assert(sizeof(CEntityComponentHelper) == 0x28);
};

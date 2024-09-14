#pragma once
#include "source2sdk/entity2/CVariantDefaultAllocator.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    // Has VTable
    #pragma pack(push, 1)
    class CEntityIOOutput
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x18]; // 0x0
        // m_Value has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CVariantBase<entity2::CVariantDefaultAllocator> m_Value;
        char m_Value[0x10]; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CEntityIOOutput, m_Value) == 0x18);
    
    static_assert(sizeof(CEntityIOOutput) == 0x28);
};

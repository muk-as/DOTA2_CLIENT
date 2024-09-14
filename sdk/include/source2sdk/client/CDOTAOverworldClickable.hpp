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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CDOTAOverworldClickable
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        CUtlString m_sSnippet; // 0x8        
        Vector2D m_vPos; // 0x10        
        bool m_bBackground; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x19[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAOverworldClickable, m_sSnippet) == 0x8);
    static_assert(offsetof(CDOTAOverworldClickable, m_vPos) == 0x10);
    static_assert(offsetof(CDOTAOverworldClickable, m_bBackground) == 0x18);
    
    static_assert(sizeof(CDOTAOverworldClickable) == 0x20);
};

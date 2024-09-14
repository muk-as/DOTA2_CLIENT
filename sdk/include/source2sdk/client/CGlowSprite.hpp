#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    #pragma pack(push, 1)
    class CGlowSprite
    {
    public:
        Vector m_vColor; // 0x0        
        float m_flHorzSize; // 0xc        
        float m_flVertSize; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4]; // 0x14
        // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
        char m_hMaterial[0x8]; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CGlowSprite, m_vColor) == 0x0);
    static_assert(offsetof(CGlowSprite, m_flHorzSize) == 0xc);
    static_assert(offsetof(CGlowSprite, m_flVertSize) == 0x10);
    static_assert(offsetof(CGlowSprite, m_hMaterial) == 0x18);
    
    static_assert(sizeof(CGlowSprite) == 0x20);
};

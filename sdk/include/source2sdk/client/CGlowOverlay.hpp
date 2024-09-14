#pragma once
#include "source2sdk/client/CGlowSprite.hpp"
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
    // Size: 0xd0
    // Has VTable
    #pragma pack(push, 1)
    class CGlowOverlay
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        Vector m_vPos; // 0x8        
        bool m_bDirectional; // 0x14        
        [[maybe_unused]] std::uint8_t pad_0x15[0x3]; // 0x15
        Vector m_vDirection; // 0x18        
        bool m_bInSky; // 0x24        
        [[maybe_unused]] std::uint8_t pad_0x25[0x3]; // 0x25
        float m_skyObstructionScale; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4]; // 0x2c
        client::CGlowSprite m_Sprites[4]; // 0x30        
        int32_t m_nSprites; // 0xb0        
        float m_flProxyRadius; // 0xb4        
        float m_flHDRColorScale; // 0xb8        
        float m_flGlowObstructionScale; // 0xbc        
        bool m_bCacheGlowObstruction; // 0xc0        
        bool m_bCacheSkyObstruction; // 0xc1        
        int16_t m_bActivated; // 0xc2        
        uint16_t m_ListIndex; // 0xc4        
        [[maybe_unused]] std::uint8_t pad_0xc6[0x2]; // 0xc6
        int32_t m_queryHandle; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xcc[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CGlowOverlay, m_vPos) == 0x8);
    static_assert(offsetof(CGlowOverlay, m_bDirectional) == 0x14);
    static_assert(offsetof(CGlowOverlay, m_vDirection) == 0x18);
    static_assert(offsetof(CGlowOverlay, m_bInSky) == 0x24);
    static_assert(offsetof(CGlowOverlay, m_skyObstructionScale) == 0x28);
    static_assert(offsetof(CGlowOverlay, m_Sprites) == 0x30);
    static_assert(offsetof(CGlowOverlay, m_nSprites) == 0xb0);
    static_assert(offsetof(CGlowOverlay, m_flProxyRadius) == 0xb4);
    static_assert(offsetof(CGlowOverlay, m_flHDRColorScale) == 0xb8);
    static_assert(offsetof(CGlowOverlay, m_flGlowObstructionScale) == 0xbc);
    static_assert(offsetof(CGlowOverlay, m_bCacheGlowObstruction) == 0xc0);
    static_assert(offsetof(CGlowOverlay, m_bCacheSkyObstruction) == 0xc1);
    static_assert(offsetof(CGlowOverlay, m_bActivated) == 0xc2);
    static_assert(offsetof(CGlowOverlay, m_ListIndex) == 0xc4);
    static_assert(offsetof(CGlowOverlay, m_queryHandle) == 0xc8);
    
    static_assert(sizeof(CGlowOverlay) == 0xd0);
};

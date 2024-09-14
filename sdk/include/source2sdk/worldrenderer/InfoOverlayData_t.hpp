#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x70
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct InfoOverlayData_t
    {
    public:
        matrix3x4_t m_transform; // 0x0        
        float m_flWidth; // 0x30        
        float m_flHeight; // 0x34        
        float m_flDepth; // 0x38        
        Vector2D m_vUVStart; // 0x3c        
        Vector2D m_vUVEnd; // 0x44        
        [[maybe_unused]] std::uint8_t pad_0x4c[0x4]; // 0x4c
        // m_pMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_pMaterial;
        char m_pMaterial[0x8]; // 0x50        
        int32_t m_nRenderOrder; // 0x58        
        Vector4D m_vTintColor; // 0x5c        
        int32_t m_nSequenceOverride; // 0x6c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(InfoOverlayData_t, m_transform) == 0x0);
    static_assert(offsetof(InfoOverlayData_t, m_flWidth) == 0x30);
    static_assert(offsetof(InfoOverlayData_t, m_flHeight) == 0x34);
    static_assert(offsetof(InfoOverlayData_t, m_flDepth) == 0x38);
    static_assert(offsetof(InfoOverlayData_t, m_vUVStart) == 0x3c);
    static_assert(offsetof(InfoOverlayData_t, m_vUVEnd) == 0x44);
    static_assert(offsetof(InfoOverlayData_t, m_pMaterial) == 0x50);
    static_assert(offsetof(InfoOverlayData_t, m_nRenderOrder) == 0x58);
    static_assert(offsetof(InfoOverlayData_t, m_vTintColor) == 0x5c);
    static_assert(offsetof(InfoOverlayData_t, m_nSequenceOverride) == 0x6c);
    
    static_assert(sizeof(InfoOverlayData_t) == 0x70);
};

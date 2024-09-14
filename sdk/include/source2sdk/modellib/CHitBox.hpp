#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x70
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CHitBox
    {
    public:
        CUtlString m_name; // 0x0        
        CUtlString m_sSurfaceProperty; // 0x8        
        CUtlString m_sBoneName; // 0x10        
        Vector m_vMinBounds; // 0x18        
        Vector m_vMaxBounds; // 0x24        
        float m_flShapeRadius; // 0x30        
        uint32_t m_nBoneNameHash; // 0x34        
        int32_t m_nGroupId; // 0x38        
        uint8_t m_nShapeType; // 0x3c        
        bool m_bTranslationOnly; // 0x3d        
        [[maybe_unused]] std::uint8_t pad_0x3e[0x2]; // 0x3e
        uint32_t m_CRC; // 0x40        
        Color m_cRenderColor; // 0x44        
        uint16_t m_nHitBoxIndex; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x4a[0x26];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CHitBox, m_name) == 0x0);
    static_assert(offsetof(CHitBox, m_sSurfaceProperty) == 0x8);
    static_assert(offsetof(CHitBox, m_sBoneName) == 0x10);
    static_assert(offsetof(CHitBox, m_vMinBounds) == 0x18);
    static_assert(offsetof(CHitBox, m_vMaxBounds) == 0x24);
    static_assert(offsetof(CHitBox, m_flShapeRadius) == 0x30);
    static_assert(offsetof(CHitBox, m_nBoneNameHash) == 0x34);
    static_assert(offsetof(CHitBox, m_nGroupId) == 0x38);
    static_assert(offsetof(CHitBox, m_nShapeType) == 0x3c);
    static_assert(offsetof(CHitBox, m_bTranslationOnly) == 0x3d);
    static_assert(offsetof(CHitBox, m_CRC) == 0x40);
    static_assert(offsetof(CHitBox, m_cRenderColor) == 0x44);
    static_assert(offsetof(CHitBox, m_nHitBoxIndex) == 0x48);
    
    static_assert(sizeof(CHitBox) == 0x70);
};

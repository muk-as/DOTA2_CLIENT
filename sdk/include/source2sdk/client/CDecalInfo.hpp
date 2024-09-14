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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xc0
    #pragma pack(push, 1)
    class CDecalInfo
    {
    public:
        float m_flAnimationScale; // 0x0        
        float m_flAnimationLifeSpan; // 0x4        
        float m_flPlaceTime; // 0x8        
        float m_flFadeStartTime; // 0xc        
        float m_flFadeDuration; // 0x10        
        int32_t m_nVBSlot; // 0x14        
        int32_t m_nBoneIndex; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0xc]; // 0x1c
        client::CDecalInfo* m_pNext; // 0x28        
        client::CDecalInfo* m_pPrev; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x38[0x80]; // 0x38
        int32_t m_nDecalMaterialIndex; // 0xb8        
        [[maybe_unused]] std::uint8_t pad_0xbc[0x4];
        
        // Datamap fields:
        // void m_decalEvent; // 0x38
        // void m_hProjectedDecal; // 0x20
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDecalInfo, m_flAnimationScale) == 0x0);
    static_assert(offsetof(CDecalInfo, m_flAnimationLifeSpan) == 0x4);
    static_assert(offsetof(CDecalInfo, m_flPlaceTime) == 0x8);
    static_assert(offsetof(CDecalInfo, m_flFadeStartTime) == 0xc);
    static_assert(offsetof(CDecalInfo, m_flFadeDuration) == 0x10);
    static_assert(offsetof(CDecalInfo, m_nVBSlot) == 0x14);
    static_assert(offsetof(CDecalInfo, m_nBoneIndex) == 0x18);
    static_assert(offsetof(CDecalInfo, m_pNext) == 0x28);
    static_assert(offsetof(CDecalInfo, m_pPrev) == 0x30);
    static_assert(offsetof(CDecalInfo, m_nDecalMaterialIndex) == 0xb8);
    
    static_assert(sizeof(CDecalInfo) == 0xc0);
};

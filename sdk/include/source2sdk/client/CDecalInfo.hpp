#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
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
            std::int32_t m_nVBSlot; // 0x14            
            std::int32_t m_nBoneIndex; // 0x18            
            uint8_t _pad001c[0xc]; // 0x1c
            source2sdk::client::CDecalInfo* m_pNext; // 0x28            
            source2sdk::client::CDecalInfo* m_pPrev; // 0x30            
            uint8_t _pad0038[0x80]; // 0x38
            std::int32_t m_nDecalMaterialIndex; // 0xb8            
            uint8_t _pad00bc[0x4];
            
            // Datamap fields:
            // void m_decalEvent; // 0x38
            // void m_hProjectedDecal; // 0x20
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDecalInfo, m_flAnimationScale) == 0x0);
        static_assert(offsetof(source2sdk::client::CDecalInfo, m_flAnimationLifeSpan) == 0x4);
        static_assert(offsetof(source2sdk::client::CDecalInfo, m_flPlaceTime) == 0x8);
        static_assert(offsetof(source2sdk::client::CDecalInfo, m_flFadeStartTime) == 0xc);
        static_assert(offsetof(source2sdk::client::CDecalInfo, m_flFadeDuration) == 0x10);
        static_assert(offsetof(source2sdk::client::CDecalInfo, m_nVBSlot) == 0x14);
        static_assert(offsetof(source2sdk::client::CDecalInfo, m_nBoneIndex) == 0x18);
        static_assert(offsetof(source2sdk::client::CDecalInfo, m_pNext) == 0x28);
        static_assert(offsetof(source2sdk::client::CDecalInfo, m_pPrev) == 0x30);
        static_assert(offsetof(source2sdk::client::CDecalInfo, m_nDecalMaterialIndex) == 0xb8);
        
        static_assert(sizeof(source2sdk::client::CDecalInfo) == 0xc0);
    };
};

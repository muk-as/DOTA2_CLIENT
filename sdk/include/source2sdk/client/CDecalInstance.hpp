#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DecalFlags_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x90
        #pragma pack(push, 1)
        class CDecalInstance
        {
        public:
            CGlobalSymbol m_sDecalGroup; // 0x0            
            // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
            char m_hMaterial[0x8]; // 0x8            
            CUtlStringToken m_sSequenceName; // 0x10            
            // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEntity;
            char m_hEntity[0x4]; // 0x14            
            std::int32_t m_nBoneIndex; // 0x18            
            Vector m_vPositionLS; // 0x1c            
            Vector m_vNormalLS; // 0x28            
            Vector m_vSAxisLS; // 0x34            
            source2sdk::client::DecalFlags_t m_nFlags; // 0x40            
            Color m_Color; // 0x44            
            float m_flWidth; // 0x48            
            float m_flHeight; // 0x4c            
            float m_flDepth; // 0x50            
            float m_flAnimationScale; // 0x54            
            float m_flAnimationLifeSpan; // 0x58            
            source2sdk::entity2::GameTime_t m_flPlaceTime; // 0x5c            
            float m_flFadeStartTime; // 0x60            
            float m_flFadeDuration; // 0x64            
            float m_flLightingOriginOffset; // 0x68            
            std::int32_t m_nVBSlot; // 0x6c            
            uint8_t _pad0070[0x8]; // 0x70
            float m_flBoundingRadiusSqr; // 0x78            
            std::int16_t m_nSequenceIndex; // 0x7c            
            bool m_bIsAdjacent; // 0x7e            
            bool m_bDoDecalLightmapping; // 0x7f            
            source2sdk::client::CDecalInstance* m_pNext; // 0x80            
            source2sdk::client::CDecalInstance* m_pPrev; // 0x88            
            
            // Datamap fields:
            // void m_hProjectedDecal; // 0x70
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_sDecalGroup) == 0x0);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_hMaterial) == 0x8);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_sSequenceName) == 0x10);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_hEntity) == 0x14);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_nBoneIndex) == 0x18);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_vPositionLS) == 0x1c);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_vNormalLS) == 0x28);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_vSAxisLS) == 0x34);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_nFlags) == 0x40);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_Color) == 0x44);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flWidth) == 0x48);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flHeight) == 0x4c);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flDepth) == 0x50);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flAnimationScale) == 0x54);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flAnimationLifeSpan) == 0x58);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flPlaceTime) == 0x5c);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flFadeStartTime) == 0x60);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flFadeDuration) == 0x64);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flLightingOriginOffset) == 0x68);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_nVBSlot) == 0x6c);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flBoundingRadiusSqr) == 0x78);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_nSequenceIndex) == 0x7c);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_bIsAdjacent) == 0x7e);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_bDoDecalLightmapping) == 0x7f);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_pNext) == 0x80);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_pPrev) == 0x88);
        
        static_assert(sizeof(source2sdk::client::CDecalInstance) == 0x90);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DecalFlags_t.hpp"
#include "source2sdk/client/DecalMode_t.hpp"
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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        class CDecalInstance
        {
        public:
            CGlobalSymbol m_sDecalGroup; // 0x_            
            // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
            char m_hMaterial[0x_]; // 0x_            
            CUtlStringToken m_sSequenceName; // 0x_            
            // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEntity;
            char m_hEntity[0x_]; // 0x_            
            std::int32_t m_nBoneIndex; // 0x_            
            std::int32_t m_nTriangleIndex; // 0x_            
            Vector m_vPositionLS; // 0x_            
            Vector m_vNormalLS; // 0x_            
            Vector m_vSAxisLS; // 0x_            
            source2sdk::client::DecalFlags_t m_nFlags; // 0x_            
            Color m_Color; // 0x_            
            float m_flWidth; // 0x_            
            float m_flHeight; // 0x_            
            float m_flDepth; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CTransformWS m_transform; // 0x_            
            float m_flAnimationScale; // 0x_            
            float m_flAnimationStartTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flPlaceTime; // 0x_            
            float m_flFadeStartTime; // 0x_            
            float m_flFadeDuration; // 0x_            
            float m_flLightingOriginOffset; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flBoundingRadiusSqr; // 0x_            
            std::int16_t m_nSequenceIndex; // 0x_            
            bool m_bIsAdjacent; // 0x_            
            bool m_bDoDecalLightmapping; // 0x_            
            source2sdk::client::DecalMode_t m_nSkinnedModelMode; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_hProjectedDecal; // 0x_
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_sDecalGroup) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_hMaterial) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_sSequenceName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_hEntity) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_nBoneIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_nTriangleIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_vPositionLS) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_vNormalLS) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_vSAxisLS) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_Color) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flWidth) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flHeight) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flDepth) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_transform) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flAnimationScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flAnimationStartTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flPlaceTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flFadeStartTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flFadeDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flLightingOriginOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flBoundingRadiusSqr) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_nSequenceIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_bIsAdjacent) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_bDoDecalLightmapping) == 0x_);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_nSkinnedModelMode) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDecalInstance) == 0x_);
    };
};

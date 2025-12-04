#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ArtyGraphicID_t.hpp"
#include "source2sdk/client/EArtyGraphicsType.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        struct ArtyGraphicInfo_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ArtyGraphicID_t m_unID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_szSnippet; // 0x_            
            CUtlString m_szUnit; // 0x_            
            // m_szModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_szModel;
            char m_szModel[0x_]; // 0x_            
            // m_szParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szParticle;
            char m_szParticle[0x_]; // 0x_            
            source2sdk::client::EArtyGraphicsType m_eType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            QAngle m_vAngles; // 0x_            
            Vector m_vPosition; // 0x_            
            Vector m_vCameraOffset; // 0x_            
            std::int32_t m_nWidth; // 0x_            
            std::int32_t m_nHeight; // 0x_            
            bool m_bPlayEndcap; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flDefaultScale; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ArtyGraphicInfo_t, m_unID) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGraphicInfo_t, m_szSnippet) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGraphicInfo_t, m_szUnit) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGraphicInfo_t, m_szModel) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGraphicInfo_t, m_szParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGraphicInfo_t, m_eType) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGraphicInfo_t, m_vAngles) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGraphicInfo_t, m_vPosition) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGraphicInfo_t, m_vCameraOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGraphicInfo_t, m_nWidth) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGraphicInfo_t, m_nHeight) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGraphicInfo_t, m_bPlayEndcap) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGraphicInfo_t, m_flDefaultScale) == 0x_);
        
        static_assert(sizeof(source2sdk::client::ArtyGraphicInfo_t) == 0x_);
    };
};

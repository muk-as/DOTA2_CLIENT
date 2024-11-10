#pragma once
#include "source2sdk/client/ArtyGraphicID_t.hpp"
#include "source2sdk/client/EArtyGraphicsType.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x218
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    struct ArtyGraphicInfo_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        client::ArtyGraphicID_t m_unID; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        CUtlString m_szSnippet; // 0x10        
        CUtlString m_szUnit; // 0x18        
        // m_szModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_szModel;
        char m_szModel[0xe0]; // 0x20        
        // m_szParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szParticle;
        char m_szParticle[0xe0]; // 0x100        
        client::EArtyGraphicsType m_eType; // 0x1e0        
        [[maybe_unused]] std::uint8_t pad_0x1e1[0x3]; // 0x1e1
        QAngle m_vAngles; // 0x1e4        
        Vector m_vPosition; // 0x1f0        
        Vector m_vCameraOffset; // 0x1fc        
        int32_t m_nWidth; // 0x208        
        int32_t m_nHeight; // 0x20c        
        bool m_bPlayEndcap; // 0x210        
        [[maybe_unused]] std::uint8_t pad_0x211[0x3]; // 0x211
        float m_flDefaultScale; // 0x214        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ArtyGraphicInfo_t, m_unID) == 0x8);
    static_assert(offsetof(ArtyGraphicInfo_t, m_szSnippet) == 0x10);
    static_assert(offsetof(ArtyGraphicInfo_t, m_szUnit) == 0x18);
    static_assert(offsetof(ArtyGraphicInfo_t, m_szModel) == 0x20);
    static_assert(offsetof(ArtyGraphicInfo_t, m_szParticle) == 0x100);
    static_assert(offsetof(ArtyGraphicInfo_t, m_eType) == 0x1e0);
    static_assert(offsetof(ArtyGraphicInfo_t, m_vAngles) == 0x1e4);
    static_assert(offsetof(ArtyGraphicInfo_t, m_vPosition) == 0x1f0);
    static_assert(offsetof(ArtyGraphicInfo_t, m_vCameraOffset) == 0x1fc);
    static_assert(offsetof(ArtyGraphicInfo_t, m_nWidth) == 0x208);
    static_assert(offsetof(ArtyGraphicInfo_t, m_nHeight) == 0x20c);
    static_assert(offsetof(ArtyGraphicInfo_t, m_bPlayEndcap) == 0x210);
    static_assert(offsetof(ArtyGraphicInfo_t, m_flDefaultScale) == 0x214);
    
    static_assert(sizeof(ArtyGraphicInfo_t) == 0x218);
};

#pragma once
#include "source2sdk/client/C_PointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseModelEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x718
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bDisabled"
    // static metadata: MNetworkVarNames "int m_nResolutionX"
    // static metadata: MNetworkVarNames "int m_nResolutionY"
    // static metadata: MNetworkVarNames "string_t m_szLayoutFileName"
    // static metadata: MNetworkVarNames "string_t m_RenderAttrName"
    // static metadata: MNetworkVarNames "CHandle< C_BaseModelEntity > m_TargetEntities"
    // static metadata: MNetworkVarNames "int m_nTargetChangeCount"
    // static metadata: MNetworkVarNames "string_t m_vecCSSClasses"
    #pragma pack(push, 1)
    class CInfoOffscreenPanoramaTexture : public client::C_PointEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bDisabled; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x539[0x3]; // 0x539
        // metadata: MNetworkEnable
        int32_t m_nResolutionX; // 0x53c        
        // metadata: MNetworkEnable
        int32_t m_nResolutionY; // 0x540        
        [[maybe_unused]] std::uint8_t pad_0x544[0x4]; // 0x544
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szLayoutFileName; // 0x548        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_RenderAttrName; // 0x550        
        // metadata: MNetworkEnable
        // m_TargetEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseModelEntity>> m_TargetEntities;
        char m_TargetEntities[0x18]; // 0x558        
        // metadata: MNetworkEnable
        int32_t m_nTargetChangeCount; // 0x570        
        [[maybe_unused]] std::uint8_t pad_0x574[0x4]; // 0x574
        // metadata: MNetworkEnable
        // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
        char m_vecCSSClasses[0x18]; // 0x578        
        [[maybe_unused]] std::uint8_t pad_0x590[0x160]; // 0x590
        bool m_bCheckCSSClasses; // 0x6f0        
        [[maybe_unused]] std::uint8_t pad_0x6f1[0x27];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoOffscreenPanoramaTexture because it is not a standard-layout class
    static_assert(sizeof(CInfoOffscreenPanoramaTexture) == 0x718);
};

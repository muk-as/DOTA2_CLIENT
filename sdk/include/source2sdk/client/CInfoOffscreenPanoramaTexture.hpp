#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseModelEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7d0
        // Has VTable
        // Construct allowed
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
        class CInfoOffscreenPanoramaTexture : public source2sdk::client::C_PointEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bDisabled; // 0x5e8            
            uint8_t _pad05e9[0x3]; // 0x5e9
            // metadata: MNetworkEnable
            std::int32_t m_nResolutionX; // 0x5ec            
            // metadata: MNetworkEnable
            std::int32_t m_nResolutionY; // 0x5f0            
            uint8_t _pad05f4[0x4]; // 0x5f4
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szLayoutFileName; // 0x5f8            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_RenderAttrName; // 0x600            
            // metadata: MNetworkEnable
            // m_TargetEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseModelEntity>> m_TargetEntities;
            char m_TargetEntities[0x18]; // 0x608            
            // metadata: MNetworkEnable
            std::int32_t m_nTargetChangeCount; // 0x620            
            uint8_t _pad0624[0x4]; // 0x624
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0x628            
            uint8_t _pad0640[0x168]; // 0x640
            bool m_bCheckCSSClasses; // 0x7a8            
            uint8_t _pad07a9[0x27];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoOffscreenPanoramaTexture because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CInfoOffscreenPanoramaTexture) == 0x7d0);
    };
};

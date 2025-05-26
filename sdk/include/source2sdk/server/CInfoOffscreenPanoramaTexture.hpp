#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseModelEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x558
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "bool m_bDisabled"
        // static metadata: MNetworkVarNames "int m_nResolutionX"
        // static metadata: MNetworkVarNames "int m_nResolutionY"
        // static metadata: MNetworkVarNames "string_t m_szLayoutFileName"
        // static metadata: MNetworkVarNames "string_t m_RenderAttrName"
        // static metadata: MNetworkVarNames "CHandle< CBaseModelEntity > m_TargetEntities"
        // static metadata: MNetworkVarNames "int m_nTargetChangeCount"
        // static metadata: MNetworkVarNames "string_t m_vecCSSClasses"
        #pragma pack(push, 1)
        class CInfoOffscreenPanoramaTexture : public source2sdk::server::CPointEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bDisabled; // 0x4e0            
            uint8_t _pad04e1[0x3]; // 0x4e1
            // metadata: MNetworkEnable
            std::int32_t m_nResolutionX; // 0x4e4            
            // metadata: MNetworkEnable
            std::int32_t m_nResolutionY; // 0x4e8            
            uint8_t _pad04ec[0x4]; // 0x4ec
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szLayoutFileName; // 0x4f0            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_RenderAttrName; // 0x4f8            
            // metadata: MNetworkEnable
            // m_TargetEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseModelEntity>> m_TargetEntities;
            char m_TargetEntities[0x18]; // 0x500            
            // metadata: MNetworkEnable
            std::int32_t m_nTargetChangeCount; // 0x518            
            uint8_t _pad051c[0x4]; // 0x51c
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0x520            
            CUtlSymbolLarge m_szTargetsName; // 0x538            
            // m_AdditionalTargetEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseModelEntity>> m_AdditionalTargetEntities;
            char m_AdditionalTargetEntities[0x18]; // 0x540            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // CUtlSymbolLarge InputAddCSSClass; // 0x0
            // CUtlSymbolLarge InputRemoveCSSClass; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoOffscreenPanoramaTexture because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoOffscreenPanoramaTexture) == 0x558);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseClientUIEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CPointOffScreenIndicatorUi;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xc00
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bIgnoreInput"
        // static metadata: MNetworkVarNames "bool m_bLit"
        // static metadata: MNetworkVarNames "bool m_bFollowPlayerAcrossTeleport"
        // static metadata: MNetworkVarNames "float m_flWidth"
        // static metadata: MNetworkVarNames "float m_flHeight"
        // static metadata: MNetworkVarNames "float m_flDPI"
        // static metadata: MNetworkVarNames "float m_flInteractDistance"
        // static metadata: MNetworkVarNames "float m_flDepthOffset"
        // static metadata: MNetworkVarNames "uint32 m_unOwnerContext"
        // static metadata: MNetworkVarNames "uint32 m_unHorizontalAlign"
        // static metadata: MNetworkVarNames "uint32 m_unVerticalAlign"
        // static metadata: MNetworkVarNames "uint32 m_unOrientation"
        // static metadata: MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
        // static metadata: MNetworkVarNames "string_t m_vecCSSClasses"
        // static metadata: MNetworkVarNames "bool m_bOpaque"
        // static metadata: MNetworkVarNames "bool m_bNoDepth"
        // static metadata: MNetworkVarNames "bool m_bVisibleWhenParentNoDraw"
        // static metadata: MNetworkVarNames "bool m_bRenderBackface"
        // static metadata: MNetworkVarNames "bool m_bUseOffScreenIndicator"
        // static metadata: MNetworkVarNames "bool m_bExcludeFromSaveGames"
        // static metadata: MNetworkVarNames "bool m_bGrabbable"
        // static metadata: MNetworkVarNames "bool m_bOnlyRenderToTexture"
        // static metadata: MNetworkVarNames "bool m_bDisableMipGen"
        // static metadata: MNetworkVarNames "int32 m_nExplicitImageLayout"
        #pragma pack(push, 1)
        class C_PointClientUIWorldPanel : public source2sdk::client::C_BaseClientUIEntity
        {
        public:
            uint8_t _pad09c8[0x8]; // 0x9c8
            bool m_bForceRecreateNextUpdate; // 0x9d0            
            bool m_bMoveViewToPlayerNextThink; // 0x9d1            
            bool m_bCheckCSSClasses; // 0x9d2            
            uint8_t _pad09d3[0xd]; // 0x9d3
            CTransform m_anchorDeltaTransform; // 0x9e0            
            uint8_t _pad0a00[0x178]; // 0xa00
            source2sdk::client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xb78            
            uint8_t _pad0b80[0x20]; // 0xb80
            // metadata: MNetworkEnable
            bool m_bIgnoreInput; // 0xba0            
            // metadata: MNetworkEnable
            bool m_bLit; // 0xba1            
            // metadata: MNetworkEnable
            bool m_bFollowPlayerAcrossTeleport; // 0xba2            
            uint8_t _pad0ba3[0x1]; // 0xba3
            // metadata: MNetworkEnable
            float m_flWidth; // 0xba4            
            // metadata: MNetworkEnable
            float m_flHeight; // 0xba8            
            // metadata: MNetworkEnable
            float m_flDPI; // 0xbac            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0xbb0            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0xbb4            
            // metadata: MNetworkEnable
            std::uint32_t m_unOwnerContext; // 0xbb8            
            // metadata: MNetworkEnable
            std::uint32_t m_unHorizontalAlign; // 0xbbc            
            // metadata: MNetworkEnable
            std::uint32_t m_unVerticalAlign; // 0xbc0            
            // metadata: MNetworkEnable
            std::uint32_t m_unOrientation; // 0xbc4            
            // metadata: MNetworkEnable
            bool m_bAllowInteractionFromAllSceneWorlds; // 0xbc8            
            uint8_t _pad0bc9[0x7]; // 0xbc9
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0xbd0            
            // metadata: MNetworkEnable
            bool m_bOpaque; // 0xbe8            
            // metadata: MNetworkEnable
            bool m_bNoDepth; // 0xbe9            
            // metadata: MNetworkEnable
            bool m_bVisibleWhenParentNoDraw; // 0xbea            
            // metadata: MNetworkEnable
            bool m_bRenderBackface; // 0xbeb            
            // metadata: MNetworkEnable
            bool m_bUseOffScreenIndicator; // 0xbec            
            // metadata: MNetworkEnable
            bool m_bExcludeFromSaveGames; // 0xbed            
            // metadata: MNetworkEnable
            bool m_bGrabbable; // 0xbee            
            // metadata: MNetworkEnable
            bool m_bOnlyRenderToTexture; // 0xbef            
            // metadata: MNetworkEnable
            bool m_bDisableMipGen; // 0xbf0            
            uint8_t _pad0bf1[0x3]; // 0xbf1
            // metadata: MNetworkEnable
            std::int32_t m_nExplicitImageLayout; // 0xbf4            
            uint8_t _pad0bf8[0x8];
            
            // Datamap fields:
            // CUtlSymbolLarge css_class; // 0x7fffffff
            // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0xb70
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIWorldPanel) == 0xc00);
    };
};

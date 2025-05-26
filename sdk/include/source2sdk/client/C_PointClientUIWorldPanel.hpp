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
        // Size: 0xbd0
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
            uint8_t _pad09a0[0x8]; // 0x9a0
            bool m_bForceRecreateNextUpdate; // 0x9a8            
            bool m_bMoveViewToPlayerNextThink; // 0x9a9            
            bool m_bCheckCSSClasses; // 0x9aa            
            uint8_t _pad09ab[0x5]; // 0x9ab
            CTransform m_anchorDeltaTransform; // 0x9b0            
            uint8_t _pad09d0[0x178]; // 0x9d0
            source2sdk::client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xb48            
            uint8_t _pad0b50[0x20]; // 0xb50
            // metadata: MNetworkEnable
            bool m_bIgnoreInput; // 0xb70            
            // metadata: MNetworkEnable
            bool m_bLit; // 0xb71            
            // metadata: MNetworkEnable
            bool m_bFollowPlayerAcrossTeleport; // 0xb72            
            uint8_t _pad0b73[0x1]; // 0xb73
            // metadata: MNetworkEnable
            float m_flWidth; // 0xb74            
            // metadata: MNetworkEnable
            float m_flHeight; // 0xb78            
            // metadata: MNetworkEnable
            float m_flDPI; // 0xb7c            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0xb80            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0xb84            
            // metadata: MNetworkEnable
            std::uint32_t m_unOwnerContext; // 0xb88            
            // metadata: MNetworkEnable
            std::uint32_t m_unHorizontalAlign; // 0xb8c            
            // metadata: MNetworkEnable
            std::uint32_t m_unVerticalAlign; // 0xb90            
            // metadata: MNetworkEnable
            std::uint32_t m_unOrientation; // 0xb94            
            // metadata: MNetworkEnable
            bool m_bAllowInteractionFromAllSceneWorlds; // 0xb98            
            uint8_t _pad0b99[0x7]; // 0xb99
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0xba0            
            // metadata: MNetworkEnable
            bool m_bOpaque; // 0xbb8            
            // metadata: MNetworkEnable
            bool m_bNoDepth; // 0xbb9            
            // metadata: MNetworkEnable
            bool m_bRenderBackface; // 0xbba            
            // metadata: MNetworkEnable
            bool m_bUseOffScreenIndicator; // 0xbbb            
            // metadata: MNetworkEnable
            bool m_bExcludeFromSaveGames; // 0xbbc            
            // metadata: MNetworkEnable
            bool m_bGrabbable; // 0xbbd            
            // metadata: MNetworkEnable
            bool m_bOnlyRenderToTexture; // 0xbbe            
            // metadata: MNetworkEnable
            bool m_bDisableMipGen; // 0xbbf            
            // metadata: MNetworkEnable
            std::int32_t m_nExplicitImageLayout; // 0xbc0            
            uint8_t _pad0bc4[0xc];
            
            // Datamap fields:
            // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0xb40
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIWorldPanel) == 0xbd0);
    };
};

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
        // Size: 0xa30
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
            uint8_t _pad0800[0x8]; // 0x800
            bool m_bForceRecreateNextUpdate; // 0x808            
            bool m_bMoveViewToPlayerNextThink; // 0x809            
            bool m_bCheckCSSClasses; // 0x80a            
            uint8_t _pad080b[0x5]; // 0x80b
            CTransform m_anchorDeltaTransform; // 0x810            
            uint8_t _pad0830[0x178]; // 0x830
            source2sdk::client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0x9a8            
            uint8_t _pad09b0[0x20]; // 0x9b0
            // metadata: MNetworkEnable
            bool m_bIgnoreInput; // 0x9d0            
            // metadata: MNetworkEnable
            bool m_bLit; // 0x9d1            
            // metadata: MNetworkEnable
            bool m_bFollowPlayerAcrossTeleport; // 0x9d2            
            uint8_t _pad09d3[0x1]; // 0x9d3
            // metadata: MNetworkEnable
            float m_flWidth; // 0x9d4            
            // metadata: MNetworkEnable
            float m_flHeight; // 0x9d8            
            // metadata: MNetworkEnable
            float m_flDPI; // 0x9dc            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0x9e0            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0x9e4            
            // metadata: MNetworkEnable
            std::uint32_t m_unOwnerContext; // 0x9e8            
            // metadata: MNetworkEnable
            std::uint32_t m_unHorizontalAlign; // 0x9ec            
            // metadata: MNetworkEnable
            std::uint32_t m_unVerticalAlign; // 0x9f0            
            // metadata: MNetworkEnable
            std::uint32_t m_unOrientation; // 0x9f4            
            // metadata: MNetworkEnable
            bool m_bAllowInteractionFromAllSceneWorlds; // 0x9f8            
            uint8_t _pad09f9[0x7]; // 0x9f9
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0xa00            
            // metadata: MNetworkEnable
            bool m_bOpaque; // 0xa18            
            // metadata: MNetworkEnable
            bool m_bNoDepth; // 0xa19            
            // metadata: MNetworkEnable
            bool m_bRenderBackface; // 0xa1a            
            // metadata: MNetworkEnable
            bool m_bUseOffScreenIndicator; // 0xa1b            
            // metadata: MNetworkEnable
            bool m_bExcludeFromSaveGames; // 0xa1c            
            // metadata: MNetworkEnable
            bool m_bGrabbable; // 0xa1d            
            // metadata: MNetworkEnable
            bool m_bOnlyRenderToTexture; // 0xa1e            
            // metadata: MNetworkEnable
            bool m_bDisableMipGen; // 0xa1f            
            // metadata: MNetworkEnable
            std::int32_t m_nExplicitImageLayout; // 0xa20            
            uint8_t _pad0a24[0xc];
            
            // Datamap fields:
            // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0x9a0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIWorldPanel) == 0xa30);
    };
};

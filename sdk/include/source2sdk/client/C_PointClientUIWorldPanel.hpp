#pragma once
#include "source2sdk/client/C_BaseClientUIEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CPointOffScreenIndicatorUi;
};

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0xa40
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
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
    class C_PointClientUIWorldPanel : public client::C_BaseClientUIEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x808[0x8]; // 0x808
        bool m_bForceRecreateNextUpdate; // 0x810        
        bool m_bMoveViewToPlayerNextThink; // 0x811        
        bool m_bCheckCSSClasses; // 0x812        
        [[maybe_unused]] std::uint8_t pad_0x813[0xd]; // 0x813
        CTransform m_anchorDeltaTransform; // 0x820        
        [[maybe_unused]] std::uint8_t pad_0x840[0x178]; // 0x840
        client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0x9b8        
        [[maybe_unused]] std::uint8_t pad_0x9c0[0x20]; // 0x9c0
        // metadata: MNetworkEnable
        bool m_bIgnoreInput; // 0x9e0        
        // metadata: MNetworkEnable
        bool m_bLit; // 0x9e1        
        // metadata: MNetworkEnable
        bool m_bFollowPlayerAcrossTeleport; // 0x9e2        
        [[maybe_unused]] std::uint8_t pad_0x9e3[0x1]; // 0x9e3
        // metadata: MNetworkEnable
        float m_flWidth; // 0x9e4        
        // metadata: MNetworkEnable
        float m_flHeight; // 0x9e8        
        // metadata: MNetworkEnable
        float m_flDPI; // 0x9ec        
        // metadata: MNetworkEnable
        float m_flInteractDistance; // 0x9f0        
        // metadata: MNetworkEnable
        float m_flDepthOffset; // 0x9f4        
        // metadata: MNetworkEnable
        uint32_t m_unOwnerContext; // 0x9f8        
        // metadata: MNetworkEnable
        uint32_t m_unHorizontalAlign; // 0x9fc        
        // metadata: MNetworkEnable
        uint32_t m_unVerticalAlign; // 0xa00        
        // metadata: MNetworkEnable
        uint32_t m_unOrientation; // 0xa04        
        // metadata: MNetworkEnable
        bool m_bAllowInteractionFromAllSceneWorlds; // 0xa08        
        [[maybe_unused]] std::uint8_t pad_0xa09[0x7]; // 0xa09
        // metadata: MNetworkEnable
        // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
        char m_vecCSSClasses[0x18]; // 0xa10        
        // metadata: MNetworkEnable
        bool m_bOpaque; // 0xa28        
        // metadata: MNetworkEnable
        bool m_bNoDepth; // 0xa29        
        // metadata: MNetworkEnable
        bool m_bRenderBackface; // 0xa2a        
        // metadata: MNetworkEnable
        bool m_bUseOffScreenIndicator; // 0xa2b        
        // metadata: MNetworkEnable
        bool m_bExcludeFromSaveGames; // 0xa2c        
        // metadata: MNetworkEnable
        bool m_bGrabbable; // 0xa2d        
        // metadata: MNetworkEnable
        bool m_bOnlyRenderToTexture; // 0xa2e        
        // metadata: MNetworkEnable
        bool m_bDisableMipGen; // 0xa2f        
        // metadata: MNetworkEnable
        int32_t m_nExplicitImageLayout; // 0xa30        
        [[maybe_unused]] std::uint8_t pad_0xa34[0xc];
        
        // Datamap fields:
        // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0x9b0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
    static_assert(sizeof(C_PointClientUIWorldPanel) == 0xa40);
};

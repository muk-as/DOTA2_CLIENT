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
    // Size: 0xa80
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
    class C_PointClientUIWorldPanel : public client::C_BaseClientUIEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x850[0x8]; // 0x850
        bool m_bForceRecreateNextUpdate; // 0x858        
        bool m_bMoveViewToPlayerNextThink; // 0x859        
        bool m_bCheckCSSClasses; // 0x85a        
        [[maybe_unused]] std::uint8_t pad_0x85b[0x5]; // 0x85b
        CTransform m_anchorDeltaTransform; // 0x860        
        [[maybe_unused]] std::uint8_t pad_0x880[0x178]; // 0x880
        client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0x9f8        
        [[maybe_unused]] std::uint8_t pad_0xa00[0x20]; // 0xa00
        // metadata: MNetworkEnable
        bool m_bIgnoreInput; // 0xa20        
        // metadata: MNetworkEnable
        bool m_bLit; // 0xa21        
        // metadata: MNetworkEnable
        bool m_bFollowPlayerAcrossTeleport; // 0xa22        
        [[maybe_unused]] std::uint8_t pad_0xa23[0x1]; // 0xa23
        // metadata: MNetworkEnable
        float m_flWidth; // 0xa24        
        // metadata: MNetworkEnable
        float m_flHeight; // 0xa28        
        // metadata: MNetworkEnable
        float m_flDPI; // 0xa2c        
        // metadata: MNetworkEnable
        float m_flInteractDistance; // 0xa30        
        // metadata: MNetworkEnable
        float m_flDepthOffset; // 0xa34        
        // metadata: MNetworkEnable
        uint32_t m_unOwnerContext; // 0xa38        
        // metadata: MNetworkEnable
        uint32_t m_unHorizontalAlign; // 0xa3c        
        // metadata: MNetworkEnable
        uint32_t m_unVerticalAlign; // 0xa40        
        // metadata: MNetworkEnable
        uint32_t m_unOrientation; // 0xa44        
        // metadata: MNetworkEnable
        bool m_bAllowInteractionFromAllSceneWorlds; // 0xa48        
        [[maybe_unused]] std::uint8_t pad_0xa49[0x7]; // 0xa49
        // metadata: MNetworkEnable
        // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
        char m_vecCSSClasses[0x18]; // 0xa50        
        // metadata: MNetworkEnable
        bool m_bOpaque; // 0xa68        
        // metadata: MNetworkEnable
        bool m_bNoDepth; // 0xa69        
        // metadata: MNetworkEnable
        bool m_bRenderBackface; // 0xa6a        
        // metadata: MNetworkEnable
        bool m_bUseOffScreenIndicator; // 0xa6b        
        // metadata: MNetworkEnable
        bool m_bExcludeFromSaveGames; // 0xa6c        
        // metadata: MNetworkEnable
        bool m_bGrabbable; // 0xa6d        
        // metadata: MNetworkEnable
        bool m_bOnlyRenderToTexture; // 0xa6e        
        // metadata: MNetworkEnable
        bool m_bDisableMipGen; // 0xa6f        
        // metadata: MNetworkEnable
        int32_t m_nExplicitImageLayout; // 0xa70        
        [[maybe_unused]] std::uint8_t pad_0xa74[0xc];
        
        // Datamap fields:
        // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0x9f0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
    static_assert(sizeof(C_PointClientUIWorldPanel) == 0xa80);
};

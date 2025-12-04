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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            bool m_bForceRecreateNextUpdate; // 0x_            
            bool m_bMoveViewToPlayerNextThink; // 0x_            
            bool m_bCheckCSSClasses; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CTransform m_anchorDeltaTransform; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            bool m_bIgnoreInput; // 0x_            
            // metadata: MNetworkEnable
            bool m_bLit; // 0x_            
            // metadata: MNetworkEnable
            bool m_bFollowPlayerAcrossTeleport; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flWidth; // 0x_            
            // metadata: MNetworkEnable
            float m_flHeight; // 0x_            
            // metadata: MNetworkEnable
            float m_flDPI; // 0x_            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0x_            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_unOwnerContext; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_unHorizontalAlign; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_unVerticalAlign; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_unOrientation; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAllowInteractionFromAllSceneWorlds; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x_]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bOpaque; // 0x_            
            // metadata: MNetworkEnable
            bool m_bNoDepth; // 0x_            
            // metadata: MNetworkEnable
            bool m_bVisibleWhenParentNoDraw; // 0x_            
            // metadata: MNetworkEnable
            bool m_bRenderBackface; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUseOffScreenIndicator; // 0x_            
            // metadata: MNetworkEnable
            bool m_bExcludeFromSaveGames; // 0x_            
            // metadata: MNetworkEnable
            bool m_bGrabbable; // 0x_            
            // metadata: MNetworkEnable
            bool m_bOnlyRenderToTexture; // 0x_            
            // metadata: MNetworkEnable
            bool m_bDisableMipGen; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nExplicitImageLayout; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // CUtlSymbolLarge css_class; // 0x_
            // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIWorldPanel) == 0x_);
    };
};

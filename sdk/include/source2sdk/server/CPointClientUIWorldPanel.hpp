#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseClientUIEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
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
        class CPointClientUIWorldPanel : public source2sdk::server::CBaseClientUIEntity
        {
        public:
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
            // CNetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
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
            
            // Datamap fields:
            // CUtlSymbolLarge css_class; // 0x_
            // void InputIgnoreUserInput; // 0x_
            // void InputAcceptUserInput; // 0x_
            // CUtlSymbolLarge InputAddCSSClass; // 0x_
            // CUtlSymbolLarge InputRemoveCSSClass; // 0x_
            // CUtlSymbolLarge InputLocalPlayerAddCSSClass; // 0x_
            // CUtlSymbolLarge InputLocalPlayerRemoveCSSClass; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointClientUIWorldPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointClientUIWorldPanel) == 0x_);
    };
};

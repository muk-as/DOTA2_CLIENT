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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9d0
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
        class CPointClientUIWorldPanel : public source2sdk::server::CBaseClientUIEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bIgnoreInput; // 0x978            
            // metadata: MNetworkEnable
            bool m_bLit; // 0x979            
            // metadata: MNetworkEnable
            bool m_bFollowPlayerAcrossTeleport; // 0x97a            
            uint8_t _pad097b[0x1]; // 0x97b
            // metadata: MNetworkEnable
            float m_flWidth; // 0x97c            
            // metadata: MNetworkEnable
            float m_flHeight; // 0x980            
            // metadata: MNetworkEnable
            float m_flDPI; // 0x984            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0x988            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0x98c            
            // metadata: MNetworkEnable
            std::uint32_t m_unOwnerContext; // 0x990            
            // metadata: MNetworkEnable
            std::uint32_t m_unHorizontalAlign; // 0x994            
            // metadata: MNetworkEnable
            std::uint32_t m_unVerticalAlign; // 0x998            
            // metadata: MNetworkEnable
            std::uint32_t m_unOrientation; // 0x99c            
            // metadata: MNetworkEnable
            bool m_bAllowInteractionFromAllSceneWorlds; // 0x9a0            
            uint8_t _pad09a1[0x7]; // 0x9a1
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0x9a8            
            // metadata: MNetworkEnable
            bool m_bOpaque; // 0x9c0            
            // metadata: MNetworkEnable
            bool m_bNoDepth; // 0x9c1            
            // metadata: MNetworkEnable
            bool m_bRenderBackface; // 0x9c2            
            // metadata: MNetworkEnable
            bool m_bUseOffScreenIndicator; // 0x9c3            
            // metadata: MNetworkEnable
            bool m_bExcludeFromSaveGames; // 0x9c4            
            // metadata: MNetworkEnable
            bool m_bGrabbable; // 0x9c5            
            // metadata: MNetworkEnable
            bool m_bOnlyRenderToTexture; // 0x9c6            
            // metadata: MNetworkEnable
            bool m_bDisableMipGen; // 0x9c7            
            // metadata: MNetworkEnable
            std::int32_t m_nExplicitImageLayout; // 0x9c8            
            uint8_t _pad09cc[0x4];
            
            // Datamap fields:
            // void InputIgnoreUserInput; // 0x0
            // void InputAcceptUserInput; // 0x0
            // CUtlSymbolLarge InputAddCSSClass; // 0x0
            // CUtlSymbolLarge InputRemoveCSSClass; // 0x0
            // CUtlSymbolLarge InputLocalPlayerAddCSSClass; // 0x0
            // CUtlSymbolLarge InputLocalPlayerRemoveCSSClass; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointClientUIWorldPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointClientUIWorldPanel) == 0x9d0);
    };
};

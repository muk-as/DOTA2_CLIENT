#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseClientUIEntity.hpp"

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
        // Size: 0x9d0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "bool m_bIgnoreInput"
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
        #pragma pack(push, 1)
        class C_PointClientUIHUD : public source2sdk::client::C_BaseClientUIEntity
        {
        public:
            uint8_t _pad0800[0x8]; // 0x800
            bool m_bCheckCSSClasses; // 0x808            
            uint8_t _pad0809[0x17f]; // 0x809
            // metadata: MNetworkEnable
            bool m_bIgnoreInput; // 0x988            
            uint8_t _pad0989[0x3]; // 0x989
            // metadata: MNetworkEnable
            float m_flWidth; // 0x98c            
            // metadata: MNetworkEnable
            float m_flHeight; // 0x990            
            // metadata: MNetworkEnable
            float m_flDPI; // 0x994            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0x998            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0x99c            
            // metadata: MNetworkEnable
            std::uint32_t m_unOwnerContext; // 0x9a0            
            // metadata: MNetworkEnable
            std::uint32_t m_unHorizontalAlign; // 0x9a4            
            // metadata: MNetworkEnable
            std::uint32_t m_unVerticalAlign; // 0x9a8            
            // metadata: MNetworkEnable
            std::uint32_t m_unOrientation; // 0x9ac            
            // metadata: MNetworkEnable
            bool m_bAllowInteractionFromAllSceneWorlds; // 0x9b0            
            uint8_t _pad09b1[0x7]; // 0x9b1
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0x9b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIHUD because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIHUD) == 0x9d0);
    };
};

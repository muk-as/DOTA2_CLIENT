#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PointWorldTextJustifyHorizontal_t.hpp"
#include "source2sdk/client/PointWorldTextJustifyVertical_t.hpp"
#include "source2sdk/client/PointWorldTextReorientMode_t.hpp"
#include "source2sdk/server/CModelPointEntity.hpp"

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
        // Size: 0xaa0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "char m_messageText"
        // static metadata: MNetworkVarNames "char m_FontName"
        // static metadata: MNetworkVarNames "char m_BackgroundMaterialName"
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "bool m_bFullbright"
        // static metadata: MNetworkVarNames "float m_flWorldUnitsPerPx"
        // static metadata: MNetworkVarNames "float m_flFontSize"
        // static metadata: MNetworkVarNames "float m_flDepthOffset"
        // static metadata: MNetworkVarNames "bool m_bDrawBackground"
        // static metadata: MNetworkVarNames "float m_flBackgroundBorderWidth"
        // static metadata: MNetworkVarNames "float m_flBackgroundBorderHeight"
        // static metadata: MNetworkVarNames "float m_flBackgroundWorldToUV"
        // static metadata: MNetworkVarNames "Color m_Color"
        // static metadata: MNetworkVarNames "PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal"
        // static metadata: MNetworkVarNames "PointWorldTextJustifyVertical_t m_nJustifyVertical"
        // static metadata: MNetworkVarNames "PointWorldTextReorientMode_t m_nReorientMode"
        #pragma pack(push, 1)
        class CPointWorldText : public source2sdk::server::CModelPointEntity
        {
        public:
            // metadata: MNetworkEnable
            char m_messageText[512]; // 0x7f0            
            // metadata: MNetworkEnable
            char m_FontName[64]; // 0x9f0            
            // metadata: MNetworkEnable
            char m_BackgroundMaterialName[64]; // 0xa30            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0xa70            
            // metadata: MNetworkEnable
            bool m_bFullbright; // 0xa71            
            uint8_t _pad0a72[0x2]; // 0xa72
            // metadata: MNetworkEnable
            float m_flWorldUnitsPerPx; // 0xa74            
            // metadata: MNetworkEnable
            float m_flFontSize; // 0xa78            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0xa7c            
            // metadata: MNetworkEnable
            bool m_bDrawBackground; // 0xa80            
            uint8_t _pad0a81[0x3]; // 0xa81
            // metadata: MNetworkEnable
            float m_flBackgroundBorderWidth; // 0xa84            
            // metadata: MNetworkEnable
            float m_flBackgroundBorderHeight; // 0xa88            
            // metadata: MNetworkEnable
            float m_flBackgroundWorldToUV; // 0xa8c            
            // metadata: MNetworkEnable
            Color m_Color; // 0xa90            
            // metadata: MNetworkEnable
            source2sdk::client::PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xa94            
            // metadata: MNetworkEnable
            source2sdk::client::PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xa98            
            // metadata: MNetworkEnable
            source2sdk::client::PointWorldTextReorientMode_t m_nReorientMode; // 0xa9c            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggle; // 0x0
            // CUtlSymbolLarge InputSetMessage; // 0x0
            // int32_t InputSetIntMessage; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointWorldText because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointWorldText) == 0xaa0);
    };
};

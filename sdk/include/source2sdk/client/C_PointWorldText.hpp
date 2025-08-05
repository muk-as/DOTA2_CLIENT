#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_ModelPointEntity.hpp"
#include "source2sdk/client/PointWorldTextJustifyHorizontal_t.hpp"
#include "source2sdk/client/PointWorldTextJustifyVertical_t.hpp"
#include "source2sdk/client/PointWorldTextReorientMode_t.hpp"

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
        // Size: 0xc68
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
        class C_PointWorldText : public source2sdk::client::C_ModelPointEntity
        {
        public:
            uint8_t _pad0998[0x8]; // 0x998
            bool m_bForceRecreateNextUpdate; // 0x9a0            
            uint8_t _pad09a1[0x17]; // 0x9a1
            // metadata: MNetworkEnable
            char m_messageText[512]; // 0x9b8            
            // metadata: MNetworkEnable
            char m_FontName[64]; // 0xbb8            
            // metadata: MNetworkEnable
            char m_BackgroundMaterialName[64]; // 0xbf8            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0xc38            
            // metadata: MNetworkEnable
            bool m_bFullbright; // 0xc39            
            uint8_t _pad0c3a[0x2]; // 0xc3a
            // metadata: MNetworkEnable
            float m_flWorldUnitsPerPx; // 0xc3c            
            // metadata: MNetworkEnable
            float m_flFontSize; // 0xc40            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0xc44            
            // metadata: MNetworkEnable
            bool m_bDrawBackground; // 0xc48            
            uint8_t _pad0c49[0x3]; // 0xc49
            // metadata: MNetworkEnable
            float m_flBackgroundBorderWidth; // 0xc4c            
            // metadata: MNetworkEnable
            float m_flBackgroundBorderHeight; // 0xc50            
            // metadata: MNetworkEnable
            float m_flBackgroundWorldToUV; // 0xc54            
            // metadata: MNetworkEnable
            Color m_Color; // 0xc58            
            // metadata: MNetworkEnable
            source2sdk::client::PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xc5c            
            // metadata: MNetworkEnable
            source2sdk::client::PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xc60            
            // metadata: MNetworkEnable
            source2sdk::client::PointWorldTextReorientMode_t m_nReorientMode; // 0xc64            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggle; // 0x0
            // CUtlSymbolLarge InputSetMessage; // 0x0
            // int32_t InputSetIntMessage; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointWorldText because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointWorldText) == 0xc68);
    };
};

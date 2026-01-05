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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            // metadata: MNotSaved
            char m_messageText[512]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            char m_FontName[64]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            char m_BackgroundMaterialName[64]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bEnabled; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bFullbright; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flWorldUnitsPerPx; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flFontSize; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flDepthOffset; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bDrawBackground; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flBackgroundBorderWidth; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flBackgroundBorderHeight; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flBackgroundWorldToUV; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            Color m_Color; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::PointWorldTextReorientMode_t m_nReorientMode; // 0x_            
            
            // Datamap fields:
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
            // void InputToggle; // 0x_
            // CUtlSymbolLarge InputSetMessage; // 0x_
            // int32_t InputSetIntMessage; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointWorldText because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointWorldText) == 0x_);
    };
};

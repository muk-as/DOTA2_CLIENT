#pragma once
#include "source2sdk/client/C_ModelPointEntity.hpp"
#include "source2sdk/client/PointWorldTextJustifyHorizontal_t.hpp"
#include "source2sdk/client/PointWorldTextJustifyVertical_t.hpp"
#include "source2sdk/client/PointWorldTextReorientMode_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa50
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "char m_messageText"
    // static metadata: MNetworkVarNames "char m_FontName"
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "bool m_bFullbright"
    // static metadata: MNetworkVarNames "float m_flWorldUnitsPerPx"
    // static metadata: MNetworkVarNames "float m_flFontSize"
    // static metadata: MNetworkVarNames "float m_flDepthOffset"
    // static metadata: MNetworkVarNames "Color m_Color"
    // static metadata: MNetworkVarNames "PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal"
    // static metadata: MNetworkVarNames "PointWorldTextJustifyVertical_t m_nJustifyVertical"
    // static metadata: MNetworkVarNames "PointWorldTextReorientMode_t m_nReorientMode"
    #pragma pack(push, 1)
    class C_PointWorldText : public client::C_ModelPointEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x7d8[0x8]; // 0x7d8
        bool m_bForceRecreateNextUpdate; // 0x7e0        
        [[maybe_unused]] std::uint8_t pad_0x7e1[0xf]; // 0x7e1
        // metadata: MNetworkEnable
        char m_messageText[512]; // 0x7f0        
        // metadata: MNetworkEnable
        char m_FontName[64]; // 0x9f0        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0xa30        
        // metadata: MNetworkEnable
        bool m_bFullbright; // 0xa31        
        [[maybe_unused]] std::uint8_t pad_0xa32[0x2]; // 0xa32
        // metadata: MNetworkEnable
        float m_flWorldUnitsPerPx; // 0xa34        
        // metadata: MNetworkEnable
        float m_flFontSize; // 0xa38        
        // metadata: MNetworkEnable
        float m_flDepthOffset; // 0xa3c        
        // metadata: MNetworkEnable
        Color m_Color; // 0xa40        
        // metadata: MNetworkEnable
        client::PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xa44        
        // metadata: MNetworkEnable
        client::PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xa48        
        // metadata: MNetworkEnable
        client::PointWorldTextReorientMode_t m_nReorientMode; // 0xa4c        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggle; // 0x0
        // CUtlSymbolLarge InputSetMessage; // 0x0
        // int32_t InputSetIntMessage; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointWorldText because it is not a standard-layout class
    static_assert(sizeof(C_PointWorldText) == 0xa50);
};

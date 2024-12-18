#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x960
    // Has VTable
    // Construct disallowed
    // MConstructibleClassBase
    // 
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "string_t m_DialogXMLName"
    // static metadata: MNetworkVarNames "string_t m_PanelClassName"
    // static metadata: MNetworkVarNames "string_t m_PanelID"
    #pragma pack(push, 1)
    class CBaseClientUIEntity : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x7b0        
        [[maybe_unused]] std::uint8_t pad_0x7b1[0x7]; // 0x7b1
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_DialogXMLName; // 0x7b8        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_PanelClassName; // 0x7c0        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_PanelID; // 0x7c8        
        entity2::CEntityIOOutput m_CustomOutput0; // 0x7d0        
        entity2::CEntityIOOutput m_CustomOutput1; // 0x7f8        
        entity2::CEntityIOOutput m_CustomOutput2; // 0x820        
        entity2::CEntityIOOutput m_CustomOutput3; // 0x848        
        entity2::CEntityIOOutput m_CustomOutput4; // 0x870        
        entity2::CEntityIOOutput m_CustomOutput5; // 0x898        
        entity2::CEntityIOOutput m_CustomOutput6; // 0x8c0        
        entity2::CEntityIOOutput m_CustomOutput7; // 0x8e8        
        entity2::CEntityIOOutput m_CustomOutput8; // 0x910        
        entity2::CEntityIOOutput m_CustomOutput9; // 0x938        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseClientUIEntity because it is not a standard-layout class
    static_assert(sizeof(CBaseClientUIEntity) == 0x960);
};

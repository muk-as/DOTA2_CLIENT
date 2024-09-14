#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x808
    // Has VTable
    // Is Abstract
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "string_t m_DialogXMLName"
    // static metadata: MNetworkVarNames "string_t m_PanelClassName"
    // static metadata: MNetworkVarNames "string_t m_PanelID"
    #pragma pack(push, 1)
    class C_BaseClientUIEntity : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x7d8[0x8]; // 0x7d8
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x7e0        
        [[maybe_unused]] std::uint8_t pad_0x7e1[0x7]; // 0x7e1
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_DialogXMLName; // 0x7e8        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_PanelClassName; // 0x7f0        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_PanelID; // 0x7f8        
        [[maybe_unused]] std::uint8_t pad_0x800[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseClientUIEntity because it is not a standard-layout class
    static_assert(sizeof(C_BaseClientUIEntity) == 0x808);
};

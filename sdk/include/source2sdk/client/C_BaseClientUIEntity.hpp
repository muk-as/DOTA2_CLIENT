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
    // Size: 0x850
    // Has VTable
    // Is Abstract
    // 
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "string_t m_DialogXMLName"
    // static metadata: MNetworkVarNames "string_t m_PanelClassName"
    // static metadata: MNetworkVarNames "string_t m_PanelID"
    #pragma pack(push, 1)
    class C_BaseClientUIEntity : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x820[0x8]; // 0x820
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x828        
        [[maybe_unused]] std::uint8_t pad_0x829[0x7]; // 0x829
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_DialogXMLName; // 0x830        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_PanelClassName; // 0x838        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_PanelID; // 0x840        
        [[maybe_unused]] std::uint8_t pad_0x848[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseClientUIEntity because it is not a standard-layout class
    static_assert(sizeof(C_BaseClientUIEntity) == 0x850);
};

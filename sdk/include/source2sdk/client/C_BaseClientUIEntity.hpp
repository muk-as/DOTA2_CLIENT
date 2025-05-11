#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x800
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "string_t m_DialogXMLName"
        // static metadata: MNetworkVarNames "string_t m_PanelClassName"
        // static metadata: MNetworkVarNames "string_t m_PanelID"
        #pragma pack(push, 1)
        class C_BaseClientUIEntity : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad07d0[0x8]; // 0x7d0
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x7d8            
            uint8_t _pad07d9[0x7]; // 0x7d9
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_DialogXMLName; // 0x7e0            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_PanelClassName; // 0x7e8            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_PanelID; // 0x7f0            
            uint8_t _pad07f8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseClientUIEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseClientUIEntity) == 0x800);
    };
};

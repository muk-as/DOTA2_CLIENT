#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Terrorblade_Dark_Unity : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bInsideRadius; // 0x1878            
            uint8_t _pad1879[0x3]; // 0x1879
            float radius; // 0x187c            
            std::int32_t inside_radius_bonus_damage_pct; // 0x1880            
            std::int32_t outside_radius_bonus_damage_pct; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Terrorblade_Dark_Unity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Terrorblade_Dark_Unity) == 0x1888);
    };
};

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
        // Size: 0x1808
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Terrorblade_Dark_Unity : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bInsideRadius; // 0x17f8            
            uint8_t _pad17f9[0x3]; // 0x17f9
            std::int32_t radius; // 0x17fc            
            std::int32_t inside_radius_bonus_damage_pct; // 0x1800            
            std::int32_t outside_radius_bonus_damage_pct; // 0x1804            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Terrorblade_Dark_Unity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Terrorblade_Dark_Unity) == 0x1808);
    };
};

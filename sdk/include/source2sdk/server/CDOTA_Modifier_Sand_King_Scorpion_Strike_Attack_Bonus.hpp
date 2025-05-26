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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Sand_King_Scorpion_Strike_Attack_Bonus : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t attack_damage; // 0x1878            
            std::int32_t creep_damage_penalty; // 0x187c            
            std::int32_t inner_radius_bonus_damage_pct; // 0x1880            
            bool m_bIsInnerRadiusHit; // 0x1884            
            uint8_t _pad1885[0x3]; // 0x1885
            float damage_pct; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Sand_King_Scorpion_Strike_Attack_Bonus because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Sand_King_Scorpion_Strike_Attack_Bonus) == 0x1890);
    };
};

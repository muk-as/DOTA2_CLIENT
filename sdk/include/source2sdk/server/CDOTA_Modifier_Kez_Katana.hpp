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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_Katana : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t katana_attack_range; // 0x1878            
            float katana_base_attack_time; // 0x187c            
            std::int32_t katana_agility_bonus_base_damage; // 0x1880            
            std::int32_t katana_bleed_attack_damage_pct; // 0x1884            
            float katana_bleed_duration; // 0x1888            
            std::int32_t katana_swap_bonus_damage; // 0x188c            
            float impale_duration; // 0x1890            
            std::int32_t bleed_as_rupture_pct; // 0x1894            
            std::int32_t m_nBonusPreAttackDamage; // 0x1898            
            bool m_bBackstab; // 0x189c            
            bool m_bShardAttack; // 0x189d            
            uint8_t _pad189e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_Katana because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Kez_Katana) == 0x18a0);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_Katana : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t katana_attack_range; // 0x1888            
            float katana_base_attack_time; // 0x188c            
            std::int32_t katana_agility_bonus_base_damage; // 0x1890            
            std::int32_t katana_bleed_attack_damage_pct; // 0x1894            
            float katana_bleed_duration; // 0x1898            
            std::int32_t katana_swap_bonus_damage; // 0x189c            
            float impale_duration; // 0x18a0            
            std::int32_t bleed_as_rupture_pct; // 0x18a4            
            std::int32_t m_nBonusPreAttackDamage; // 0x18a8            
            bool m_bBackstab; // 0x18ac            
            bool m_bShardAttack; // 0x18ad            
            uint8_t _pad18ae[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_Katana because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Kez_Katana) == 0x18b0);
    };
};

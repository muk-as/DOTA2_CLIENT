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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_Katana : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t katana_attack_range; // 0x_            
            float katana_base_attack_time; // 0x_            
            std::int32_t katana_agility_bonus_base_damage; // 0x_            
            std::int32_t katana_bleed_attack_damage_pct; // 0x_            
            float katana_bleed_duration; // 0x_            
            std::int32_t katana_swap_bonus_damage; // 0x_            
            float impale_duration; // 0x_            
            std::int32_t bleed_as_rupture_pct; // 0x_            
            std::int32_t max_stacks; // 0x_            
            std::int32_t m_nBonusPreAttackDamage; // 0x_            
            bool m_bBackstab; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flStacksForLifesteal; // 0x_            
            bool m_bShardAttack; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_Katana because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Kez_Katana) == 0x_);
    };
};

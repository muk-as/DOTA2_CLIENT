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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Aghsfort_Minor_Stats_Upgrade : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_all_stats; // 0x_            
            std::int32_t bonus_primary_stat; // 0x_            
            std::int32_t bonus_movespeed; // 0x_            
            std::int32_t bonus_hp_regen; // 0x_            
            std::int32_t bonus_armor; // 0x_            
            std::int32_t bonus_attack_damage; // 0x_            
            std::int32_t bonus_cast_range; // 0x_            
            std::int32_t bonus_spell_amp; // 0x_            
            std::int32_t bonus_health; // 0x_            
            std::int32_t bonus_mana; // 0x_            
            std::int32_t bonus_attack_speed; // 0x_            
            std::int32_t bonus_heal_amp; // 0x_            
            std::int32_t bonus_mana_regen; // 0x_            
            std::int32_t bonus_evasion; // 0x_            
            std::int32_t bonus_magic_resist; // 0x_            
            std::int32_t bonus_lifesteal; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Aghsfort_Minor_Stats_Upgrade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Aghsfort_Minor_Stats_Upgrade) == 0x_);
    };
};

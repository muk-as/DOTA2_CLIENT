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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Aghsfort_Minor_Stats_Upgrade : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_all_stats; // 0x1888            
            std::int32_t bonus_primary_stat; // 0x188c            
            std::int32_t bonus_movespeed; // 0x1890            
            std::int32_t bonus_hp_regen; // 0x1894            
            std::int32_t bonus_armor; // 0x1898            
            std::int32_t bonus_attack_damage; // 0x189c            
            std::int32_t bonus_cast_range; // 0x18a0            
            std::int32_t bonus_spell_amp; // 0x18a4            
            std::int32_t bonus_health; // 0x18a8            
            std::int32_t bonus_mana; // 0x18ac            
            std::int32_t bonus_attack_speed; // 0x18b0            
            std::int32_t bonus_heal_amp; // 0x18b4            
            std::int32_t bonus_mana_regen; // 0x18b8            
            std::int32_t bonus_evasion; // 0x18bc            
            std::int32_t bonus_magic_resist; // 0x18c0            
            std::int32_t bonus_lifesteal; // 0x18c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Aghsfort_Minor_Stats_Upgrade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Aghsfort_Minor_Stats_Upgrade) == 0x18c8);
    };
};

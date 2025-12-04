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
        class CDOTA_Modifier_Spirit_Bear_Attack_Damage : public source2sdk::client::CDOTA_Buff
        {
        public:
            float bear_bat; // 0x_            
            std::int32_t bear_magic_resistance; // 0x_            
            std::int32_t bonus_bear_hp; // 0x_            
            std::int32_t bear_movespeed; // 0x_            
            std::int32_t bonus_bear_armor; // 0x_            
            std::int32_t hp_gain_per_druid_level; // 0x_            
            std::int32_t damage_gain_per_druid_level; // 0x_            
            float model_scale; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Spirit_Bear_Attack_Damage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Spirit_Bear_Attack_Damage) == 0x_);
    };
};

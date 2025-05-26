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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Spirit_Bear_Attack_Damage : public source2sdk::client::CDOTA_Buff
        {
        public:
            float bear_bat; // 0x1878            
            std::int32_t bear_magic_resistance; // 0x187c            
            std::int32_t bonus_bear_hp; // 0x1880            
            std::int32_t bear_movespeed; // 0x1884            
            std::int32_t bonus_bear_armor; // 0x1888            
            std::int32_t hp_gain_per_druid_level; // 0x188c            
            std::int32_t damage_gain_per_druid_level; // 0x1890            
            float model_scale; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Spirit_Bear_Attack_Damage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Spirit_Bear_Attack_Damage) == 0x1898);
    };
};

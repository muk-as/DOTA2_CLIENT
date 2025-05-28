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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Viper_PoisonAttack_Slow : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage; // 0x1888            
            std::int32_t shard_armor_reduction; // 0x188c            
            std::int32_t shard_building_dmg_pct; // 0x1890            
            float movement_speed; // 0x1894            
            std::int32_t magic_resistance; // 0x1898            
            float m_flAccumDamage; // 0x189c            
            float expiration_damage_radius; // 0x18a0            
            std::int32_t accumulated_damage_explosion_pct; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Viper_PoisonAttack_Slow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Viper_PoisonAttack_Slow) == 0x18a8);
    };
};

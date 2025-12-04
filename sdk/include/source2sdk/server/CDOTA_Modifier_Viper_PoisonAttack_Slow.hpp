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
        class CDOTA_Modifier_Viper_PoisonAttack_Slow : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage; // 0x_            
            std::int32_t shard_armor_reduction; // 0x_            
            std::int32_t shard_building_dmg_pct; // 0x_            
            float movement_speed; // 0x_            
            std::int32_t magic_resistance; // 0x_            
            float m_flAccumDamage; // 0x_            
            float expiration_damage_radius; // 0x_            
            std::int32_t accumulated_damage_explosion_pct; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Viper_PoisonAttack_Slow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Viper_PoisonAttack_Slow) == 0x_);
    };
};

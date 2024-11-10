#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Viper_PoisonAttack_Slow : public client::CDOTA_Buff
    {
    public:
        float damage; // 0x1708        
        int32_t shard_armor_reduction; // 0x170c        
        int32_t shard_building_dmg_pct; // 0x1710        
        float movement_speed; // 0x1714        
        int32_t magic_resistance; // 0x1718        
        float m_flAccumDamage; // 0x171c        
        float expiration_damage_radius; // 0x1720        
        int32_t accumulated_damage_explosion_pct; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Viper_PoisonAttack_Slow because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Viper_PoisonAttack_Slow) == 0x1728);
};

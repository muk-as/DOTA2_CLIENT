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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Viper_PoisonAttack_Slow : public client::CDOTA_Buff
    {
    public:
        float damage; // 0x16e8        
        int32_t shard_armor_reduction; // 0x16ec        
        int32_t shard_building_dmg_pct; // 0x16f0        
        float movement_speed; // 0x16f4        
        int32_t magic_resistance; // 0x16f8        
        float m_flAccumDamage; // 0x16fc        
        float expiration_damage_radius; // 0x1700        
        int32_t accumulated_damage_explosion_pct; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Viper_PoisonAttack_Slow because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Viper_PoisonAttack_Slow) == 0x1708);
};

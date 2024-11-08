#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Armlet_UnholyStrength : public client::CDOTA_Buff
    {
    public:
        int32_t unholy_bonus_damage; // 0x1708        
        int32_t unholy_bonus_attack_speed; // 0x170c        
        int32_t unholy_bonus_strength; // 0x1710        
        int32_t unholy_bonus_armor; // 0x1714        
        int32_t unholy_health_drain_per_second; // 0x1718        
        int32_t str_tick_count; // 0x171c        
        int32_t unholy_bonus_slow_resistance; // 0x1720        
        float tick_interval; // 0x1724        
        float m_flDamageRemainder; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Armlet_UnholyStrength because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Armlet_UnholyStrength) == 0x1730);
};

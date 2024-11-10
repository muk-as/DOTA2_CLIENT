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
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive : public client::CDOTA_Buff
    {
    public:
        int32_t dodge_chance; // 0x1708        
        int32_t crit_chance; // 0x170c        
        int32_t crit_multiplier; // 0x1710        
        int32_t attack_speed; // 0x1714        
        float active_multiplier; // 0x1718        
        int32_t stun_chance; // 0x171c        
        float bash_cooldown; // 0x1720        
        float stun_duration; // 0x1724        
        float slow_duration; // 0x1728        
        int32_t bonus_move_speed; // 0x172c        
        int32_t bonus_status_resist; // 0x1730        
        int32_t armor; // 0x1734        
        int32_t magic_resist; // 0x1738        
        float m_flLastBash; // 0x173c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive) == 0x1740);
};

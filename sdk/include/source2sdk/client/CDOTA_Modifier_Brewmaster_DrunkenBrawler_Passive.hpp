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
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive : public client::CDOTA_Buff
    {
    public:
        int32_t dodge_chance; // 0x16e8        
        int32_t crit_chance; // 0x16ec        
        int32_t crit_multiplier; // 0x16f0        
        int32_t attack_speed; // 0x16f4        
        float active_multiplier; // 0x16f8        
        int32_t stun_chance; // 0x16fc        
        float bash_cooldown; // 0x1700        
        float stun_duration; // 0x1704        
        float slow_duration; // 0x1708        
        int32_t bonus_move_speed; // 0x170c        
        int32_t bonus_status_resist; // 0x1710        
        int32_t armor; // 0x1714        
        int32_t magic_resist; // 0x1718        
        float m_flLastBash; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive) == 0x1720);
};

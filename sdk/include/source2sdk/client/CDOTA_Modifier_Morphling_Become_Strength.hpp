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
    #pragma pack(push, 1)
    class CDOTA_Modifier_Morphling_Become_Strength : public client::CDOTA_Buff
    {
    public:
        float agi_pct_at_max_cooldown_speed; // 0x1708        
        float agi_pct_at_min_cooldown_speed; // 0x170c        
        float min_cooldown_speed_pct; // 0x1710        
        float max_cooldown_speed_pct; // 0x1714        
        float m_flCooldownSpeed; // 0x1718        
        float m_flCooldownPercentTooltip; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Morphling_Become_Strength because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Morphling_Become_Strength) == 0x1720);
};

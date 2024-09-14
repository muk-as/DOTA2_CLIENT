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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Morphling_Become_Strength : public client::CDOTA_Buff
    {
    public:
        float agi_pct_at_max_cooldown_speed; // 0x16e8        
        float agi_pct_at_min_cooldown_speed; // 0x16ec        
        float min_cooldown_speed_pct; // 0x16f0        
        float max_cooldown_speed_pct; // 0x16f4        
        float m_flCooldownSpeed; // 0x16f8        
        float m_flCooldownPercentTooltip; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Morphling_Become_Strength because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Morphling_Become_Strength) == 0x1700);
};

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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ringmaster_Impalement_Bleed : public client::CDOTA_Buff
    {
    public:
        float bleed_health_pct; // 0x1708        
        float tick_interval; // 0x170c        
        float wheel_damage_multiplier; // 0x1710        
        float slow_percent; // 0x1714        
        float bleed_creep_dps; // 0x1718        
        float slow_duration; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Impalement_Bleed because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ringmaster_Impalement_Bleed) == 0x1720);
};

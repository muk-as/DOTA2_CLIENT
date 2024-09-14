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
    class CDOTA_Modifier_Ringmaster_Impalement_Bleed : public client::CDOTA_Buff
    {
    public:
        float bleed_health_pct; // 0x16e8        
        float tick_interval; // 0x16ec        
        float wheel_damage_multiplier; // 0x16f0        
        float slow_percent; // 0x16f4        
        float bleed_creep_dps; // 0x16f8        
        float slow_duration; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Impalement_Bleed because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ringmaster_Impalement_Bleed) == 0x1700);
};

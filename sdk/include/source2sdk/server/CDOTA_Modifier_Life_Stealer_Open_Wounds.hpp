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
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Life_Stealer_Open_Wounds : public client::CDOTA_Buff
    {
    public:
        int32_t slow_steps[8]; // 0x16e8        
        int32_t heal_percent; // 0x1708        
        int32_t m_nDamageTracker; // 0x170c        
        int32_t damage_threshold; // 0x1710        
        float spread_radius; // 0x1714        
        int32_t max_health_as_damage_pct; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Life_Stealer_Open_Wounds because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Life_Stealer_Open_Wounds) == 0x1720);
};

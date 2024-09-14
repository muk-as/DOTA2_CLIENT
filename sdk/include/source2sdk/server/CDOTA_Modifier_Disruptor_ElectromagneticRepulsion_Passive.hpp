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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Disruptor_ElectromagneticRepulsion_Passive : public client::CDOTA_Buff
    {
    public:
        float damage_threshold; // 0x16e8        
        float effect_radius; // 0x16ec        
        float knockback; // 0x16f0        
        float knockback_duration; // 0x16f4        
        float damage_reset_interval; // 0x16f8        
        float m_flAccumulatedDamage; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_ElectromagneticRepulsion_Passive because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Disruptor_ElectromagneticRepulsion_Passive) == 0x1700);
};

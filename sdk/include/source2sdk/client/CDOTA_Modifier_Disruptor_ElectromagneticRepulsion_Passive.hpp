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
    class CDOTA_Modifier_Disruptor_ElectromagneticRepulsion_Passive : public client::CDOTA_Buff
    {
    public:
        float damage_threshold; // 0x1708        
        float effect_radius; // 0x170c        
        float knockback; // 0x1710        
        float knockback_duration; // 0x1714        
        float damage_reset_interval; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_ElectromagneticRepulsion_Passive because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Disruptor_ElectromagneticRepulsion_Passive) == 0x1720);
};

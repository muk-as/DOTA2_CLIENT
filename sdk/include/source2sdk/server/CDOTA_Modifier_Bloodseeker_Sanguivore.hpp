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
    class CDOTA_Modifier_Bloodseeker_Sanguivore : public client::CDOTA_Buff
    {
    public:
        int32_t base_heal; // 0x1708        
        int32_t half_bonus_aoe; // 0x170c        
        float heal_hp_pct_per_level; // 0x1710        
        int32_t creep_lifesteal_reduction_pct; // 0x1714        
        int32_t deny_lifesteal_reduction_pct; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bloodseeker_Sanguivore because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bloodseeker_Sanguivore) == 0x1720);
};

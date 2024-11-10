#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bloodseeker_Thirst : public client::CDOTA_Buff
    {
    public:
        int32_t half_bonus_aoe; // 0x1708        
        int32_t visibility_threshold_pct; // 0x170c        
        int32_t invis_threshold_pct; // 0x1710        
        int32_t min_bonus_pct; // 0x1714        
        int32_t max_bonus_pct; // 0x1718        
        int32_t bonus_movement_speed; // 0x171c        
        int32_t active_movement_speed; // 0x1720        
        float linger_duration; // 0x1724        
        client::ParticleIndex_t m_nFXIndex; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bloodseeker_Thirst because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bloodseeker_Thirst) == 0x1730);
};

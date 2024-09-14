#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bloodseeker_Thirst : public client::CDOTA_Buff
    {
    public:
        int32_t half_bonus_aoe; // 0x16e8        
        int32_t visibility_threshold_pct; // 0x16ec        
        int32_t invis_threshold_pct; // 0x16f0        
        int32_t min_bonus_pct; // 0x16f4        
        int32_t max_bonus_pct; // 0x16f8        
        int32_t bonus_movement_speed; // 0x16fc        
        int32_t active_movement_speed; // 0x1700        
        float linger_duration; // 0x1704        
        client::ParticleIndex_t m_nFXIndex; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bloodseeker_Thirst because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bloodseeker_Thirst) == 0x1710);
};

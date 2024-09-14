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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_NightStalker_HunterInTheNight : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_movement_speed_pct_night; // 0x16e8        
        int32_t bonus_attack_speed_night; // 0x16ec        
        int32_t bonus_status_resist_night; // 0x16f0        
        client::ParticleIndex_t m_nFXIndex; // 0x16f4        
        bool m_bIsDay; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16f9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_NightStalker_HunterInTheNight because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_NightStalker_HunterInTheNight) == 0x1700);
};

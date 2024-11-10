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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_NightStalker_HunterInTheNight : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_movement_speed_pct_night; // 0x1708        
        int32_t bonus_attack_speed_night; // 0x170c        
        int32_t bonus_status_resist_night; // 0x1710        
        client::ParticleIndex_t m_nFXIndex; // 0x1714        
        bool m_bIsDay; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_NightStalker_HunterInTheNight because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_NightStalker_HunterInTheNight) == 0x1720);
};

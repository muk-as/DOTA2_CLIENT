#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_LegionCommander_OverwhelmingOdds_Shield : public client::CDOTA_Buff
    {
    public:
        int32_t m_nDamageAbsorbed; // 0x1708        
        bool m_bStartedTimer; // 0x170c        
        [[maybe_unused]] std::uint8_t pad_0x170d[0x3]; // 0x170d
        entity2::GameTime_t m_timeLastDamage; // 0x1710        
        int32_t bonus_hp_regen; // 0x1714        
        int32_t shield; // 0x1718        
        int32_t total_shield; // 0x171c        
        float restore_time; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_LegionCommander_OverwhelmingOdds_Shield because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_LegionCommander_OverwhelmingOdds_Shield) == 0x1728);
};

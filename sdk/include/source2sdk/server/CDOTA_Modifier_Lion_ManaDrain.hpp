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
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Lion_ManaDrain : public client::CDOTA_Buff
    {
    public:
        int32_t mana_per_second; // 0x1708        
        int32_t break_distance; // 0x170c        
        float tick_interval; // 0x1710        
        int32_t movespeed; // 0x1714        
        int32_t damage_pct; // 0x1718        
        int32_t ally_pct; // 0x171c        
        int32_t movespeed_bonus_when_empty_pct; // 0x1720        
        entity2::GameTime_t m_fAppliedTime; // 0x1724        
        int32_t m_nTotalManaDrained; // 0x1728        
        int32_t m_nSelfBuffSerialNumber; // 0x172c        
        int32_t m_nTargetDebuffSerialNumber; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lion_ManaDrain because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lion_ManaDrain) == 0x1740);
};

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
    class CDOTA_Modifier_Slark_DarkPact_Pulses : public client::CDOTA_Buff
    {
    public:
        int32_t m_iPulseCount; // 0x1708        
        int32_t radius; // 0x170c        
        int32_t total_damage; // 0x1710        
        int32_t total_pulses; // 0x1714        
        int32_t self_damage_pct; // 0x1718        
        float pulse_interval; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Slark_DarkPact_Pulses because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Slark_DarkPact_Pulses) == 0x1720);
};

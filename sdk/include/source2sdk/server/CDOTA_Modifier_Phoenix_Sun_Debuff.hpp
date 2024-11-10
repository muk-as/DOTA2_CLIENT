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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Phoenix_Sun_Debuff : public client::CDOTA_Buff
    {
    public:
        int32_t damage_per_sec; // 0x1708        
        int32_t blind_per_second; // 0x170c        
        float tick_interval; // 0x1710        
        float blind_duration; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Phoenix_Sun_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Phoenix_Sun_Debuff) == 0x1718);
};

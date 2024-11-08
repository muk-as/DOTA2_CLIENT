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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_TemplarAssassin_Trap_Slow : public client::CDOTA_Buff
    {
    public:
        int32_t movement_speed_min; // 0x1708        
        int32_t movement_speed_max; // 0x170c        
        int32_t extra_damage; // 0x1710        
        float trap_max_charge_duration; // 0x1714        
        float min_silence_duration; // 0x1718        
        float max_silence_duration; // 0x171c        
        float stage; // 0x1720        
        float flDamagePerTick; // 0x1724        
        bool bExtraDamage; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1729[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_TemplarAssassin_Trap_Slow because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_TemplarAssassin_Trap_Slow) == 0x1730);
};

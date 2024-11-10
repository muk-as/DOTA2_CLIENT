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
    class CDOTA_Modifier_Sniper_Headshot : public client::CDOTA_Buff
    {
    public:
        int32_t proc_chance; // 0x1708        
        float slow_duration; // 0x170c        
        float knockback_distance; // 0x1710        
        int32_t bonus_damage_creeps; // 0x1714        
        int32_t damage; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Sniper_Headshot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Sniper_Headshot) == 0x1720);
};

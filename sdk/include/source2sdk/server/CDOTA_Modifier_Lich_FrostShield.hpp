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
    class CDOTA_Modifier_Lich_FrostShield : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x1708        
        float interval; // 0x170c        
        int32_t damage_reduction; // 0x1710        
        int32_t health_regen; // 0x1714        
        float bonus_duration_per_hero_killed; // 0x1718        
        float bonus_duration_per_creep_killed; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lich_FrostShield because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lich_FrostShield) == 0x1720);
};

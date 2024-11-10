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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Blood_Grenade_Flight_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t speed; // 0x1708        
        float radius; // 0x170c        
        int32_t damage_over_time; // 0x1710        
        int32_t impact_damage; // 0x1714        
        float debuff_duration; // 0x1718        
        int32_t movespeed_slow; // 0x171c        
        float tick_rate; // 0x1720        
        client::ParticleIndex_t m_nFXIndex; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Blood_Grenade_Flight_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Blood_Grenade_Flight_Thinker) == 0x1728);
};

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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Blood_Grenade_Flight_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t speed; // 0x16e8        
        float radius; // 0x16ec        
        int32_t damage_over_time; // 0x16f0        
        int32_t impact_damage; // 0x16f4        
        float debuff_duration; // 0x16f8        
        int32_t movespeed_slow; // 0x16fc        
        float tick_rate; // 0x1700        
        client::ParticleIndex_t m_nFXIndex; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Blood_Grenade_Flight_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Blood_Grenade_Flight_Thinker) == 0x1708);
};

#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Juggernaut_Bladeform : public client::CDOTA_Buff
    {
    public:
        int32_t max_stacks; // 0x16e8        
        float stack_gain_time; // 0x16ec        
        float agi_bonus_pct_per_stack; // 0x16f0        
        float movement_speed_pct_per_stack; // 0x16f4        
        float linger_duration; // 0x16f8        
        client::ParticleIndex_t m_nFXIndex; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Juggernaut_Bladeform because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Juggernaut_Bladeform) == 0x1700);
};
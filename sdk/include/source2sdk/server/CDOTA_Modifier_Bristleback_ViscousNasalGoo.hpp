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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bristleback_ViscousNasalGoo : public client::CDOTA_Buff
    {
    public:
        float base_armor; // 0x16e8        
        float armor_per_stack; // 0x16ec        
        int32_t base_move_slow; // 0x16f0        
        int32_t move_slow_per_stack; // 0x16f4        
        int32_t stack_limit; // 0x16f8        
        client::ParticleIndex_t m_nFXStackIndex; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_ViscousNasalGoo because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bristleback_ViscousNasalGoo) == 0x1700);
};
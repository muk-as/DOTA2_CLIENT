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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bristleback_ViscousNasalGoo : public client::CDOTA_Buff
    {
    public:
        float base_armor; // 0x1708        
        float armor_per_stack; // 0x170c        
        int32_t base_move_slow; // 0x1710        
        int32_t move_slow_per_stack; // 0x1714        
        int32_t stack_limit; // 0x1718        
        client::ParticleIndex_t m_nFXStackIndex; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_ViscousNasalGoo because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bristleback_ViscousNasalGoo) == 0x1720);
};

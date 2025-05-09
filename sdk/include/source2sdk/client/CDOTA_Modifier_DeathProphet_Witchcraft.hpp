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
    // Size: 0x1710
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DeathProphet_Witchcraft : public client::CDOTA_Buff
    {
    public:
        float movement_speed_pct_per_level; // 0x1708        
        float cooldown_reduction_pct_per_level; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DeathProphet_Witchcraft because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DeathProphet_Witchcraft) == 0x1710);
};

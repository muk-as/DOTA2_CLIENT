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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Filler_Heal : public client::CDOTA_Buff
    {
    public:
        int32_t hp_heal; // 0x1708        
        int32_t mp_heal; // 0x170c        
        int32_t hp_heal_growth; // 0x1710        
        float mp_heal_growth; // 0x1714        
        int32_t hp_heal_pct; // 0x1718        
        int32_t mp_heal_pct; // 0x171c        
        int32_t tota_hp_per_second; // 0x1720        
        int32_t tota_mp_per_second; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Filler_Heal because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Filler_Heal) == 0x1728);
};

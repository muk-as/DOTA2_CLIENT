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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Filler_Heal : public client::CDOTA_Buff
    {
    public:
        int32_t hp_heal; // 0x16e8        
        int32_t mp_heal; // 0x16ec        
        int32_t hp_heal_growth; // 0x16f0        
        float mp_heal_growth; // 0x16f4        
        int32_t hp_heal_pct; // 0x16f8        
        int32_t mp_heal_pct; // 0x16fc        
        int32_t tota_hp_per_second; // 0x1700        
        int32_t tota_mp_per_second; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Filler_Heal because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Filler_Heal) == 0x1708);
};

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
    class CDOTA_Modifier_TemplarAssassin_PsiBlades : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_attack_range; // 0x16e8        
        float attack_spill_range; // 0x16ec        
        int32_t attack_spill_width; // 0x16f0        
        int32_t attack_spill_pct; // 0x16f4        
        int32_t attack_spill_penalty; // 0x16f8        
        int32_t additional_bonus_attack_range; // 0x16fc        
        int32_t additional_attack_spill_range; // 0x1700        
        float spill_slow_duration; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_TemplarAssassin_PsiBlades because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_TemplarAssassin_PsiBlades) == 0x1708);
};

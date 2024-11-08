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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Shredder_WhirlingDeath_Debuff : public client::CDOTA_Buff
    {
    public:
        float stat_loss_pct; // 0x1708        
        int32_t stat_loss_univ; // 0x170c        
        int32_t iPrimaryAttribute; // 0x1710        
        float flStatLossStr; // 0x1714        
        float flStatLossAgi; // 0x1718        
        float flStatLossInt; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_WhirlingDeath_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Shredder_WhirlingDeath_Debuff) == 0x1720);
};

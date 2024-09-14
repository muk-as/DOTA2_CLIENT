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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Shredder_WhirlingDeath_Debuff : public client::CDOTA_Buff
    {
    public:
        float stat_loss_pct; // 0x16e8        
        int32_t stat_loss_univ; // 0x16ec        
        int32_t iPrimaryAttribute; // 0x16f0        
        float flStatLossStr; // 0x16f4        
        float flStatLossAgi; // 0x16f8        
        float flStatLossInt; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_WhirlingDeath_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Shredder_WhirlingDeath_Debuff) == 0x1700);
};

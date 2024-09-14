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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Meepo_Divided_We_Stand : public client::CDOTA_Buff
    {
    public:
        float respawn; // 0x16e8        
        float magic_resist; // 0x16ec        
        int32_t main_meepo_stats_pct; // 0x16f0        
        int32_t max_level; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Meepo_Divided_We_Stand because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Meepo_Divided_We_Stand) == 0x16f8);
};

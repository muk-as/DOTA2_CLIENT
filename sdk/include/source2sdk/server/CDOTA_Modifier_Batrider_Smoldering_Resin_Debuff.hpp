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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Batrider_Smoldering_Resin_Debuff : public client::CDOTA_Buff
    {
    public:
        float damage; // 0x16e8        
        float tick_rate; // 0x16ec        
        int32_t tick_attack_damage_pct; // 0x16f0        
        int32_t total_ticks; // 0x16f4        
        // m_nDamageQueue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_nDamageQueue;
        char m_nDamageQueue[0x18]; // 0x16f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Batrider_Smoldering_Resin_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Batrider_Smoldering_Resin_Debuff) == 0x1710);
};

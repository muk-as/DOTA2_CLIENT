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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ursa_Enrage : public client::CDOTA_Buff
    {
    public:
        int32_t damage_reduction; // 0x16e8        
        int32_t status_resistance; // 0x16ec        
        float health_as_damage_pct; // 0x16f0        
        float damage_increase; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ursa_Enrage because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ursa_Enrage) == 0x16f8);
};

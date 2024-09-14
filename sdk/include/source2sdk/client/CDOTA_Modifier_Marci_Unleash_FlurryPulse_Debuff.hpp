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
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Marci_Unleash_FlurryPulse_Debuff : public client::CDOTA_Buff
    {
    public:
        float pulse_move_slow_pct; // 0x16e8        
        float pulse_attack_slow_pct; // 0x16ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Unleash_FlurryPulse_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Marci_Unleash_FlurryPulse_Debuff) == 0x16f0);
};

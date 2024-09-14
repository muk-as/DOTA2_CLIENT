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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_VoidSpirit_ResonantPulse_PhysicalBuff : public client::CDOTA_Buff
    {
    public:
        int32_t base_absorb_amount; // 0x16e8        
        int32_t m_nAbsorbRemaining; // 0x16ec        
        int32_t m_nMaxAbsorb; // 0x16f0        
        bool is_all_barrier; // 0x16f4        
        bool m_bAllDamageAbsorb; // 0x16f5        
        [[maybe_unused]] std::uint8_t pad_0x16f6[0xa];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_ResonantPulse_PhysicalBuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_VoidSpirit_ResonantPulse_PhysicalBuff) == 0x1700);
};

#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Marci_Guardian_Buff : public client::CDOTA_Buff
    {
    public:
        float lifesteal_pct; // 0x16e8        
        int32_t bonus_damage; // 0x16ec        
        int32_t bonus_attack_range; // 0x16f0        
        int32_t max_partner_distance; // 0x16f4        
        int32_t max_partner_penalty; // 0x16f8        
        int32_t creep_lifesteal_reduction_pct; // 0x16fc        
        float m_fLifestealPct; // 0x1700        
        float m_fDamageAbsorbed; // 0x1704        
        bool m_bActive; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        client::ParticleIndex_t m_nFxIndex; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Guardian_Buff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Marci_Guardian_Buff) == 0x1710);
};

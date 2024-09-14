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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_EmberSpirit_FlameGuard : public client::CDOTA_Buff
    {
    public:
        int32_t absorb_amount; // 0x16e8        
        int32_t damage_per_second; // 0x16ec        
        int32_t radius; // 0x16f0        
        float tick_interval; // 0x16f4        
        int32_t shield_pct_absorb; // 0x16f8        
        int32_t m_nAbsorbRemaining; // 0x16fc        
        float m_flShowParticleInterval; // 0x1700        
        bool m_bDestroy; // 0x1704        
        [[maybe_unused]] std::uint8_t pad_0x1705[0x3]; // 0x1705
        float linger_duration; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_EmberSpirit_FlameGuard because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_EmberSpirit_FlameGuard) == 0x1718);
};

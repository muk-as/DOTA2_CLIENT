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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_EmberSpirit_FlameGuard : public client::CDOTA_Buff
    {
    public:
        int32_t absorb_amount; // 0x1708        
        int32_t damage_per_second; // 0x170c        
        int32_t radius; // 0x1710        
        float tick_interval; // 0x1714        
        int32_t shield_pct_absorb; // 0x1718        
        int32_t m_nAbsorbRemaining; // 0x171c        
        float m_flShowParticleInterval; // 0x1720        
        bool m_bDestroy; // 0x1724        
        [[maybe_unused]] std::uint8_t pad_0x1725[0x3]; // 0x1725
        float linger_duration; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_EmberSpirit_FlameGuard because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_EmberSpirit_FlameGuard) == 0x1738);
};

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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Techies_ReactiveTazer : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1708[0x8]; // 0x1708
        int32_t bonus_ms; // 0x1710        
        int32_t stun_radius; // 0x1714        
        float stun_duration; // 0x1718        
        int32_t damage_percent; // 0x171c        
        int32_t m_nDamageRemaining; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Techies_ReactiveTazer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Techies_ReactiveTazer) == 0x1728);
};

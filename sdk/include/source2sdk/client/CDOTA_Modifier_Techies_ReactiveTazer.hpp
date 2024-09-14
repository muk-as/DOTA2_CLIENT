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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Techies_ReactiveTazer : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x16e8[0x8]; // 0x16e8
        int32_t bonus_ms; // 0x16f0        
        int32_t stun_radius; // 0x16f4        
        float stun_duration; // 0x16f8        
        int32_t damage_percent; // 0x16fc        
        int32_t m_nDamageRemaining; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Techies_ReactiveTazer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Techies_ReactiveTazer) == 0x1708);
};

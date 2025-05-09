#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
    class CDOTA_Modifier_Elder_Titan_EchoStomp : public client::CDOTA_Buff
    {
    public:
        int32_t wake_damage_limit; // 0x1708        
        float animation_rate; // 0x170c        
        float initial_stun_duration; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4]; // 0x1714
        client::CountdownTimer ctStunTimer; // 0x1718        
        float m_flDamageTaken; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_EchoStomp because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Elder_Titan_EchoStomp) == 0x1738);
};

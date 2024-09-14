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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rattletrap_Hookshot : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x16e8[0x8]; // 0x16e8
        int32_t speed; // 0x16f0        
        float stun_radius; // 0x16f4        
        float stun_radius_ally; // 0x16f8        
        float cooldown_refund_ally; // 0x16fc        
        float damage; // 0x1700        
        float duration; // 0x1704        
        float ally_shield_duration; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_Hookshot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rattletrap_Hookshot) == 0x1710);
};

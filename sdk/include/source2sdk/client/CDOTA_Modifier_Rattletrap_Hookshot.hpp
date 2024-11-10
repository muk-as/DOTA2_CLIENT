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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rattletrap_Hookshot : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1708[0x8]; // 0x1708
        int32_t speed; // 0x1710        
        float stun_radius; // 0x1714        
        float stun_radius_ally; // 0x1718        
        float cooldown_refund_ally; // 0x171c        
        float damage; // 0x1720        
        float duration; // 0x1724        
        float ally_shield_duration; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_Hookshot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rattletrap_Hookshot) == 0x1730);
};

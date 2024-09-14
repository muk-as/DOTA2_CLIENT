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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Lina_LightStrikeArray_Thinker : public client::CDOTA_Buff
    {
    public:
        float m_flDamage; // 0x16e8        
        float m_flStunDuration; // 0x16ec        
        int32_t light_strike_array_aoe; // 0x16f0        
        int32_t light_strike_array_damage; // 0x16f4        
        float light_strike_array_stun_duration; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lina_LightStrikeArray_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lina_LightStrikeArray_Thinker) == 0x1700);
};

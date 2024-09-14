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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Greevil_Miniboss_Orange_LightStrikeArray_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t m_iDamage; // 0x16e8        
        float m_flStunDuration; // 0x16ec        
        int32_t light_strike_array_aoe; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Greevil_Miniboss_Orange_LightStrikeArray_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Greevil_Miniboss_Orange_LightStrikeArray_Thinker) == 0x16f8);
};

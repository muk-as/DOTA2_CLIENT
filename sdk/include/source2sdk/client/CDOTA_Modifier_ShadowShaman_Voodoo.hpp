#pragma once
#include "source2sdk/client/CDOTA_Modifier_Hexed.hpp"
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
    class CDOTA_Modifier_ShadowShaman_Voodoo : public client::CDOTA_Modifier_Hexed
    {
    public:
        int32_t movespeed; // 0x16e8        
        int32_t damage_amp; // 0x16ec        
        int32_t ally_chicken_movement_speed_bonus_pct; // 0x16f0        
        int32_t m_bIsAlly; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ShadowShaman_Voodoo because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ShadowShaman_Voodoo) == 0x16f8);
};

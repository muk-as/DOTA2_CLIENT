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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_ShadowShaman_Voodoo : public client::CDOTA_Modifier_Hexed
    {
    public:
        int32_t movespeed; // 0x1708        
        int32_t damage_amp; // 0x170c        
        int32_t ally_chicken_movement_speed_bonus_pct; // 0x1710        
        int32_t m_bIsAlly; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ShadowShaman_Voodoo because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ShadowShaman_Voodoo) == 0x1718);
};

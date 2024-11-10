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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Life_Stealer_Feast : public client::CDOTA_Buff
    {
    public:
        float hp_leech_percent; // 0x1708        
        float hp_damage_percent; // 0x170c        
        int32_t creep_deny_percent; // 0x1710        
        int32_t bonus_hp_per_creep; // 0x1714        
        int32_t bonus_hp_per_hero; // 0x1718        
        int32_t m_nTotalBonusHP; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Life_Stealer_Feast because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Life_Stealer_Feast) == 0x1720);
};

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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth : public client::CDOTA_Buff
    {
    public:
        int32_t health_min; // 0x1708        
        int32_t new_max; // 0x170c        
        int32_t health_bonus; // 0x1710        
        int32_t model_scale; // 0x1714        
        int32_t creep_bonus_damage; // 0x1718        
        int32_t creep_bonus_hp_regen; // 0x171c        
        int32_t creep_bonus_mp_regen; // 0x1720        
        int32_t creep_bonus_armor; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth) == 0x1728);
};

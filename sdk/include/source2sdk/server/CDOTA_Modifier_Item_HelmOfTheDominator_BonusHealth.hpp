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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth : public client::CDOTA_Buff
    {
    public:
        int32_t health_min; // 0x16e8        
        int32_t new_max; // 0x16ec        
        int32_t health_bonus; // 0x16f0        
        int32_t model_scale; // 0x16f4        
        int32_t creep_bonus_damage; // 0x16f8        
        int32_t creep_bonus_hp_regen; // 0x16fc        
        int32_t creep_bonus_mp_regen; // 0x1700        
        int32_t creep_bonus_armor; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth) == 0x1708);
};

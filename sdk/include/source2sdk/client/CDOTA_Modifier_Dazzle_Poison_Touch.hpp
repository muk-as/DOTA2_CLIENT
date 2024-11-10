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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Dazzle_Poison_Touch : public client::CDOTA_Buff
    {
    public:
        int32_t slow; // 0x1708        
        float bonus_slow; // 0x170c        
        int32_t bonus_damage; // 0x1710        
        float flAccummulatedBonusSlow; // 0x1714        
        int32_t iAccummulatedBonusDamage; // 0x1718        
        int32_t attack_range_bonus; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Dazzle_Poison_Touch because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Dazzle_Poison_Touch) == 0x1720);
};

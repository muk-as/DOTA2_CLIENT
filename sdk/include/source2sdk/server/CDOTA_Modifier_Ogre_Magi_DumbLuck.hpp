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
    class CDOTA_Modifier_Ogre_Magi_DumbLuck : public client::CDOTA_Buff
    {
    public:
        float mana_per_str; // 0x1708        
        float mana_regen_per_str; // 0x170c        
        float bonus_strength; // 0x1710        
        float bonus_strength_gain; // 0x1714        
        int32_t level_one_ability_points; // 0x1718        
        int32_t level_two_ability_points; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ogre_Magi_DumbLuck because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ogre_Magi_DumbLuck) == 0x1720);
};

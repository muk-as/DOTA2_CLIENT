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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ogre_Magi_DumbLuck : public client::CDOTA_Buff
    {
    public:
        float mana_per_str; // 0x16e8        
        float mana_regen_per_str; // 0x16ec        
        float bonus_strength; // 0x16f0        
        float bonus_strength_gain; // 0x16f4        
        int32_t level_one_ability_points; // 0x16f8        
        int32_t level_two_ability_points; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ogre_Magi_DumbLuck because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ogre_Magi_DumbLuck) == 0x1700);
};

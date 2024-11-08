#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Magnataur_Skewer : public client::C_DOTABaseAbility
    {
    public:
        int32_t skewer_radius; // 0x600        
        int32_t skewer_speed; // 0x604        
        int32_t tree_radius; // 0x608        
        int32_t tree_hit_damage; // 0x60c        
        int32_t cliff_hit_damage; // 0x610        
        int32_t terrain_hit_increase_pct; // 0x614        
        float terrain_hit_cooldown; // 0x618        
        int32_t m_nTargetsHit; // 0x61c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Magnataur_Skewer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Magnataur_Skewer) == 0x620);
};

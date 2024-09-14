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
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Magnataur_Skewer : public client::C_DOTABaseAbility
    {
    public:
        int32_t skewer_radius; // 0x5d8        
        int32_t skewer_speed; // 0x5dc        
        int32_t tree_radius; // 0x5e0        
        int32_t tree_hit_damage; // 0x5e4        
        int32_t cliff_hit_damage; // 0x5e8        
        int32_t terrain_hit_increase_pct; // 0x5ec        
        float terrain_hit_cooldown; // 0x5f0        
        int32_t m_nTargetsHit; // 0x5f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Magnataur_Skewer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Magnataur_Skewer) == 0x5f8);
};

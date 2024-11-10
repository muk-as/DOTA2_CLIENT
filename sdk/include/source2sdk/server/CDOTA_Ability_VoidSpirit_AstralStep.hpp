#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x600
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_VoidSpirit_AstralStep : public server::CDOTABaseAbility
    {
    public:
        Vector m_vStartPos; // 0x5c8        
        Vector m_vDestination; // 0x5d4        
        Vector m_vDirection; // 0x5e0        
        int32_t radius; // 0x5ec        
        int32_t min_travel_distance; // 0x5f0        
        int32_t max_travel_distance; // 0x5f4        
        float debuff_duration; // 0x5f8        
        float pop_damage_delay; // 0x5fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_VoidSpirit_AstralStep because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_VoidSpirit_AstralStep) == 0x600);
};

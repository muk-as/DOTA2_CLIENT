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
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_VoidSpirit_AstralStep : public server::CDOTABaseAbility
    {
    public:
        Vector m_vStartPos; // 0x5a0        
        Vector m_vDestination; // 0x5ac        
        Vector m_vDirection; // 0x5b8        
        int32_t radius; // 0x5c4        
        int32_t min_travel_distance; // 0x5c8        
        int32_t max_travel_distance; // 0x5cc        
        float debuff_duration; // 0x5d0        
        float pop_damage_delay; // 0x5d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_VoidSpirit_AstralStep because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_VoidSpirit_AstralStep) == 0x5d8);
};

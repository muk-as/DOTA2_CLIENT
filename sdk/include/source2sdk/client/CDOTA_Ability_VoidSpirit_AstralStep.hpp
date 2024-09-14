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
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_VoidSpirit_AstralStep : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vStartPos; // 0x5d8        
        Vector m_vDestination; // 0x5e4        
        Vector m_vDirection; // 0x5f0        
        int32_t radius; // 0x5fc        
        int32_t min_travel_distance; // 0x600        
        int32_t max_travel_distance; // 0x604        
        float debuff_duration; // 0x608        
        float pop_damage_delay; // 0x60c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_VoidSpirit_AstralStep because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_VoidSpirit_AstralStep) == 0x610);
};

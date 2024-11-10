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
    // Size: 0x638
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_VoidSpirit_AstralStep : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vStartPos; // 0x600        
        Vector m_vDestination; // 0x60c        
        Vector m_vDirection; // 0x618        
        int32_t radius; // 0x624        
        int32_t min_travel_distance; // 0x628        
        int32_t max_travel_distance; // 0x62c        
        float debuff_duration; // 0x630        
        float pop_damage_delay; // 0x634        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_VoidSpirit_AstralStep because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_VoidSpirit_AstralStep) == 0x638);
};

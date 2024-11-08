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
    // Size: 0x640
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_StormSpirit_BallLightning : public client::C_DOTABaseAbility
    {
    public:
        bool m_bHasAutoRemnantTalent; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x601[0x3]; // 0x601
        float m_fAutoRemnantInterval; // 0x604        
        int32_t ball_lightning_initial_mana_base; // 0x608        
        float ball_lightning_initial_mana_percentage; // 0x60c        
        int32_t ball_lightning_travel_cost_base; // 0x610        
        float ball_lightning_travel_cost_percent; // 0x614        
        int32_t m_iProjectileID; // 0x618        
        Vector m_vStartLocation; // 0x61c        
        Vector m_vProjectileLocation; // 0x628        
        float m_fDistanceAccumulator; // 0x634        
        float m_fTalentDistanceAccumulator; // 0x638        
        int32_t scepter_remnant_interval; // 0x63c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_StormSpirit_BallLightning because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_StormSpirit_BallLightning) == 0x640);
};

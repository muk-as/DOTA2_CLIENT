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
    // Size: 0x618
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_StormSpirit_BallLightning : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5c8[0x10]; // 0x5c8
        bool m_bHasAutoRemnantTalent; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5d9[0x3]; // 0x5d9
        float m_fAutoRemnantInterval; // 0x5dc        
        int32_t ball_lightning_initial_mana_base; // 0x5e0        
        float ball_lightning_initial_mana_percentage; // 0x5e4        
        int32_t ball_lightning_travel_cost_base; // 0x5e8        
        float ball_lightning_travel_cost_percent; // 0x5ec        
        int32_t m_iProjectileID; // 0x5f0        
        Vector m_vStartLocation; // 0x5f4        
        Vector m_vProjectileLocation; // 0x600        
        float m_fDistanceAccumulator; // 0x60c        
        float m_fTalentDistanceAccumulator; // 0x610        
        int32_t scepter_remnant_interval; // 0x614        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_StormSpirit_BallLightning because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_StormSpirit_BallLightning) == 0x618);
};

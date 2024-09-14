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
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_StormSpirit_BallLightning : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5a0[0x10]; // 0x5a0
        bool m_bHasAutoRemnantTalent; // 0x5b0        
        [[maybe_unused]] std::uint8_t pad_0x5b1[0x3]; // 0x5b1
        float m_fAutoRemnantInterval; // 0x5b4        
        int32_t ball_lightning_initial_mana_base; // 0x5b8        
        float ball_lightning_initial_mana_percentage; // 0x5bc        
        int32_t ball_lightning_travel_cost_base; // 0x5c0        
        float ball_lightning_travel_cost_percent; // 0x5c4        
        int32_t m_iProjectileID; // 0x5c8        
        Vector m_vStartLocation; // 0x5cc        
        Vector m_vProjectileLocation; // 0x5d8        
        float m_fDistanceAccumulator; // 0x5e4        
        float m_fTalentDistanceAccumulator; // 0x5e8        
        int32_t scepter_remnant_interval; // 0x5ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_StormSpirit_BallLightning because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_StormSpirit_BallLightning) == 0x5f0);
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_StormSpirit_BallLightning : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            bool m_bHasAutoRemnantTalent; // 0x5b0            
            uint8_t _pad05b1[0x3]; // 0x5b1
            float m_fAutoRemnantInterval; // 0x5b4            
            std::int32_t ball_lightning_initial_mana_base; // 0x5b8            
            float ball_lightning_initial_mana_percentage; // 0x5bc            
            std::int32_t ball_lightning_travel_cost_base; // 0x5c0            
            float ball_lightning_travel_cost_percent; // 0x5c4            
            std::int32_t m_iProjectileID; // 0x5c8            
            Vector m_vStartLocation; // 0x5cc            
            Vector m_vProjectileLocation; // 0x5d8            
            float m_fDistanceAccumulator; // 0x5e4            
            float m_fTalentDistanceAccumulator; // 0x5e8            
            std::int32_t scepter_remnant_interval; // 0x5ec            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_StormSpirit_BallLightning because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_StormSpirit_BallLightning) == 0x5f0);
    };
};

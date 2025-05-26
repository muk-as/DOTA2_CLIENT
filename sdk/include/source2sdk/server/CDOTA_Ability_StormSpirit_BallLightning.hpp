#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x610
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_StormSpirit_BallLightning : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad05c0[0x10]; // 0x5c0
            bool m_bHasAutoRemnantTalent; // 0x5d0            
            uint8_t _pad05d1[0x3]; // 0x5d1
            float m_fAutoRemnantInterval; // 0x5d4            
            std::int32_t ball_lightning_initial_mana_base; // 0x5d8            
            float ball_lightning_initial_mana_percentage; // 0x5dc            
            std::int32_t ball_lightning_travel_cost_base; // 0x5e0            
            float ball_lightning_travel_cost_percent; // 0x5e4            
            std::int32_t m_iProjectileID; // 0x5e8            
            Vector m_vStartLocation; // 0x5ec            
            Vector m_vProjectileLocation; // 0x5f8            
            float m_fDistanceAccumulator; // 0x604            
            float m_fTalentDistanceAccumulator; // 0x608            
            std::int32_t scepter_remnant_interval; // 0x60c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_StormSpirit_BallLightning because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_StormSpirit_BallLightning) == 0x610);
    };
};

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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_StormSpirit_BallLightning : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            bool m_bHasAutoRemnantTalent; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_fAutoRemnantInterval; // 0x_            
            std::int32_t ball_lightning_initial_mana_base; // 0x_            
            float ball_lightning_initial_mana_percentage; // 0x_            
            std::int32_t ball_lightning_travel_cost_base; // 0x_            
            float ball_lightning_travel_cost_percent; // 0x_            
            std::int32_t m_iProjectileID; // 0x_            
            Vector m_vStartLocation; // 0x_            
            Vector m_vProjectileLocation; // 0x_            
            float m_fDistanceAccumulator; // 0x_            
            float m_fTalentDistanceAccumulator; // 0x_            
            std::int32_t scepter_remnant_interval; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_StormSpirit_BallLightning because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_StormSpirit_BallLightning) == 0x_);
    };
};

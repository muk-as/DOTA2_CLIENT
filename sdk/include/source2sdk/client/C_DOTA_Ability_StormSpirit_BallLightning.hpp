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
        // Size: 0x6c0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_StormSpirit_BallLightning : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            bool m_bHasAutoRemnantTalent; // 0x680            
            uint8_t _pad0681[0x3]; // 0x681
            float m_fAutoRemnantInterval; // 0x684            
            std::int32_t ball_lightning_initial_mana_base; // 0x688            
            float ball_lightning_initial_mana_percentage; // 0x68c            
            std::int32_t ball_lightning_travel_cost_base; // 0x690            
            float ball_lightning_travel_cost_percent; // 0x694            
            std::int32_t m_iProjectileID; // 0x698            
            Vector m_vStartLocation; // 0x69c            
            Vector m_vProjectileLocation; // 0x6a8            
            float m_fDistanceAccumulator; // 0x6b4            
            float m_fTalentDistanceAccumulator; // 0x6b8            
            std::int32_t scepter_remnant_interval; // 0x6bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_StormSpirit_BallLightning because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_StormSpirit_BallLightning) == 0x6c0);
    };
};

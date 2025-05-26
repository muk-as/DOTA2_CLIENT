#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x6d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Windrunner_Powershot : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            uint8_t _pad0680[0x14]; // 0x680
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x694            
            float m_fPower; // 0x698            
            std::int32_t m_iProjectile; // 0x69c            
            float damage_reduction; // 0x6a0            
            float arrow_width; // 0x6a4            
            std::int32_t powershot_damage; // 0x6a8            
            float tree_width; // 0x6ac            
            float slow; // 0x6b0            
            float slow_duration; // 0x6b4            
            float min_execute_threshold; // 0x6b8            
            float max_execute_threshold; // 0x6bc            
            bool m_bAwardedKillEater; // 0x6c0            
            uint8_t _pad06c1[0x3]; // 0x6c1
            std::int32_t m_nHeroesHit; // 0x6c4            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6c8            
            uint8_t _pad06cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Windrunner_Powershot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Windrunner_Powershot) == 0x6d0);
    };
};

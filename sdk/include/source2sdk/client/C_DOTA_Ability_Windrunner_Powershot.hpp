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
        // Size: 0x6d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Windrunner_Powershot : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            uint8_t _pad0688[0x14]; // 0x688
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x69c            
            float m_fPower; // 0x6a0            
            std::int32_t m_iProjectile; // 0x6a4            
            float damage_reduction; // 0x6a8            
            float arrow_width; // 0x6ac            
            std::int32_t powershot_damage; // 0x6b0            
            float tree_width; // 0x6b4            
            float slow; // 0x6b8            
            float slow_duration; // 0x6bc            
            float min_execute_threshold; // 0x6c0            
            float max_execute_threshold; // 0x6c4            
            bool m_bAwardedKillEater; // 0x6c8            
            uint8_t _pad06c9[0x3]; // 0x6c9
            std::int32_t m_nHeroesHit; // 0x6cc            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6d0            
            uint8_t _pad06d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Windrunner_Powershot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Windrunner_Powershot) == 0x6d8);
    };
};

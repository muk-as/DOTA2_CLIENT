#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x5f8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Windrunner_Powershot : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad05b8[0x8]; // 0x5b8
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x5c0            
            float m_fPower; // 0x5c4            
            std::int32_t m_iProjectile; // 0x5c8            
            float damage_reduction; // 0x5cc            
            float arrow_width; // 0x5d0            
            std::int32_t powershot_damage; // 0x5d4            
            float tree_width; // 0x5d8            
            float slow; // 0x5dc            
            float slow_duration; // 0x5e0            
            float min_execute_threshold; // 0x5e4            
            float max_execute_threshold; // 0x5e8            
            bool m_bAwardedKillEater; // 0x5ec            
            uint8_t _pad05ed[0x3]; // 0x5ed
            std::int32_t m_nHeroesHit; // 0x5f0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5f4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Windrunner_Powershot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Windrunner_Powershot) == 0x5f8);
    };
};

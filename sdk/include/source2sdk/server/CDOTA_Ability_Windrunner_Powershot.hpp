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
        // Size: 0x610
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Windrunner_Powershot : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad05c0[0x14]; // 0x5c0
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x5d4            
            float m_fPower; // 0x5d8            
            std::int32_t m_iProjectile; // 0x5dc            
            float damage_reduction; // 0x5e0            
            float arrow_width; // 0x5e4            
            std::int32_t powershot_damage; // 0x5e8            
            float tree_width; // 0x5ec            
            float slow; // 0x5f0            
            float slow_duration; // 0x5f4            
            float min_execute_threshold; // 0x5f8            
            float max_execute_threshold; // 0x5fc            
            bool m_bAwardedKillEater; // 0x600            
            uint8_t _pad0601[0x3]; // 0x601
            std::int32_t m_nHeroesHit; // 0x604            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x608            
            uint8_t _pad060c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Windrunner_Powershot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Windrunner_Powershot) == 0x610);
    };
};

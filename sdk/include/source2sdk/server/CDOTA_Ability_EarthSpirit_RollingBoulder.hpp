#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x658
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_EarthSpirit_RollingBoulder : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad05c0[0x10]; // 0x5c0
            std::int32_t radius; // 0x5d0            
            std::int32_t speed; // 0x5d4            
            std::int32_t rock_speed; // 0x5d8            
            std::int32_t damage; // 0x5dc            
            std::int32_t damage_str; // 0x5e0            
            float distance; // 0x5e4            
            float rock_distance; // 0x5e8            
            float rock_distance_multiplier; // 0x5ec            
            float slow_duration; // 0x5f0            
            std::int32_t destroy_stone; // 0x5f4            
            bool can_roll_over_allied_heroes; // 0x5f8            
            uint8_t _pad05f9[0x3]; // 0x5f9
            float allied_hero_multiplier; // 0x5fc            
            float allied_hero_distance; // 0x600            
            float allied_hero_speed; // 0x604            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x608            
            bool m_boulderSetposBool; // 0x60c            
            uint8_t _pad060d[0x3]; // 0x60d
            std::int32_t m_nProjectileID; // 0x610            
            Vector m_vStartingLocation; // 0x614            
            Vector m_vProjectileLocation; // 0x620            
            Vector m_vDir; // 0x62c            
            Vector m_vVel; // 0x638            
            bool m_bUsedStone; // 0x644            
            bool m_bRolledOverAlliedHero; // 0x645            
            uint8_t _pad0646[0x2]; // 0x646
            Vector m_vRollDirection; // 0x648            
            uint8_t _pad0654[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_EarthSpirit_RollingBoulder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_EarthSpirit_RollingBoulder) == 0x658);
    };
};

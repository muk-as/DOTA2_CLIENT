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
        // Size: 0x650
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_EarthSpirit_RollingBoulder : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad05b8[0x10]; // 0x5b8
            std::int32_t radius; // 0x5c8            
            std::int32_t speed; // 0x5cc            
            std::int32_t rock_speed; // 0x5d0            
            std::int32_t damage; // 0x5d4            
            std::int32_t damage_str; // 0x5d8            
            float distance; // 0x5dc            
            float rock_distance; // 0x5e0            
            float rock_distance_multiplier; // 0x5e4            
            float slow_duration; // 0x5e8            
            std::int32_t destroy_stone; // 0x5ec            
            bool can_roll_over_allied_heroes; // 0x5f0            
            uint8_t _pad05f1[0x3]; // 0x5f1
            float allied_hero_multiplier; // 0x5f4            
            float allied_hero_distance; // 0x5f8            
            float allied_hero_speed; // 0x5fc            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x600            
            bool m_boulderSetposBool; // 0x604            
            uint8_t _pad0605[0x3]; // 0x605
            std::int32_t m_nProjectileID; // 0x608            
            Vector m_vStartingLocation; // 0x60c            
            Vector m_vProjectileLocation; // 0x618            
            Vector m_vDir; // 0x624            
            Vector m_vVel; // 0x630            
            bool m_bUsedStone; // 0x63c            
            bool m_bRolledOverAlliedHero; // 0x63d            
            uint8_t _pad063e[0x2]; // 0x63e
            Vector m_vRollDirection; // 0x640            
            uint8_t _pad064c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_EarthSpirit_RollingBoulder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_EarthSpirit_RollingBoulder) == 0x650);
    };
};

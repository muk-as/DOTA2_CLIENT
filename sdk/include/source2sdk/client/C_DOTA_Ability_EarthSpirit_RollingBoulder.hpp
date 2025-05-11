#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x638
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_EarthSpirit_RollingBoulder : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t radius; // 0x5b0            
            std::int32_t speed; // 0x5b4            
            std::int32_t rock_speed; // 0x5b8            
            std::int32_t damage; // 0x5bc            
            std::int32_t damage_str; // 0x5c0            
            float distance; // 0x5c4            
            float rock_distance; // 0x5c8            
            float rock_distance_multiplier; // 0x5cc            
            float slow_duration; // 0x5d0            
            std::int32_t destroy_stone; // 0x5d4            
            bool can_roll_over_allied_heroes; // 0x5d8            
            uint8_t _pad05d9[0x3]; // 0x5d9
            float allied_hero_multiplier; // 0x5dc            
            float allied_hero_distance; // 0x5e0            
            float allied_hero_speed; // 0x5e4            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5e8            
            bool m_boulderSetposBool; // 0x5ec            
            uint8_t _pad05ed[0x3]; // 0x5ed
            std::int32_t m_nProjectileID; // 0x5f0            
            Vector m_vStartingLocation; // 0x5f4            
            Vector m_vProjectileLocation; // 0x600            
            Vector m_vDir; // 0x60c            
            Vector m_vVel; // 0x618            
            bool m_bUsedStone; // 0x624            
            bool m_bRolledOverAlliedHero; // 0x625            
            uint8_t _pad0626[0x2]; // 0x626
            Vector m_vRollDirection; // 0x628            
            uint8_t _pad0634[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_EarthSpirit_RollingBoulder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_EarthSpirit_RollingBoulder) == 0x638);
    };
};

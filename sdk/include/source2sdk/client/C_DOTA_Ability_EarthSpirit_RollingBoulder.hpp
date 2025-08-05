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
        // Size: 0x710
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_EarthSpirit_RollingBoulder : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t radius; // 0x688            
            std::int32_t speed; // 0x68c            
            std::int32_t rock_speed; // 0x690            
            std::int32_t damage; // 0x694            
            std::int32_t damage_str; // 0x698            
            float distance; // 0x69c            
            float rock_distance; // 0x6a0            
            float rock_distance_multiplier; // 0x6a4            
            float slow_duration; // 0x6a8            
            std::int32_t destroy_stone; // 0x6ac            
            bool can_roll_over_allied_heroes; // 0x6b0            
            uint8_t _pad06b1[0x3]; // 0x6b1
            float allied_hero_multiplier; // 0x6b4            
            float allied_hero_distance; // 0x6b8            
            float allied_hero_speed; // 0x6bc            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6c0            
            bool m_boulderSetposBool; // 0x6c4            
            uint8_t _pad06c5[0x3]; // 0x6c5
            std::int32_t m_nProjectileID; // 0x6c8            
            Vector m_vStartingLocation; // 0x6cc            
            Vector m_vProjectileLocation; // 0x6d8            
            Vector m_vDir; // 0x6e4            
            Vector m_vVel; // 0x6f0            
            bool m_bUsedStone; // 0x6fc            
            bool m_bRolledOverAlliedHero; // 0x6fd            
            uint8_t _pad06fe[0x2]; // 0x6fe
            Vector m_vRollDirection; // 0x700            
            uint8_t _pad070c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_EarthSpirit_RollingBoulder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_EarthSpirit_RollingBoulder) == 0x710);
    };
};

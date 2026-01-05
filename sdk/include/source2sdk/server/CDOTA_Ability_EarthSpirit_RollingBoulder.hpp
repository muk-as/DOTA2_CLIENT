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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_EarthSpirit_RollingBoulder : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t radius; // 0x_            
            std::int32_t speed; // 0x_            
            std::int32_t rock_speed; // 0x_            
            std::int32_t damage; // 0x_            
            std::int32_t damage_str; // 0x_            
            float distance; // 0x_            
            float rock_distance; // 0x_            
            float rock_distance_multiplier; // 0x_            
            float slow_duration; // 0x_            
            std::int32_t destroy_stone; // 0x_            
            bool can_roll_over_allied_heroes; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float allied_hero_distance; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            bool m_boulderSetposBool; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nProjectileID; // 0x_            
            Vector m_vStartingLocation; // 0x_            
            Vector m_vProjectileLocation; // 0x_            
            Vector m_vDir; // 0x_            
            Vector m_vVel; // 0x_            
            bool m_bUsedStone; // 0x_            
            bool m_bRolledOverAlliedHero; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vRollDirection; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_EarthSpirit_RollingBoulder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_EarthSpirit_RollingBoulder) == 0x_);
    };
};

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
        // Size: 0x668
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Grimstroke_DarkArtistry : public source2sdk::server::CDOTABaseAbility
        {
        public:
            Vector m_vCastDir; // 0x5b8            
            Vector m_vVectorTargetEndpoint; // 0x5c4            
            Vector m_vStartLoc; // 0x5d0            
            Vector m_vCursorPosition; // 0x5dc            
            Vector m_vVectorCastTargetDirection; // 0x5e8            
            bool vector_stroke; // 0x5f4            
            uint8_t _pad05f5[0x3]; // 0x5f5
            float m_fTimeRemaining; // 0x5f8            
            bool m_bHasDoneInitialTurn; // 0x5fc            
            bool m_bReachedFinalVelocity; // 0x5fd            
            uint8_t _pad05fe[0x2]; // 0x5fe
            std::int32_t vector_distance_to_start_force_turning; // 0x600            
            float vector_acceptable_radian_to_snap_velocity; // 0x604            
            std::int32_t vector_deg_turn_max; // 0x608            
            bool m_bClockwise; // 0x60c            
            uint8_t _pad060d[0x3]; // 0x60d
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x610            
            float m_fTotalTime; // 0x614            
            std::int32_t m_nProjectileID; // 0x618            
            Vector m_vProjectileDir; // 0x61c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x628            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x62c            
            std::int32_t m_nTargetsHit; // 0x630            
            std::int32_t m_nHeroesHit; // 0x634            
            std::int32_t m_nVisibleHeroesHit; // 0x638            
            float m_fDmgMultiplierTalent; // 0x63c            
            uint8_t _pad0640[0x8]; // 0x640
            float projectile_speed; // 0x648            
            float slow_duration; // 0x64c            
            float start_radius; // 0x650            
            float end_radius; // 0x654            
            float damage; // 0x658            
            float bonus_damage_per_target; // 0x65c            
            float vector_deg_turn_divisor; // 0x660            
            float vision_duration; // 0x664            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Grimstroke_DarkArtistry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Grimstroke_DarkArtistry) == 0x668);
    };
};

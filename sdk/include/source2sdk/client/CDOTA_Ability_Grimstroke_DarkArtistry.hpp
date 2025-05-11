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
        // Size: 0x660
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Grimstroke_DarkArtistry : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vCastDir; // 0x5b0            
            Vector m_vVectorTargetEndpoint; // 0x5bc            
            Vector m_vStartLoc; // 0x5c8            
            Vector m_vCursorPosition; // 0x5d4            
            Vector m_vVectorCastTargetDirection; // 0x5e0            
            bool vector_stroke; // 0x5ec            
            uint8_t _pad05ed[0x3]; // 0x5ed
            float m_fTimeRemaining; // 0x5f0            
            bool m_bHasDoneInitialTurn; // 0x5f4            
            bool m_bReachedFinalVelocity; // 0x5f5            
            uint8_t _pad05f6[0x2]; // 0x5f6
            std::int32_t vector_distance_to_start_force_turning; // 0x5f8            
            float vector_acceptable_radian_to_snap_velocity; // 0x5fc            
            std::int32_t vector_deg_turn_max; // 0x600            
            bool m_bClockwise; // 0x604            
            uint8_t _pad0605[0x3]; // 0x605
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x608            
            float m_fTotalTime; // 0x60c            
            std::int32_t m_nProjectileID; // 0x610            
            Vector m_vProjectileDir; // 0x614            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x620            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x624            
            std::int32_t m_nTargetsHit; // 0x628            
            std::int32_t m_nHeroesHit; // 0x62c            
            std::int32_t m_nVisibleHeroesHit; // 0x630            
            float m_fDmgMultiplierTalent; // 0x634            
            float projectile_speed; // 0x638            
            float slow_duration; // 0x63c            
            float start_radius; // 0x640            
            float end_radius; // 0x644            
            float damage; // 0x648            
            float bonus_damage_per_target; // 0x64c            
            float vector_deg_turn_divisor; // 0x650            
            float vision_duration; // 0x654            
            source2sdk::client::ParticleIndex_t m_nCurvePathPreviewFXIndex; // 0x658            
            uint8_t _pad065c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Grimstroke_DarkArtistry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Grimstroke_DarkArtistry) == 0x660);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x6b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Grimstroke_DarkArtistry : public source2sdk::server::CDOTABaseAbility
        {
        public:
            Vector m_vCastDir; // 0x5c0            
            Vector m_vVectorTargetEndpoint; // 0x5cc            
            Vector m_vStartLoc; // 0x5d8            
            Vector m_vCursorPosition; // 0x5e4            
            Vector m_vVectorCastTargetDirection; // 0x5f0            
            float m_fTimeRemaining; // 0x5fc            
            std::int32_t vector_distance_to_start_force_turning; // 0x600            
            float vector_acceptable_radian_to_snap_velocity; // 0x604            
            std::int32_t vector_deg_turn_max; // 0x608            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x60c            
            float m_fTotalTime; // 0x610            
            std::int32_t m_nProjectileID; // 0x614            
            Vector m_vProjectileDir; // 0x618            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x624            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x628            
            uint8_t _pad062c[0x4]; // 0x62c
            // m_hTargetsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTargetsHit;
            char m_hTargetsHit[0x18]; // 0x630            
            std::int32_t m_nTargetsHit; // 0x648            
            std::int32_t m_nTargetHeroesHit; // 0x64c            
            std::int32_t m_nRealHeroesHit; // 0x650            
            std::int32_t m_nVisibleHeroesHit; // 0x654            
            float m_fDmgMultiplierTalent; // 0x658            
            uint8_t _pad065c[0x14]; // 0x65c
            float projectile_speed; // 0x670            
            float slow_duration; // 0x674            
            float start_radius; // 0x678            
            float end_radius; // 0x67c            
            float damage; // 0x680            
            float bonus_damage_per_hero; // 0x684            
            float bonus_damage_per_creep; // 0x688            
            float vector_deg_turn_divisor; // 0x68c            
            float vision_duration; // 0x690            
            uint8_t _pad0694[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Grimstroke_DarkArtistry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Grimstroke_DarkArtistry) == 0x6b0);
    };
};

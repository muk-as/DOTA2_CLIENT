#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x768
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Grimstroke_DarkArtistry : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vCastDir; // 0x688            
            Vector m_vVectorTargetEndpoint; // 0x694            
            Vector m_vStartLoc; // 0x6a0            
            Vector m_vCursorPosition; // 0x6ac            
            Vector m_vVectorCastTargetDirection; // 0x6b8            
            float m_fTimeRemaining; // 0x6c4            
            std::int32_t vector_distance_to_start_force_turning; // 0x6c8            
            float vector_acceptable_radian_to_snap_velocity; // 0x6cc            
            std::int32_t vector_deg_turn_max; // 0x6d0            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x6d4            
            float m_fTotalTime; // 0x6d8            
            std::int32_t m_nProjectileID; // 0x6dc            
            Vector m_vProjectileDir; // 0x6e0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6ec            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x6f0            
            uint8_t _pad06f4[0x4]; // 0x6f4
            // m_hTargetsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hTargetsHit;
            char m_hTargetsHit[0x18]; // 0x6f8            
            std::int32_t m_nTargetsHit; // 0x710            
            std::int32_t m_nTargetHeroesHit; // 0x714            
            std::int32_t m_nRealHeroesHit; // 0x718            
            std::int32_t m_nVisibleHeroesHit; // 0x71c            
            float m_fDmgMultiplierTalent; // 0x720            
            float projectile_speed; // 0x724            
            float slow_duration; // 0x728            
            float start_radius; // 0x72c            
            float end_radius; // 0x730            
            float damage; // 0x734            
            float bonus_damage_per_hero; // 0x738            
            float bonus_damage_per_creep; // 0x73c            
            float vector_deg_turn_divisor; // 0x740            
            float vision_duration; // 0x744            
            source2sdk::client::ParticleIndex_t m_nCurvePathPreviewFXIndex; // 0x748            
            source2sdk::client::ParticleIndex_t m_nReflectedCurvePathPreviewFXIndex; // 0x74c            
            uint8_t _pad0750[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Grimstroke_DarkArtistry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Grimstroke_DarkArtistry) == 0x768);
    };
};

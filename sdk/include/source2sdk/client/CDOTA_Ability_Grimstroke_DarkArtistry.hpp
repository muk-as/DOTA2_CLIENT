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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Grimstroke_DarkArtistry : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vCastDir; // 0x_            
            Vector m_vVectorTargetEndpoint; // 0x_            
            Vector m_vStartLoc; // 0x_            
            Vector m_vCursorPosition; // 0x_            
            Vector m_vVectorCastTargetDirection; // 0x_            
            float m_fTimeRemaining; // 0x_            
            std::int32_t vector_distance_to_start_force_turning; // 0x_            
            float vector_acceptable_radian_to_snap_velocity; // 0x_            
            std::int32_t vector_deg_turn_max; // 0x_            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x_            
            float m_fTotalTime; // 0x_            
            std::int32_t m_nProjectileID; // 0x_            
            Vector m_vProjectileDir; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hTargetsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hTargetsHit;
            char m_hTargetsHit[0x_]; // 0x_            
            std::int32_t m_nTargetsHit; // 0x_            
            std::int32_t m_nTargetHeroesHit; // 0x_            
            std::int32_t m_nRealHeroesHit; // 0x_            
            std::int32_t m_nVisibleHeroesHit; // 0x_            
            float m_fDmgMultiplierTalent; // 0x_            
            float projectile_speed; // 0x_            
            float slow_duration; // 0x_            
            float start_radius; // 0x_            
            float end_radius; // 0x_            
            float damage; // 0x_            
            float bonus_damage_per_hero; // 0x_            
            float bonus_damage_per_creep; // 0x_            
            float vector_deg_turn_divisor; // 0x_            
            float vision_duration; // 0x_            
            source2sdk::client::ParticleIndex_t m_nCurvePathPreviewFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nReflectedCurvePathPreviewFXIndex; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Grimstroke_DarkArtistry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Grimstroke_DarkArtistry) == 0x_);
    };
};

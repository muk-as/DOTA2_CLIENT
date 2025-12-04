#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_Penguin : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fLifetimeGained; // 0x_            
            Vector m_vTargetPos; // 0x_            
            std::int32_t m_nCurrentSpeed; // 0x_            
            source2sdk::entity2::GameTime_t m_fLastBumpTime; // 0x_            
            Vector m_vLastPos; // 0x_            
            // m_hLastHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastHit;
            char m_hLastHit[0x_]; // 0x_            
            Vector m_vDir; // 0x_            
            Vector m_vRunEndPos; // 0x_            
            bool m_bIsInInitialRun; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vJumpEndPos; // 0x_            
            bool m_bPlayedVroomSinceLastCrash; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ParticleIndex_t m_nVroomFX; // 0x_            
            source2sdk::entity2::GameTime_t m_fLastSpeedStepTime; // 0x_            
            source2sdk::entity2::GameTime_t m_fLastSpeechTime; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x_            
            std::int32_t m_nBumpsSinceLastCrash; // 0x_            
            // m_hLastBumpingHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastBumpingHero;
            char m_hLastBumpingHero[0x_]; // 0x_            
            std::int32_t initial_speed; // 0x_            
            std::int32_t max_speed; // 0x_            
            std::int32_t speed_step; // 0x_            
            float speed_step_interval; // 0x_            
            float bump_delay; // 0x_            
            float bump_delay_absolute; // 0x_            
            std::int32_t bump_collision_radius; // 0x_            
            std::int32_t run_distance; // 0x_            
            std::int32_t jump_distance; // 0x_            
            std::int32_t speed_after_crash; // 0x_            
            std::int32_t speed_gain_per_hero_bump; // 0x_            
            float max_gainable_lifetime; // 0x_            
            float lifetime_gain_per_hero_bump; // 0x_            
            float min_speech_repeat_time; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_Penguin because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Seasonal_Penguin) == 0x_);
    };
};

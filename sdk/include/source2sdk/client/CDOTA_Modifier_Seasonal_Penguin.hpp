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
        // Size: 0x1920
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_Penguin : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fLifetimeGained; // 0x1878            
            Vector m_vTargetPos; // 0x187c            
            std::int32_t m_nCurrentSpeed; // 0x1888            
            source2sdk::entity2::GameTime_t m_fLastBumpTime; // 0x188c            
            Vector m_vLastPos; // 0x1890            
            // m_hLastHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastHit;
            char m_hLastHit[0x4]; // 0x189c            
            Vector m_vDir; // 0x18a0            
            Vector m_vRunEndPos; // 0x18ac            
            bool m_bIsInInitialRun; // 0x18b8            
            uint8_t _pad18b9[0x3]; // 0x18b9
            Vector m_vJumpEndPos; // 0x18bc            
            bool m_bPlayedVroomSinceLastCrash; // 0x18c8            
            uint8_t _pad18c9[0x3]; // 0x18c9
            source2sdk::client::ParticleIndex_t m_nVroomFX; // 0x18cc            
            source2sdk::entity2::GameTime_t m_fLastSpeedStepTime; // 0x18d0            
            source2sdk::entity2::GameTime_t m_fLastSpeechTime; // 0x18d4            
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x18d8            
            std::int32_t m_nBumpsSinceLastCrash; // 0x18dc            
            // m_hLastBumpingHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastBumpingHero;
            char m_hLastBumpingHero[0x4]; // 0x18e0            
            std::int32_t initial_speed; // 0x18e4            
            std::int32_t max_speed; // 0x18e8            
            std::int32_t speed_step; // 0x18ec            
            float speed_step_interval; // 0x18f0            
            float bump_delay; // 0x18f4            
            float bump_delay_absolute; // 0x18f8            
            std::int32_t bump_collision_radius; // 0x18fc            
            std::int32_t run_distance; // 0x1900            
            std::int32_t jump_distance; // 0x1904            
            std::int32_t speed_after_crash; // 0x1908            
            std::int32_t speed_gain_per_hero_bump; // 0x190c            
            float max_gainable_lifetime; // 0x1910            
            float lifetime_gain_per_hero_bump; // 0x1914            
            float min_speech_repeat_time; // 0x1918            
            uint8_t _pad191c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_Penguin because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Seasonal_Penguin) == 0x1920);
    };
};

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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_Penguin : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fLifetimeGained; // 0x17f8            
            Vector m_vTargetPos; // 0x17fc            
            std::int32_t m_nCurrentSpeed; // 0x1808            
            source2sdk::entity2::GameTime_t m_fLastBumpTime; // 0x180c            
            Vector m_vLastPos; // 0x1810            
            // m_hLastHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastHit;
            char m_hLastHit[0x4]; // 0x181c            
            Vector m_vDir; // 0x1820            
            Vector m_vRunEndPos; // 0x182c            
            bool m_bIsInInitialRun; // 0x1838            
            uint8_t _pad1839[0x3]; // 0x1839
            Vector m_vJumpEndPos; // 0x183c            
            bool m_bPlayedVroomSinceLastCrash; // 0x1848            
            uint8_t _pad1849[0x3]; // 0x1849
            source2sdk::client::ParticleIndex_t m_nVroomFX; // 0x184c            
            source2sdk::entity2::GameTime_t m_fLastSpeedStepTime; // 0x1850            
            source2sdk::entity2::GameTime_t m_fLastSpeechTime; // 0x1854            
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x1858            
            std::int32_t m_nBumpsSinceLastCrash; // 0x185c            
            // m_hLastBumpingHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastBumpingHero;
            char m_hLastBumpingHero[0x4]; // 0x1860            
            std::int32_t initial_speed; // 0x1864            
            std::int32_t max_speed; // 0x1868            
            std::int32_t speed_step; // 0x186c            
            float speed_step_interval; // 0x1870            
            float bump_delay; // 0x1874            
            float bump_delay_absolute; // 0x1878            
            std::int32_t bump_collision_radius; // 0x187c            
            std::int32_t run_distance; // 0x1880            
            std::int32_t jump_distance; // 0x1884            
            std::int32_t speed_after_crash; // 0x1888            
            std::int32_t speed_gain_per_hero_bump; // 0x188c            
            float max_gainable_lifetime; // 0x1890            
            float lifetime_gain_per_hero_bump; // 0x1894            
            float min_speech_repeat_time; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_Penguin because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Seasonal_Penguin) == 0x18a0);
    };
};

#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1790
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Seasonal_Penguin : public client::CDOTA_Buff
    {
    public:
        float m_fLifetimeGained; // 0x16e8        
        Vector m_vTargetPos; // 0x16ec        
        int32_t m_nCurrentSpeed; // 0x16f8        
        entity2::GameTime_t m_fLastBumpTime; // 0x16fc        
        Vector m_vLastPos; // 0x1700        
        // m_hLastHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastHit;
        char m_hLastHit[0x4]; // 0x170c        
        Vector m_vDir; // 0x1710        
        Vector m_vRunEndPos; // 0x171c        
        bool m_bIsInInitialRun; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1729[0x3]; // 0x1729
        Vector m_vJumpEndPos; // 0x172c        
        bool m_bPlayedVroomSinceLastCrash; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x1739[0x3]; // 0x1739
        client::ParticleIndex_t m_nVroomFX; // 0x173c        
        entity2::GameTime_t m_fLastSpeedStepTime; // 0x1740        
        entity2::GameTime_t m_fLastSpeechTime; // 0x1744        
        client::ParticleIndex_t m_nFXStackIndex; // 0x1748        
        int32_t m_nBumpsSinceLastCrash; // 0x174c        
        // m_hLastBumpingHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastBumpingHero;
        char m_hLastBumpingHero[0x4]; // 0x1750        
        int32_t initial_speed; // 0x1754        
        int32_t max_speed; // 0x1758        
        int32_t speed_step; // 0x175c        
        float speed_step_interval; // 0x1760        
        float bump_delay; // 0x1764        
        float bump_delay_absolute; // 0x1768        
        int32_t bump_collision_radius; // 0x176c        
        int32_t run_distance; // 0x1770        
        int32_t jump_distance; // 0x1774        
        int32_t speed_after_crash; // 0x1778        
        int32_t speed_gain_per_hero_bump; // 0x177c        
        float max_gainable_lifetime; // 0x1780        
        float lifetime_gain_per_hero_bump; // 0x1784        
        float min_speech_repeat_time; // 0x1788        
        [[maybe_unused]] std::uint8_t pad_0x178c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_Penguin because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_Penguin) == 0x1790);
};

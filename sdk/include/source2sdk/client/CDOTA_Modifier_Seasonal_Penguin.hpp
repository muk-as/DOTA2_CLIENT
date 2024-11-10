#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x17b0
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Seasonal_Penguin : public client::CDOTA_Buff
    {
    public:
        float m_fLifetimeGained; // 0x1708        
        Vector m_vTargetPos; // 0x170c        
        int32_t m_nCurrentSpeed; // 0x1718        
        entity2::GameTime_t m_fLastBumpTime; // 0x171c        
        Vector m_vLastPos; // 0x1720        
        // m_hLastHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastHit;
        char m_hLastHit[0x4]; // 0x172c        
        Vector m_vDir; // 0x1730        
        Vector m_vRunEndPos; // 0x173c        
        bool m_bIsInInitialRun; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x1749[0x3]; // 0x1749
        Vector m_vJumpEndPos; // 0x174c        
        bool m_bPlayedVroomSinceLastCrash; // 0x1758        
        [[maybe_unused]] std::uint8_t pad_0x1759[0x3]; // 0x1759
        client::ParticleIndex_t m_nVroomFX; // 0x175c        
        entity2::GameTime_t m_fLastSpeedStepTime; // 0x1760        
        entity2::GameTime_t m_fLastSpeechTime; // 0x1764        
        client::ParticleIndex_t m_nFXStackIndex; // 0x1768        
        int32_t m_nBumpsSinceLastCrash; // 0x176c        
        // m_hLastBumpingHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastBumpingHero;
        char m_hLastBumpingHero[0x4]; // 0x1770        
        int32_t initial_speed; // 0x1774        
        int32_t max_speed; // 0x1778        
        int32_t speed_step; // 0x177c        
        float speed_step_interval; // 0x1780        
        float bump_delay; // 0x1784        
        float bump_delay_absolute; // 0x1788        
        int32_t bump_collision_radius; // 0x178c        
        int32_t run_distance; // 0x1790        
        int32_t jump_distance; // 0x1794        
        int32_t speed_after_crash; // 0x1798        
        int32_t speed_gain_per_hero_bump; // 0x179c        
        float max_gainable_lifetime; // 0x17a0        
        float lifetime_gain_per_hero_bump; // 0x17a4        
        float min_speech_repeat_time; // 0x17a8        
        [[maybe_unused]] std::uint8_t pad_0x17ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_Penguin because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_Penguin) == 0x17b0);
};

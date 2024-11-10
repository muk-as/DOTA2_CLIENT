#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x678
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Grimstroke_DarkArtistry : public server::CDOTABaseAbility
    {
    public:
        Vector m_vCastDir; // 0x5c8        
        Vector m_vVectorTargetEndpoint; // 0x5d4        
        Vector m_vStartLoc; // 0x5e0        
        Vector m_vCursorPosition; // 0x5ec        
        Vector m_vVectorCastTargetDirection; // 0x5f8        
        bool vector_stroke; // 0x604        
        [[maybe_unused]] std::uint8_t pad_0x605[0x3]; // 0x605
        float m_fTimeRemaining; // 0x608        
        bool m_bHasDoneInitialTurn; // 0x60c        
        bool m_bReachedFinalVelocity; // 0x60d        
        [[maybe_unused]] std::uint8_t pad_0x60e[0x2]; // 0x60e
        int32_t vector_distance_to_start_force_turning; // 0x610        
        float vector_acceptable_radian_to_snap_velocity; // 0x614        
        int32_t vector_deg_turn_max; // 0x618        
        bool m_bClockwise; // 0x61c        
        [[maybe_unused]] std::uint8_t pad_0x61d[0x3]; // 0x61d
        entity2::GameTime_t m_fStartTime; // 0x620        
        float m_fTotalTime; // 0x624        
        int32_t m_nProjectileID; // 0x628        
        Vector m_vProjectileDir; // 0x62c        
        client::ParticleIndex_t m_nFXIndex; // 0x638        
        client::ParticleIndex_t m_nFXIndexB; // 0x63c        
        int32_t m_nTargetsHit; // 0x640        
        int32_t m_nHeroesHit; // 0x644        
        int32_t m_nVisibleHeroesHit; // 0x648        
        float m_fDmgMultiplierTalent; // 0x64c        
        [[maybe_unused]] std::uint8_t pad_0x650[0x8]; // 0x650
        int32_t projectile_speed; // 0x658        
        float slow_duration; // 0x65c        
        int32_t start_radius; // 0x660        
        int32_t end_radius; // 0x664        
        int32_t damage; // 0x668        
        float bonus_damage_per_target; // 0x66c        
        float vector_deg_turn_divisor; // 0x670        
        float vision_duration; // 0x674        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Grimstroke_DarkArtistry because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Grimstroke_DarkArtistry) == 0x678);
};

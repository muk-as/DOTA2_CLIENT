#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x680
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Grimstroke_DarkArtistry : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vCastDir; // 0x5d8        
        Vector m_vVectorTargetEndpoint; // 0x5e4        
        Vector m_vStartLoc; // 0x5f0        
        Vector m_vCursorPosition; // 0x5fc        
        Vector m_vVectorCastTargetDirection; // 0x608        
        bool vector_stroke; // 0x614        
        [[maybe_unused]] std::uint8_t pad_0x615[0x3]; // 0x615
        float m_fTimeRemaining; // 0x618        
        bool m_bHasDoneInitialTurn; // 0x61c        
        bool m_bReachedFinalVelocity; // 0x61d        
        [[maybe_unused]] std::uint8_t pad_0x61e[0x2]; // 0x61e
        int32_t vector_distance_to_start_force_turning; // 0x620        
        float vector_acceptable_radian_to_snap_velocity; // 0x624        
        int32_t vector_deg_turn_max; // 0x628        
        bool m_bClockwise; // 0x62c        
        [[maybe_unused]] std::uint8_t pad_0x62d[0x3]; // 0x62d
        entity2::GameTime_t m_fStartTime; // 0x630        
        float m_fTotalTime; // 0x634        
        int32_t m_nProjectileID; // 0x638        
        Vector m_vProjectileDir; // 0x63c        
        client::ParticleIndex_t m_nFXIndex; // 0x648        
        client::ParticleIndex_t m_nFXIndexB; // 0x64c        
        int32_t m_nTargetsHit; // 0x650        
        int32_t m_nHeroesHit; // 0x654        
        int32_t m_nVisibleHeroesHit; // 0x658        
        float m_fDmgMultiplierTalent; // 0x65c        
        int32_t projectile_speed; // 0x660        
        float slow_duration; // 0x664        
        int32_t start_radius; // 0x668        
        int32_t end_radius; // 0x66c        
        int32_t damage; // 0x670        
        float bonus_damage_per_target; // 0x674        
        float vector_deg_turn_divisor; // 0x678        
        float vision_duration; // 0x67c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Grimstroke_DarkArtistry because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Grimstroke_DarkArtistry) == 0x680);
};

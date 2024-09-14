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
    // Size: 0x650
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Grimstroke_DarkArtistry : public server::CDOTABaseAbility
    {
    public:
        Vector m_vCastDir; // 0x5a0        
        Vector m_vVectorTargetEndpoint; // 0x5ac        
        Vector m_vStartLoc; // 0x5b8        
        Vector m_vCursorPosition; // 0x5c4        
        Vector m_vVectorCastTargetDirection; // 0x5d0        
        bool vector_stroke; // 0x5dc        
        [[maybe_unused]] std::uint8_t pad_0x5dd[0x3]; // 0x5dd
        float m_fTimeRemaining; // 0x5e0        
        bool m_bHasDoneInitialTurn; // 0x5e4        
        bool m_bReachedFinalVelocity; // 0x5e5        
        [[maybe_unused]] std::uint8_t pad_0x5e6[0x2]; // 0x5e6
        int32_t vector_distance_to_start_force_turning; // 0x5e8        
        float vector_acceptable_radian_to_snap_velocity; // 0x5ec        
        int32_t vector_deg_turn_max; // 0x5f0        
        bool m_bClockwise; // 0x5f4        
        [[maybe_unused]] std::uint8_t pad_0x5f5[0x3]; // 0x5f5
        entity2::GameTime_t m_fStartTime; // 0x5f8        
        float m_fTotalTime; // 0x5fc        
        int32_t m_nProjectileID; // 0x600        
        Vector m_vProjectileDir; // 0x604        
        client::ParticleIndex_t m_nFXIndex; // 0x610        
        client::ParticleIndex_t m_nFXIndexB; // 0x614        
        int32_t m_nTargetsHit; // 0x618        
        int32_t m_nHeroesHit; // 0x61c        
        int32_t m_nVisibleHeroesHit; // 0x620        
        float m_fDmgMultiplierTalent; // 0x624        
        [[maybe_unused]] std::uint8_t pad_0x628[0x8]; // 0x628
        int32_t projectile_speed; // 0x630        
        float slow_duration; // 0x634        
        int32_t start_radius; // 0x638        
        int32_t end_radius; // 0x63c        
        int32_t damage; // 0x640        
        float bonus_damage_per_target; // 0x644        
        float vector_deg_turn_divisor; // 0x648        
        float vision_duration; // 0x64c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Grimstroke_DarkArtistry because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Grimstroke_DarkArtistry) == 0x650);
};

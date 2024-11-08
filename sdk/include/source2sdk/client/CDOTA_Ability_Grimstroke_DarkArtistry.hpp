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
    // Size: 0x6a8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Grimstroke_DarkArtistry : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vCastDir; // 0x600        
        Vector m_vVectorTargetEndpoint; // 0x60c        
        Vector m_vStartLoc; // 0x618        
        Vector m_vCursorPosition; // 0x624        
        Vector m_vVectorCastTargetDirection; // 0x630        
        bool vector_stroke; // 0x63c        
        [[maybe_unused]] std::uint8_t pad_0x63d[0x3]; // 0x63d
        float m_fTimeRemaining; // 0x640        
        bool m_bHasDoneInitialTurn; // 0x644        
        bool m_bReachedFinalVelocity; // 0x645        
        [[maybe_unused]] std::uint8_t pad_0x646[0x2]; // 0x646
        int32_t vector_distance_to_start_force_turning; // 0x648        
        float vector_acceptable_radian_to_snap_velocity; // 0x64c        
        int32_t vector_deg_turn_max; // 0x650        
        bool m_bClockwise; // 0x654        
        [[maybe_unused]] std::uint8_t pad_0x655[0x3]; // 0x655
        entity2::GameTime_t m_fStartTime; // 0x658        
        float m_fTotalTime; // 0x65c        
        int32_t m_nProjectileID; // 0x660        
        Vector m_vProjectileDir; // 0x664        
        client::ParticleIndex_t m_nFXIndex; // 0x670        
        client::ParticleIndex_t m_nFXIndexB; // 0x674        
        int32_t m_nTargetsHit; // 0x678        
        int32_t m_nHeroesHit; // 0x67c        
        int32_t m_nVisibleHeroesHit; // 0x680        
        float m_fDmgMultiplierTalent; // 0x684        
        int32_t projectile_speed; // 0x688        
        float slow_duration; // 0x68c        
        int32_t start_radius; // 0x690        
        int32_t end_radius; // 0x694        
        int32_t damage; // 0x698        
        float bonus_damage_per_target; // 0x69c        
        float vector_deg_turn_divisor; // 0x6a0        
        float vision_duration; // 0x6a4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Grimstroke_DarkArtistry because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Grimstroke_DarkArtistry) == 0x6a8);
};

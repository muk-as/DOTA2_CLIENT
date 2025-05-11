#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x658
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Dawnbreaker_Celestial_Hammer : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t m_nProjectileIndex; // 0x5b0            
            std::int32_t m_nReturnProjectileID; // 0x5b4            
            Vector m_vEndLocation; // 0x5b8            
            float m_fZCoord; // 0x5c4            
            Vector m_vLastTrailThinkerLocation; // 0x5c8            
            bool m_bFlareDone; // 0x5d4            
            bool m_bStartedCatchAnimation; // 0x5d5            
            bool m_bIsReturning; // 0x5d6            
            uint8_t _pad05d7[0x1]; // 0x5d7
            // m_hReturnHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hReturnHits;
            char m_hReturnHits[0x18]; // 0x5d8            
            // m_hAoEHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hAoEHits;
            char m_hAoEHits[0x18]; // 0x5f0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x608            
            source2sdk::client::ParticleIndex_t m_nFXIndexC; // 0x60c            
            source2sdk::client::ParticleIndex_t m_nFXHammerReturnIndex; // 0x610            
            source2sdk::client::ParticleIndex_t m_nFXHammerProjectileIndex; // 0x614            
            source2sdk::client::ParticleIndex_t m_nFXHeroSolarGuardianTrailIndex; // 0x618            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x61c            
            float projectile_speed; // 0x620            
            float projectile_radius; // 0x624            
            float hammer_damage; // 0x628            
            float hammer_aoe_radius; // 0x62c            
            float flare_radius; // 0x630            
            float fire_trail_health_regen; // 0x634            
            bool bHasStartedBurning; // 0x638            
            uint8_t _pad0639[0x3]; // 0x639
            float flare_debuff_duration; // 0x63c            
            std::int32_t return_anim_distance_threshold; // 0x640            
            float range; // 0x644            
            uint8_t _pad0648[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Dawnbreaker_Celestial_Hammer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Dawnbreaker_Celestial_Hammer) == 0x658);
    };
};

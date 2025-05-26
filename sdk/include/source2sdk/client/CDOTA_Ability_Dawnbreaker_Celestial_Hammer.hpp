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
        // Size: 0x740
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Dawnbreaker_Celestial_Hammer : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t m_nProjectileIndex; // 0x680            
            std::int32_t m_nReturnProjectileID; // 0x684            
            Vector m_vEndLocation; // 0x688            
            float m_fZCoord; // 0x694            
            Vector m_vLastTrailThinkerLocation; // 0x698            
            bool m_bFlareDone; // 0x6a4            
            bool m_bStartedCatchAnimation; // 0x6a5            
            bool m_bIsReturning; // 0x6a6            
            uint8_t _pad06a7[0x1]; // 0x6a7
            // m_hReturnHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hReturnHits;
            char m_hReturnHits[0x18]; // 0x6a8            
            // m_hAoEHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hAoEHits;
            char m_hAoEHits[0x18]; // 0x6c0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6d8            
            source2sdk::client::ParticleIndex_t m_nFXIndexC; // 0x6dc            
            source2sdk::client::ParticleIndex_t m_nFXHammerReturnIndex; // 0x6e0            
            source2sdk::client::ParticleIndex_t m_nFXHammerProjectileIndex; // 0x6e4            
            source2sdk::client::ParticleIndex_t m_nFXHeroSolarGuardianTrailIndex; // 0x6e8            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x6ec            
            float projectile_speed; // 0x6f0            
            float projectile_radius; // 0x6f4            
            float hammer_damage; // 0x6f8            
            float hammer_aoe_radius; // 0x6fc            
            float flare_radius; // 0x700            
            float fire_trail_health_regen; // 0x704            
            bool bHasStartedBurning; // 0x708            
            uint8_t _pad0709[0x3]; // 0x709
            float flare_debuff_duration; // 0x70c            
            std::int32_t return_anim_distance_threshold; // 0x710            
            float range; // 0x714            
            uint8_t _pad0718[0x28];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Dawnbreaker_Celestial_Hammer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Dawnbreaker_Celestial_Hammer) == 0x740);
    };
};

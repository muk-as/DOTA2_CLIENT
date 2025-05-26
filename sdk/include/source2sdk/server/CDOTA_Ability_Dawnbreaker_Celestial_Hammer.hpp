#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x680
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Dawnbreaker_Celestial_Hammer : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t m_nProjectileIndex; // 0x5c0            
            std::int32_t m_nReturnProjectileID; // 0x5c4            
            Vector m_vEndLocation; // 0x5c8            
            float m_fZCoord; // 0x5d4            
            Vector m_vLastTrailThinkerLocation; // 0x5d8            
            bool m_bFlareDone; // 0x5e4            
            bool m_bStartedCatchAnimation; // 0x5e5            
            bool m_bIsReturning; // 0x5e6            
            uint8_t _pad05e7[0x1]; // 0x5e7
            // m_hReturnHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hReturnHits;
            char m_hReturnHits[0x18]; // 0x5e8            
            // m_hAoEHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAoEHits;
            char m_hAoEHits[0x18]; // 0x600            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x618            
            source2sdk::client::ParticleIndex_t m_nFXIndexC; // 0x61c            
            source2sdk::client::ParticleIndex_t m_nFXHammerReturnIndex; // 0x620            
            source2sdk::client::ParticleIndex_t m_nFXHammerProjectileIndex; // 0x624            
            source2sdk::client::ParticleIndex_t m_nFXHeroSolarGuardianTrailIndex; // 0x628            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x62c            
            float projectile_speed; // 0x630            
            float projectile_radius; // 0x634            
            float hammer_damage; // 0x638            
            float hammer_aoe_radius; // 0x63c            
            float flare_radius; // 0x640            
            float fire_trail_health_regen; // 0x644            
            bool bHasStartedBurning; // 0x648            
            uint8_t _pad0649[0x3]; // 0x649
            float flare_debuff_duration; // 0x64c            
            std::int32_t return_anim_distance_threshold; // 0x650            
            float range; // 0x654            
            uint8_t _pad0658[0x28];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Dawnbreaker_Celestial_Hammer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Dawnbreaker_Celestial_Hammer) == 0x680);
    };
};

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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Dawnbreaker_Celestial_Hammer : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t m_nProjectileIndex; // 0x_            
            std::int32_t m_nReturnProjectileID; // 0x_            
            Vector m_vEndLocation; // 0x_            
            float m_fZCoord; // 0x_            
            Vector m_vLastTrailThinkerLocation; // 0x_            
            bool m_bFlareDone; // 0x_            
            bool m_bStartedCatchAnimation; // 0x_            
            bool m_bIsReturning; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hReturnHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hReturnHits;
            char m_hReturnHits[0x_]; // 0x_            
            // m_hAoEHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAoEHits;
            char m_hAoEHits[0x_]; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndexC; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXHammerReturnIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXHammerProjectileIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXHeroSolarGuardianTrailIndex; // 0x_            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hThinker;
            char m_hThinker[0x_]; // 0x_            
            float projectile_speed; // 0x_            
            float projectile_radius; // 0x_            
            float hammer_damage; // 0x_            
            float hammer_aoe_radius; // 0x_            
            float flare_radius; // 0x_            
            float fire_trail_health_regen; // 0x_            
            bool bHasStartedBurning; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float flare_debuff_duration; // 0x_            
            std::int32_t return_anim_distance_threshold; // 0x_            
            float range; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Dawnbreaker_Celestial_Hammer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Dawnbreaker_Celestial_Hammer) == 0x_);
    };
};

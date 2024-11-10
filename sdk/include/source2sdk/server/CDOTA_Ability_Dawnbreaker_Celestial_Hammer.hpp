#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x670
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Dawnbreaker_Celestial_Hammer : public server::CDOTABaseAbility
    {
    public:
        int32_t m_nProjectileIndex; // 0x5c8        
        int32_t m_nReturnProjectileID; // 0x5cc        
        Vector m_vEndLocation; // 0x5d0        
        float m_fZCoord; // 0x5dc        
        Vector m_vLastTrailThinkerLocation; // 0x5e0        
        bool m_bFlareDone; // 0x5ec        
        bool m_bStartedCatchAnimation; // 0x5ed        
        bool m_bIsReturning; // 0x5ee        
        [[maybe_unused]] std::uint8_t pad_0x5ef[0x1]; // 0x5ef
        // m_hReturnHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hReturnHits;
        char m_hReturnHits[0x18]; // 0x5f0        
        // m_hAoEHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hAoEHits;
        char m_hAoEHits[0x18]; // 0x608        
        client::ParticleIndex_t m_nFXIndex; // 0x620        
        client::ParticleIndex_t m_nFXIndexC; // 0x624        
        client::ParticleIndex_t m_nFXHammerReturnIndex; // 0x628        
        client::ParticleIndex_t m_nFXHammerProjectileIndex; // 0x62c        
        client::ParticleIndex_t m_nFXHeroSolarGuardianTrailIndex; // 0x630        
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x634        
        int32_t projectile_speed; // 0x638        
        int32_t projectile_radius; // 0x63c        
        int32_t hammer_damage; // 0x640        
        int32_t hammer_aoe_radius; // 0x644        
        int32_t flare_radius; // 0x648        
        bool bHasStartedBurning; // 0x64c        
        [[maybe_unused]] std::uint8_t pad_0x64d[0x3]; // 0x64d
        float flare_debuff_duration; // 0x650        
        int32_t return_anim_distance_threshold; // 0x654        
        float range; // 0x658        
        [[maybe_unused]] std::uint8_t pad_0x65c[0x14];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Dawnbreaker_Celestial_Hammer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Dawnbreaker_Celestial_Hammer) == 0x670);
};

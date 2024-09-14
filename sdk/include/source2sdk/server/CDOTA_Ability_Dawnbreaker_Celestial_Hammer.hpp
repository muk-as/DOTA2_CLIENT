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
    // Size: 0x648
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Dawnbreaker_Celestial_Hammer : public server::CDOTABaseAbility
    {
    public:
        int32_t m_nProjectileIndex; // 0x5a0        
        int32_t m_nReturnProjectileID; // 0x5a4        
        Vector m_vEndLocation; // 0x5a8        
        float m_fZCoord; // 0x5b4        
        Vector m_vLastTrailThinkerLocation; // 0x5b8        
        bool m_bFlareDone; // 0x5c4        
        bool m_bStartedCatchAnimation; // 0x5c5        
        bool m_bIsReturning; // 0x5c6        
        [[maybe_unused]] std::uint8_t pad_0x5c7[0x1]; // 0x5c7
        // m_hReturnHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hReturnHits;
        char m_hReturnHits[0x18]; // 0x5c8        
        // m_hAoEHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hAoEHits;
        char m_hAoEHits[0x18]; // 0x5e0        
        client::ParticleIndex_t m_nFXIndex; // 0x5f8        
        client::ParticleIndex_t m_nFXIndexC; // 0x5fc        
        client::ParticleIndex_t m_nFXHammerReturnIndex; // 0x600        
        client::ParticleIndex_t m_nFXHammerProjectileIndex; // 0x604        
        client::ParticleIndex_t m_nFXHeroSolarGuardianTrailIndex; // 0x608        
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x60c        
        int32_t projectile_speed; // 0x610        
        int32_t projectile_radius; // 0x614        
        int32_t hammer_damage; // 0x618        
        int32_t hammer_aoe_radius; // 0x61c        
        int32_t flare_radius; // 0x620        
        bool bHasStartedBurning; // 0x624        
        [[maybe_unused]] std::uint8_t pad_0x625[0x3]; // 0x625
        float flare_debuff_duration; // 0x628        
        int32_t return_anim_distance_threshold; // 0x62c        
        float range; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x634[0x14];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Dawnbreaker_Celestial_Hammer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Dawnbreaker_Celestial_Hammer) == 0x648);
};

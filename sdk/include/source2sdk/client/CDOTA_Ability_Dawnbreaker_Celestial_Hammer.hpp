#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

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
    class CDOTA_Ability_Dawnbreaker_Celestial_Hammer : public client::C_DOTABaseAbility
    {
    public:
        int32_t m_nProjectileIndex; // 0x5d8        
        int32_t m_nReturnProjectileID; // 0x5dc        
        Vector m_vEndLocation; // 0x5e0        
        float m_fZCoord; // 0x5ec        
        Vector m_vLastTrailThinkerLocation; // 0x5f0        
        bool m_bFlareDone; // 0x5fc        
        bool m_bStartedCatchAnimation; // 0x5fd        
        bool m_bIsReturning; // 0x5fe        
        [[maybe_unused]] std::uint8_t pad_0x5ff[0x1]; // 0x5ff
        // m_hReturnHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hReturnHits;
        char m_hReturnHits[0x18]; // 0x600        
        // m_hAoEHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hAoEHits;
        char m_hAoEHits[0x18]; // 0x618        
        client::ParticleIndex_t m_nFXIndex; // 0x630        
        client::ParticleIndex_t m_nFXIndexC; // 0x634        
        client::ParticleIndex_t m_nFXHammerReturnIndex; // 0x638        
        client::ParticleIndex_t m_nFXHammerProjectileIndex; // 0x63c        
        client::ParticleIndex_t m_nFXHeroSolarGuardianTrailIndex; // 0x640        
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x644        
        int32_t projectile_speed; // 0x648        
        int32_t projectile_radius; // 0x64c        
        int32_t hammer_damage; // 0x650        
        int32_t hammer_aoe_radius; // 0x654        
        int32_t flare_radius; // 0x658        
        bool bHasStartedBurning; // 0x65c        
        [[maybe_unused]] std::uint8_t pad_0x65d[0x3]; // 0x65d
        float flare_debuff_duration; // 0x660        
        int32_t return_anim_distance_threshold; // 0x664        
        float range; // 0x668        
        [[maybe_unused]] std::uint8_t pad_0x66c[0x14];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Dawnbreaker_Celestial_Hammer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Dawnbreaker_Celestial_Hammer) == 0x680);
};

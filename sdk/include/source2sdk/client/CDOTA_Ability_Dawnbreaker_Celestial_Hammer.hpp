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
    // Size: 0x6a8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Dawnbreaker_Celestial_Hammer : public client::C_DOTABaseAbility
    {
    public:
        int32_t m_nProjectileIndex; // 0x600        
        int32_t m_nReturnProjectileID; // 0x604        
        Vector m_vEndLocation; // 0x608        
        float m_fZCoord; // 0x614        
        Vector m_vLastTrailThinkerLocation; // 0x618        
        bool m_bFlareDone; // 0x624        
        bool m_bStartedCatchAnimation; // 0x625        
        bool m_bIsReturning; // 0x626        
        [[maybe_unused]] std::uint8_t pad_0x627[0x1]; // 0x627
        // m_hReturnHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hReturnHits;
        char m_hReturnHits[0x18]; // 0x628        
        // m_hAoEHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hAoEHits;
        char m_hAoEHits[0x18]; // 0x640        
        client::ParticleIndex_t m_nFXIndex; // 0x658        
        client::ParticleIndex_t m_nFXIndexC; // 0x65c        
        client::ParticleIndex_t m_nFXHammerReturnIndex; // 0x660        
        client::ParticleIndex_t m_nFXHammerProjectileIndex; // 0x664        
        client::ParticleIndex_t m_nFXHeroSolarGuardianTrailIndex; // 0x668        
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x66c        
        int32_t projectile_speed; // 0x670        
        int32_t projectile_radius; // 0x674        
        int32_t hammer_damage; // 0x678        
        int32_t hammer_aoe_radius; // 0x67c        
        int32_t flare_radius; // 0x680        
        bool bHasStartedBurning; // 0x684        
        [[maybe_unused]] std::uint8_t pad_0x685[0x3]; // 0x685
        float flare_debuff_duration; // 0x688        
        int32_t return_anim_distance_threshold; // 0x68c        
        float range; // 0x690        
        [[maybe_unused]] std::uint8_t pad_0x694[0x14];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Dawnbreaker_Celestial_Hammer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Dawnbreaker_Celestial_Hammer) == 0x6a8);
};

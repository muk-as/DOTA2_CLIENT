#pragma once
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Spectre_SpectralDagger : public server::CDOTABaseAbility
    {
    public:
        float dagger_path_duration; // 0x5a0        
        float hero_path_duration; // 0x5a4        
        float m_fCreateInterval; // 0x5a8        
        entity2::GameTime_t m_fLastCreate; // 0x5ac        
        Vector m_vecLastPosition; // 0x5b0        
        bool m_bIsTrackingProjectile; // 0x5bc        
        [[maybe_unused]] std::uint8_t pad_0x5bd[0x3]; // 0x5bd
        // m_hTrackingProjectileHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hTrackingProjectileHits;
        char m_hTrackingProjectileHits[0x18]; // 0x5c0        
        // m_hUnitsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hUnitsHit;
        char m_hUnitsHit[0x18]; // 0x5d8        
        bool m_bIsThinkHit; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5f1[0x3]; // 0x5f1
        // m_hTrackingTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTrackingTarget;
        char m_hTrackingTarget[0x4]; // 0x5f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Spectre_SpectralDagger because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Spectre_SpectralDagger) == 0x5f8);
};

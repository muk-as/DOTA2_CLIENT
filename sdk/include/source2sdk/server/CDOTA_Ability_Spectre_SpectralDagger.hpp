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
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Spectre_SpectralDagger : public server::CDOTABaseAbility
    {
    public:
        float dagger_path_duration; // 0x5c8        
        float hero_path_duration; // 0x5cc        
        float m_fCreateInterval; // 0x5d0        
        entity2::GameTime_t m_fLastCreate; // 0x5d4        
        Vector m_vecLastPosition; // 0x5d8        
        bool m_bIsTrackingProjectile; // 0x5e4        
        [[maybe_unused]] std::uint8_t pad_0x5e5[0x3]; // 0x5e5
        // m_hTrackingProjectileHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hTrackingProjectileHits;
        char m_hTrackingProjectileHits[0x18]; // 0x5e8        
        // m_hUnitsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hUnitsHit;
        char m_hUnitsHit[0x18]; // 0x600        
        bool m_bIsThinkHit; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x619[0x3]; // 0x619
        // m_hTrackingTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTrackingTarget;
        char m_hTrackingTarget[0x4]; // 0x61c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Spectre_SpectralDagger because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Spectre_SpectralDagger) == 0x620);
};

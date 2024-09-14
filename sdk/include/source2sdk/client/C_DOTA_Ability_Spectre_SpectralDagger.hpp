#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x630
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Spectre_SpectralDagger : public client::C_DOTABaseAbility
    {
    public:
        float dagger_path_duration; // 0x5d8        
        float hero_path_duration; // 0x5dc        
        float m_fCreateInterval; // 0x5e0        
        entity2::GameTime_t m_fLastCreate; // 0x5e4        
        Vector m_vecLastPosition; // 0x5e8        
        bool m_bIsTrackingProjectile; // 0x5f4        
        [[maybe_unused]] std::uint8_t pad_0x5f5[0x3]; // 0x5f5
        // m_hTrackingProjectileHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hTrackingProjectileHits;
        char m_hTrackingProjectileHits[0x18]; // 0x5f8        
        // m_hUnitsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hUnitsHit;
        char m_hUnitsHit[0x18]; // 0x610        
        bool m_bIsThinkHit; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x629[0x3]; // 0x629
        // m_hTrackingTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTrackingTarget;
        char m_hTrackingTarget[0x4]; // 0x62c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Spectre_SpectralDagger because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Spectre_SpectralDagger) == 0x630);
};

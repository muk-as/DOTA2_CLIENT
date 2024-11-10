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
    // Size: 0x658
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Spectre_SpectralDagger : public client::C_DOTABaseAbility
    {
    public:
        float dagger_path_duration; // 0x600        
        float hero_path_duration; // 0x604        
        float m_fCreateInterval; // 0x608        
        entity2::GameTime_t m_fLastCreate; // 0x60c        
        Vector m_vecLastPosition; // 0x610        
        bool m_bIsTrackingProjectile; // 0x61c        
        [[maybe_unused]] std::uint8_t pad_0x61d[0x3]; // 0x61d
        // m_hTrackingProjectileHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hTrackingProjectileHits;
        char m_hTrackingProjectileHits[0x18]; // 0x620        
        // m_hUnitsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hUnitsHit;
        char m_hUnitsHit[0x18]; // 0x638        
        bool m_bIsThinkHit; // 0x650        
        [[maybe_unused]] std::uint8_t pad_0x651[0x3]; // 0x651
        // m_hTrackingTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTrackingTarget;
        char m_hTrackingTarget[0x4]; // 0x654        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Spectre_SpectralDagger because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Spectre_SpectralDagger) == 0x658);
};

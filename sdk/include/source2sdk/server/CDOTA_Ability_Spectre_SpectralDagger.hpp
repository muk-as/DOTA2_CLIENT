#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x610
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Spectre_SpectralDagger : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float dagger_path_duration; // 0x5b8            
            float hero_path_duration; // 0x5bc            
            float m_fCreateInterval; // 0x5c0            
            source2sdk::entity2::GameTime_t m_fLastCreate; // 0x5c4            
            Vector m_vecLastPosition; // 0x5c8            
            bool m_bIsTrackingProjectile; // 0x5d4            
            uint8_t _pad05d5[0x3]; // 0x5d5
            // m_hTrackingProjectileHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTrackingProjectileHits;
            char m_hTrackingProjectileHits[0x18]; // 0x5d8            
            // m_hUnitsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hUnitsHit;
            char m_hUnitsHit[0x18]; // 0x5f0            
            bool m_bIsThinkHit; // 0x608            
            uint8_t _pad0609[0x3]; // 0x609
            // m_hTrackingTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTrackingTarget;
            char m_hTrackingTarget[0x4]; // 0x60c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Spectre_SpectralDagger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Spectre_SpectralDagger) == 0x610);
    };
};

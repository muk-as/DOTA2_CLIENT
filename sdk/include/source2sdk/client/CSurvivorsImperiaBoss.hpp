#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsEnemy.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
namespace source2sdk
{
    namespace particleslib
    {
        struct CNewParticleEffect;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd50
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsImperiaBoss : public source2sdk::client::CSurvivorsEnemy
        {
        public:
            uint8_t _pad0338[0x8c]; // 0x338
            float m_flBurningGroundImpactDamage; // 0x3c4            
            float m_flBurningGroundImpactRadius; // 0x3c8            
            float m_flBurningGroundImpactSpawnDelay; // 0x3cc            
            float m_flBurningGroundFlamesDuration; // 0x3d0            
            float m_flBurningGroundDoTDuration; // 0x3d4            
            float m_flBurningGroundDoTDamage; // 0x3d8            
            float m_flBurningGroundImpactStunDuration; // 0x3dc            
            std::int32_t m_nBurningGroundInstancesPerEnrageLevel; // 0x3e0            
            uint8_t _pad03e4[0x4]; // 0x3e4
            // m_sBurningGroundImpactParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sBurningGroundImpactParticleName;
            char m_sBurningGroundImpactParticleName[0xe0]; // 0x3e8            
            // m_sBurningGroundDoTParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sBurningGroundDoTParticleName;
            char m_sBurningGroundDoTParticleName[0xe0]; // 0x4c8            
            // m_sBurningGroundBurnParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sBurningGroundBurnParticleName;
            char m_sBurningGroundBurnParticleName[0xe0]; // 0x5a8            
            float m_flRadiateRaysCastStartDuration; // 0x688            
            float m_flRadiateRaysDuration; // 0x68c            
            float m_flRadiateRaysInterval; // 0x690            
            float m_flRadiateRaysAngle; // 0x694            
            float m_flRadiateRaysSpeed; // 0x698            
            float m_flRadiateRaysDamage; // 0x69c            
            float m_flRadiateRaysProjectileRadius; // 0x6a0            
            uint8_t _pad06a4[0x4]; // 0x6a4
            // m_sRadiateRaysRayParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sRadiateRaysRayParticle;
            char m_sRadiateRaysRayParticle[0xe0]; // 0x6a8            
            // m_sRadiateRaysBuffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sRadiateRaysBuffParticle;
            char m_sRadiateRaysBuffParticle[0xe0]; // 0x788            
            source2sdk::particleslib::CNewParticleEffect* m_pRadiateRaysBuffParticle; // 0x868            
            float m_nDemonPortalsNumToCreate; // 0x870            
            float m_flDemonPortalDeactivateTime; // 0x874            
            // m_sDemonPortalsPortalParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDemonPortalsPortalParticle;
            char m_sDemonPortalsPortalParticle[0xe0]; // 0x878            
            // m_sDemonPortalsTelegraphParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDemonPortalsTelegraphParticle;
            char m_sDemonPortalsTelegraphParticle[0xe0]; // 0x958            
            std::int32_t m_nMaxDemonPortalCount; // 0xa38            
            float m_flDemonPortalDeactivateRadius; // 0xa3c            
            // m_vecDemonPortalSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecDemonPortalSpawners;
            char m_vecDemonPortalSpawners[0x18]; // 0xa40            
            // m_vecDemonPortalSpawnPositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vecDemonPortalSpawnPositions;
            char m_vecDemonPortalSpawnPositions[0x18]; // 0xa58            
            std::int32_t m_nNumMagicMissiles; // 0xa70            
            float m_flMagicMissileProjectileSpeed; // 0xa74            
            float m_flMagicMissileDamage; // 0xa78            
            float m_flMagicMissileProjectileRadius; // 0xa7c            
            float m_flMagicMissileProjectileSpeedIncreasePerEnrage; // 0xa80            
            uint8_t _pad0a84[0x4]; // 0xa84
            // m_sMagicMissileParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sMagicMissileParticle;
            char m_sMagicMissileParticle[0xe0]; // 0xa88            
            float m_flInitialEnrageTime; // 0xb68            
            float m_flIncrementalEnrageTime; // 0xb6c            
            // m_vecMandatoryEnrageHealthThresholds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecMandatoryEnrageHealthThresholds;
            char m_vecMandatoryEnrageHealthThresholds[0x18]; // 0xb70            
            uint8_t _pad0b88[0x4]; // 0xb88
            bool m_bSpawnedAmbientParticles; // 0xb8c            
            uint8_t _pad0b8d[0x3]; // 0xb8d
            // m_sImperiaAmbientBody has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sImperiaAmbientBody;
            char m_sImperiaAmbientBody[0xe0]; // 0xb90            
            // m_sImperiaAmbientWings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sImperiaAmbientWings;
            char m_sImperiaAmbientWings[0xe0]; // 0xc70            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsImperiaBoss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsImperiaBoss) == 0xd50);
    };
};

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
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsImperiaBoss : public source2sdk::client::CSurvivorsEnemy
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            float m_flBurningGroundImpactDamage; // 0x_            
            float m_flBurningGroundImpactRadius; // 0x_            
            float m_flBurningGroundImpactSpawnDelay; // 0x_            
            float m_flBurningGroundFlamesDuration; // 0x_            
            float m_flBurningGroundDoTDuration; // 0x_            
            float m_flBurningGroundDoTDamage; // 0x_            
            float m_flBurningGroundImpactStunDuration; // 0x_            
            std::int32_t m_nBurningGroundInstancesPerEnrageLevel; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_sBurningGroundImpactParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sBurningGroundImpactParticleName;
            char m_sBurningGroundImpactParticleName[0x_]; // 0x_            
            // m_sBurningGroundDoTParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sBurningGroundDoTParticleName;
            char m_sBurningGroundDoTParticleName[0x_]; // 0x_            
            // m_sBurningGroundBurnParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sBurningGroundBurnParticleName;
            char m_sBurningGroundBurnParticleName[0x_]; // 0x_            
            float m_flRadiateRaysCastStartDuration; // 0x_            
            float m_flRadiateRaysDuration; // 0x_            
            float m_flRadiateRaysInterval; // 0x_            
            float m_flRadiateRaysAngle; // 0x_            
            float m_flRadiateRaysSpeed; // 0x_            
            float m_flRadiateRaysDamage; // 0x_            
            float m_flRadiateRaysProjectileRadius; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_sRadiateRaysRayParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sRadiateRaysRayParticle;
            char m_sRadiateRaysRayParticle[0x_]; // 0x_            
            // m_sRadiateRaysBuffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sRadiateRaysBuffParticle;
            char m_sRadiateRaysBuffParticle[0x_]; // 0x_            
            source2sdk::particleslib::CNewParticleEffect* m_pRadiateRaysBuffParticle; // 0x_            
            float m_nDemonPortalsNumToCreate; // 0x_            
            float m_flDemonPortalDeactivateTime; // 0x_            
            // m_sDemonPortalsPortalParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDemonPortalsPortalParticle;
            char m_sDemonPortalsPortalParticle[0x_]; // 0x_            
            // m_sDemonPortalsTelegraphParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDemonPortalsTelegraphParticle;
            char m_sDemonPortalsTelegraphParticle[0x_]; // 0x_            
            std::int32_t m_nMaxDemonPortalCount; // 0x_            
            float m_flDemonPortalDeactivateRadius; // 0x_            
            // m_vecDemonPortalSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecDemonPortalSpawners;
            char m_vecDemonPortalSpawners[0x_]; // 0x_            
            // m_vecDemonPortalSpawnPositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vecDemonPortalSpawnPositions;
            char m_vecDemonPortalSpawnPositions[0x_]; // 0x_            
            std::int32_t m_nNumMagicMissiles; // 0x_            
            float m_flMagicMissileProjectileSpeed; // 0x_            
            float m_flMagicMissileDamage; // 0x_            
            float m_flMagicMissileProjectileRadius; // 0x_            
            float m_flMagicMissileProjectileSpeedIncreasePerEnrage; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_sMagicMissileParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sMagicMissileParticle;
            char m_sMagicMissileParticle[0x_]; // 0x_            
            float m_flInitialEnrageTime; // 0x_            
            float m_flIncrementalEnrageTime; // 0x_            
            // m_vecMandatoryEnrageHealthThresholds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecMandatoryEnrageHealthThresholds;
            char m_vecMandatoryEnrageHealthThresholds[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bSpawnedAmbientParticles; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_sImperiaAmbientBody has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sImperiaAmbientBody;
            char m_sImperiaAmbientBody[0x_]; // 0x_            
            // m_sImperiaAmbientWings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sImperiaAmbientWings;
            char m_sImperiaAmbientWings[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsImperiaBoss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsImperiaBoss) == 0x_);
    };
};

#pragma once
#include "source2sdk/client/CSurvivorsEnemy.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
    class CNewParticleEffect;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd40
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsImperiaBoss : public client::CSurvivorsEnemy
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x328[0x8c]; // 0x328
        float m_flBurningGroundImpactDamage; // 0x3b4        
        float m_flBurningGroundImpactRadius; // 0x3b8        
        float m_flBurningGroundImpactSpawnDelay; // 0x3bc        
        float m_flBurningGroundFlamesDuration; // 0x3c0        
        float m_flBurningGroundDoTDuration; // 0x3c4        
        float m_flBurningGroundDoTDamage; // 0x3c8        
        float m_flBurningGroundImpactStunDuration; // 0x3cc        
        int32_t m_nBurningGroundInstancesPerEnrageLevel; // 0x3d0        
        [[maybe_unused]] std::uint8_t pad_0x3d4[0x4]; // 0x3d4
        // m_sBurningGroundImpactParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sBurningGroundImpactParticleName;
        char m_sBurningGroundImpactParticleName[0xe0]; // 0x3d8        
        // m_sBurningGroundDoTParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sBurningGroundDoTParticleName;
        char m_sBurningGroundDoTParticleName[0xe0]; // 0x4b8        
        // m_sBurningGroundBurnParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sBurningGroundBurnParticleName;
        char m_sBurningGroundBurnParticleName[0xe0]; // 0x598        
        float m_flRadiateRaysCastStartDuration; // 0x678        
        float m_flRadiateRaysDuration; // 0x67c        
        float m_flRadiateRaysInterval; // 0x680        
        float m_flRadiateRaysAngle; // 0x684        
        float m_flRadiateRaysSpeed; // 0x688        
        float m_flRadiateRaysDamage; // 0x68c        
        float m_flRadiateRaysProjectileRadius; // 0x690        
        [[maybe_unused]] std::uint8_t pad_0x694[0x4]; // 0x694
        // m_sRadiateRaysRayParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sRadiateRaysRayParticle;
        char m_sRadiateRaysRayParticle[0xe0]; // 0x698        
        // m_sRadiateRaysBuffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sRadiateRaysBuffParticle;
        char m_sRadiateRaysBuffParticle[0xe0]; // 0x778        
        particleslib::CNewParticleEffect* m_pRadiateRaysBuffParticle; // 0x858        
        float m_nDemonPortalsNumToCreate; // 0x860        
        float m_flDemonPortalDeactivateTime; // 0x864        
        // m_sDemonPortalsPortalParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDemonPortalsPortalParticle;
        char m_sDemonPortalsPortalParticle[0xe0]; // 0x868        
        // m_sDemonPortalsTelegraphParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDemonPortalsTelegraphParticle;
        char m_sDemonPortalsTelegraphParticle[0xe0]; // 0x948        
        int32_t m_nMaxDemonPortalCount; // 0xa28        
        float m_flDemonPortalDeactivateRadius; // 0xa2c        
        // m_vecDemonPortalSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecDemonPortalSpawners;
        char m_vecDemonPortalSpawners[0x18]; // 0xa30        
        // m_vecDemonPortalSpawnPositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_vecDemonPortalSpawnPositions;
        char m_vecDemonPortalSpawnPositions[0x18]; // 0xa48        
        int32_t m_nNumMagicMissiles; // 0xa60        
        float m_flMagicMissileProjectileSpeed; // 0xa64        
        float m_flMagicMissileDamage; // 0xa68        
        float m_flMagicMissileProjectileRadius; // 0xa6c        
        float m_flMagicMissileProjectileSpeedIncreasePerEnrage; // 0xa70        
        [[maybe_unused]] std::uint8_t pad_0xa74[0x4]; // 0xa74
        // m_sMagicMissileParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sMagicMissileParticle;
        char m_sMagicMissileParticle[0xe0]; // 0xa78        
        float m_flInitialEnrageTime; // 0xb58        
        float m_flIncrementalEnrageTime; // 0xb5c        
        // m_vecMandatoryEnrageHealthThresholds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecMandatoryEnrageHealthThresholds;
        char m_vecMandatoryEnrageHealthThresholds[0x18]; // 0xb60        
        [[maybe_unused]] std::uint8_t pad_0xb78[0x4]; // 0xb78
        bool m_bSpawnedAmbientParticles; // 0xb7c        
        [[maybe_unused]] std::uint8_t pad_0xb7d[0x3]; // 0xb7d
        // m_sImperiaAmbientBody has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sImperiaAmbientBody;
        char m_sImperiaAmbientBody[0xe0]; // 0xb80        
        // m_sImperiaAmbientWings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sImperiaAmbientWings;
        char m_sImperiaAmbientWings[0xe0]; // 0xc60        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsImperiaBoss because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsImperiaBoss) == 0xd40);
};

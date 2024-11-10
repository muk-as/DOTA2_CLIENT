#pragma once
#include "source2sdk/client/CSurvivorsEnemyDefinition.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xbe8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsEnemyDefinition_ImperiaBoss : public client::CSurvivorsEnemyDefinition
    {
    public:
        float m_flBurningGroundImpactDamage; // 0x288        
        float m_flBurningGroundImpactRadius; // 0x28c        
        float m_flBurningGroundImpactSpawnDelay; // 0x290        
        float m_flBurningGroundFlamesDuration; // 0x294        
        float m_flBurningGroundDoTDuration; // 0x298        
        float m_flBurningGroundDoTDamage; // 0x29c        
        float m_flBurningGroundImpactStunDuration; // 0x2a0        
        int32_t m_nBurningGroundInstancesPerEnrageLevel; // 0x2a4        
        // m_sBurningGroundImpactParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sBurningGroundImpactParticleName;
        char m_sBurningGroundImpactParticleName[0xe0]; // 0x2a8        
        // m_sBurningGroundDoTParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sBurningGroundDoTParticleName;
        char m_sBurningGroundDoTParticleName[0xe0]; // 0x388        
        // m_sBurningGroundBurnParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sBurningGroundBurnParticleName;
        char m_sBurningGroundBurnParticleName[0xe0]; // 0x468        
        float m_flRadiateRaysCastStartDuration; // 0x548        
        float m_flRadiateRaysDuration; // 0x54c        
        float m_flRadiateRaysInterval; // 0x550        
        float m_flRadiateRaysAngle; // 0x554        
        float m_flRadiateRaysSpeed; // 0x558        
        float m_flRadiateRaysDamage; // 0x55c        
        float m_flRadiateRaysProjectileRadius; // 0x560        
        [[maybe_unused]] std::uint8_t pad_0x564[0x4]; // 0x564
        // m_sRadiateRaysRayParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sRadiateRaysRayParticle;
        char m_sRadiateRaysRayParticle[0xe0]; // 0x568        
        // m_sRadiateRaysBuffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sRadiateRaysBuffParticle;
        char m_sRadiateRaysBuffParticle[0xe0]; // 0x648        
        float m_nDemonPortalsNumToCreate; // 0x728        
        float m_flDemonPortalDeactivateTime; // 0x72c        
        int32_t m_nMaxDemonPortalCount; // 0x730        
        float m_flDemonPortalDeactivateRadius; // 0x734        
        // m_vecDemonPortalSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecDemonPortalSpawners;
        char m_vecDemonPortalSpawners[0x18]; // 0x738        
        // m_sDemonPortalsPortalParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDemonPortalsPortalParticle;
        char m_sDemonPortalsPortalParticle[0xe0]; // 0x750        
        // m_sDemonPortalsTelegraphParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDemonPortalsTelegraphParticle;
        char m_sDemonPortalsTelegraphParticle[0xe0]; // 0x830        
        int32_t m_nNumMagicMissiles; // 0x910        
        float m_flMagicMissileProjectileSpeed; // 0x914        
        float m_flMagicMissileProjectileSpeedIncreasePerEnrage; // 0x918        
        float m_flMagicMissileDamage; // 0x91c        
        float m_flMagicMissileProjectileRadius; // 0x920        
        [[maybe_unused]] std::uint8_t pad_0x924[0x4]; // 0x924
        // m_sMagicMissileParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sMagicMissileParticle;
        char m_sMagicMissileParticle[0xe0]; // 0x928        
        float m_flInitialEnrageTime; // 0xa08        
        float m_flIncrementalEnrageTime; // 0xa0c        
        // m_vecMandatoryEnrageHealthThresholds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecMandatoryEnrageHealthThresholds;
        char m_vecMandatoryEnrageHealthThresholds[0x18]; // 0xa10        
        // m_sImperiaAmbientBody has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sImperiaAmbientBody;
        char m_sImperiaAmbientBody[0xe0]; // 0xa28        
        // m_sImperiaAmbientWings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sImperiaAmbientWings;
        char m_sImperiaAmbientWings[0xe0]; // 0xb08        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsEnemyDefinition_ImperiaBoss because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsEnemyDefinition_ImperiaBoss) == 0xbe8);
};

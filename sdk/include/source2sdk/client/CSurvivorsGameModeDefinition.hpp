#pragma once
#include "source2sdk/client/CSurvivorsGameModeDefinition__SeparationLayerData.hpp"
#include "source2sdk/client/CSurvivorsLootTable.hpp"
#include "source2sdk/client/CrownfallSurvivorsLightingEnvironment_t.hpp"
#include "source2sdk/client/SurvivorsGameModeID_t.hpp"
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
    // Standard-layout class: true
    // Size: 0xe18
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsGameModeDefinition
    {
    public:
        client::SurvivorsGameModeID_t m_unGameModeID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0xc]; // 0x4
        Vector m_vCameraOffset; // 0x10        
        float m_flEnemyRadius; // 0x1c        
        float m_flEnemyRadiusVariance; // 0x20        
        float m_flEnemyDespawnBuffer; // 0x24        
        float m_flEnemyDespawnTime; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4]; // 0x2c
        CUtlString m_sLevelName; // 0x30        
        float m_flRequiredExperienceBase; // 0x38        
        float m_flRequiredExperienceExponent; // 0x3c        
        [[maybe_unused]] std::uint8_t pad_0x40[0x4]; // 0x40
        client::CrownfallSurvivorsLightingEnvironment_t m_TimeBasedLightingEnvironments[3]; // 0x44        
        [[maybe_unused]] std::uint8_t pad_0xbc[0x4]; // 0xbc
        CUtlString m_sDifficultyName; // 0xc0        
        float m_flPlayerReviveTimer; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xcc[0x4]; // 0xcc
        // m_sReviveEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sReviveEffect;
        char m_sReviveEffect[0xe0]; // 0xd0        
        int32_t m_nMaxActiveSlots; // 0x1b0        
        int32_t m_nMaxPassiveSlots; // 0x1b4        
        int32_t m_nLevelUpChoices; // 0x1b8        
        int32_t m_nMaxXPPickupsInWorld; // 0x1bc        
        float m_flKnockbackDuration; // 0x1c0        
        float m_flSeperationVelocityInfluence; // 0x1c4        
        float m_flSeperationVelocityInterpolationSpeed; // 0x1c8        
        float m_flPlayerPositionHistoryBufferDuration; // 0x1cc        
        float m_flExistingItemGenerationWeight; // 0x1d0        
        float m_flNewItemGenerationWeight; // 0x1d4        
        float m_flPassiveItemGenerationWeight; // 0x1d8        
        float m_flFirstFloorTimeLimit; // 0x1dc        
        float m_flEliteRoomTriggerChannelTime; // 0x1e0        
        float m_flEliteRoomTriggerRadius; // 0x1e4        
        int32_t m_nInitialItemSpawns; // 0x1e8        
        int32_t m_nInitialMagnetSpawns; // 0x1ec        
        // m_vecEliteRoomUnlockTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecEliteRoomUnlockTimes;
        char m_vecEliteRoomUnlockTimes[0x18]; // 0x1f0        
        // m_sEliteRoomChannelEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEliteRoomChannelEffect;
        char m_sEliteRoomChannelEffect[0xe0]; // 0x208        
        // m_sEliteRoomDirectionalArrowEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEliteRoomDirectionalArrowEffect;
        char m_sEliteRoomDirectionalArrowEffect[0xe0]; // 0x2e8        
        // m_vecEliteRoomChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecEliteRoomChoices;
        char m_vecEliteRoomChoices[0x18]; // 0x3c8        
        [[maybe_unused]] std::uint8_t pad_0x3e0[0x18]; // 0x3e0
        // m_sHealthBarEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sHealthBarEffect;
        char m_sHealthBarEffect[0xe0]; // 0x3f8        
        // m_sAttackIndicatorParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sAttackIndicatorParticleEffect;
        char m_sAttackIndicatorParticleEffect[0xe0]; // 0x4d8        
        // m_sDamageNumbersEffectEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDamageNumbersEffectEnemy;
        char m_sDamageNumbersEffectEnemy[0xe0]; // 0x5b8        
        // m_sDamageNumbersEffectPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDamageNumbersEffectPlayer;
        char m_sDamageNumbersEffectPlayer[0xe0]; // 0x698        
        // m_sDamageNumbersEffectCriticalStrike has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDamageNumbersEffectCriticalStrike;
        char m_sDamageNumbersEffectCriticalStrike[0xe0]; // 0x778        
        // m_sCollisionIndicatorEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sCollisionIndicatorEffect;
        char m_sCollisionIndicatorEffect[0xe0]; // 0x858        
        Vector m_vCollisionIndicatorColorPlayer; // 0x938        
        Vector m_vCollisionIndicatorColorEnemy; // 0x944        
        // m_sPhysicalWeaknessEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sPhysicalWeaknessEffect;
        char m_sPhysicalWeaknessEffect[0xe0]; // 0x950        
        // m_sGenericStunEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sGenericStunEffect;
        char m_sGenericStunEffect[0xe0]; // 0xa30        
        Color m_cEliteGlowColor; // 0xb10        
        float m_flLevelUpDelay; // 0xb14        
        float m_flLevelUpKnockbackRadius; // 0xb18        
        float m_flLevelUpKnockbackDistance; // 0xb1c        
        // m_sLevelUpEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sLevelUpEffect;
        char m_sLevelUpEffect[0xe0]; // 0xb20        
        // m_sLevelUpKnockbackEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sLevelUpKnockbackEffect;
        char m_sLevelUpKnockbackEffect[0xe0]; // 0xc00        
        // m_sPlayerHitEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sPlayerHitEffect;
        char m_sPlayerHitEffect[0xe0]; // 0xce0        
        // m_vecSeperationLayerData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CSurvivorsGameModeDefinition__SeparationLayerData> m_vecSeperationLayerData;
        char m_vecSeperationLayerData[0x18]; // 0xdc0        
        client::CSurvivorsLootTable m_luckyLootTable; // 0xdd8        
        [[maybe_unused]] std::uint8_t pad_0xdf0[0x28];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_unGameModeID) == 0x0);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_vCameraOffset) == 0x10);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flEnemyRadius) == 0x1c);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flEnemyRadiusVariance) == 0x20);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flEnemyDespawnBuffer) == 0x24);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flEnemyDespawnTime) == 0x28);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_sLevelName) == 0x30);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flRequiredExperienceBase) == 0x38);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flRequiredExperienceExponent) == 0x3c);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_TimeBasedLightingEnvironments) == 0x44);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_sDifficultyName) == 0xc0);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flPlayerReviveTimer) == 0xc8);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_sReviveEffect) == 0xd0);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_nMaxActiveSlots) == 0x1b0);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_nMaxPassiveSlots) == 0x1b4);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_nLevelUpChoices) == 0x1b8);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_nMaxXPPickupsInWorld) == 0x1bc);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flKnockbackDuration) == 0x1c0);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flSeperationVelocityInfluence) == 0x1c4);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flSeperationVelocityInterpolationSpeed) == 0x1c8);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flPlayerPositionHistoryBufferDuration) == 0x1cc);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flExistingItemGenerationWeight) == 0x1d0);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flNewItemGenerationWeight) == 0x1d4);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flPassiveItemGenerationWeight) == 0x1d8);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flFirstFloorTimeLimit) == 0x1dc);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flEliteRoomTriggerChannelTime) == 0x1e0);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flEliteRoomTriggerRadius) == 0x1e4);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_nInitialItemSpawns) == 0x1e8);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_nInitialMagnetSpawns) == 0x1ec);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_vecEliteRoomUnlockTimes) == 0x1f0);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_sEliteRoomChannelEffect) == 0x208);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_sEliteRoomDirectionalArrowEffect) == 0x2e8);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_vecEliteRoomChoices) == 0x3c8);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_sHealthBarEffect) == 0x3f8);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_sAttackIndicatorParticleEffect) == 0x4d8);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_sDamageNumbersEffectEnemy) == 0x5b8);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_sDamageNumbersEffectPlayer) == 0x698);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_sDamageNumbersEffectCriticalStrike) == 0x778);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_sCollisionIndicatorEffect) == 0x858);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_vCollisionIndicatorColorPlayer) == 0x938);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_vCollisionIndicatorColorEnemy) == 0x944);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_sPhysicalWeaknessEffect) == 0x950);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_sGenericStunEffect) == 0xa30);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_cEliteGlowColor) == 0xb10);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flLevelUpDelay) == 0xb14);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flLevelUpKnockbackRadius) == 0xb18);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_flLevelUpKnockbackDistance) == 0xb1c);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_sLevelUpEffect) == 0xb20);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_sLevelUpKnockbackEffect) == 0xc00);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_sPlayerHitEffect) == 0xce0);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_vecSeperationLayerData) == 0xdc0);
    static_assert(offsetof(CSurvivorsGameModeDefinition, m_luckyLootTable) == 0xdd8);
    
    static_assert(sizeof(CSurvivorsGameModeDefinition) == 0xe18);
};

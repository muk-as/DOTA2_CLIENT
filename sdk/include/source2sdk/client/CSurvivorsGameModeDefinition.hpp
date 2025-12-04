#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsGameModeDefinition_SeparationLayerData.hpp"
#include "source2sdk/client/CSurvivorsLootTable.hpp"
#include "source2sdk/client/CrownfallSurvivorsLightingEnvironment_t.hpp"
#include "source2sdk/client/SurvivorsGameModeID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsGameModeDefinition
        {
        public:
            source2sdk::client::SurvivorsGameModeID_t m_unGameModeID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vCameraOffset; // 0x_            
            float m_flEnemyRadius; // 0x_            
            float m_flEnemyRadiusVariance; // 0x_            
            float m_flEnemyDespawnBuffer; // 0x_            
            float m_flEnemyDespawnTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sLevelName; // 0x_            
            float m_flRequiredExperienceBase; // 0x_            
            float m_flRequiredExperienceExponent; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CrownfallSurvivorsLightingEnvironment_t m_TimeBasedLightingEnvironments[3]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sDifficultyName; // 0x_            
            float m_flPlayerReviveTimer; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_sReviveEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sReviveEffect;
            char m_sReviveEffect[0x_]; // 0x_            
            std::int32_t m_nMaxActiveSlots; // 0x_            
            std::int32_t m_nMaxPassiveSlots; // 0x_            
            std::int32_t m_nLevelUpChoices; // 0x_            
            std::int32_t m_nMaxXPPickupsInWorld; // 0x_            
            float m_flKnockbackDuration; // 0x_            
            float m_flSeperationVelocityInfluence; // 0x_            
            float m_flSeperationVelocityInterpolationSpeed; // 0x_            
            float m_flPlayerPositionHistoryBufferDuration; // 0x_            
            float m_flExistingItemGenerationWeight; // 0x_            
            float m_flNewItemGenerationWeight; // 0x_            
            float m_flPassiveItemGenerationWeight; // 0x_            
            float m_flFirstFloorTimeLimit; // 0x_            
            float m_flEliteRoomTriggerChannelTime; // 0x_            
            float m_flEliteRoomTriggerRadius; // 0x_            
            std::int32_t m_nInitialItemSpawns; // 0x_            
            std::int32_t m_nInitialMagnetSpawns; // 0x_            
            // m_vecEliteRoomUnlockTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecEliteRoomUnlockTimes;
            char m_vecEliteRoomUnlockTimes[0x_]; // 0x_            
            // m_sEliteRoomChannelEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEliteRoomChannelEffect;
            char m_sEliteRoomChannelEffect[0x_]; // 0x_            
            // m_sEliteRoomDirectionalArrowEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEliteRoomDirectionalArrowEffect;
            char m_sEliteRoomDirectionalArrowEffect[0x_]; // 0x_            
            // m_vecEliteRoomChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecEliteRoomChoices;
            char m_vecEliteRoomChoices[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_sHealthBarEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sHealthBarEffect;
            char m_sHealthBarEffect[0x_]; // 0x_            
            // m_sAttackIndicatorParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sAttackIndicatorParticleEffect;
            char m_sAttackIndicatorParticleEffect[0x_]; // 0x_            
            // m_sDamageNumbersEffectEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDamageNumbersEffectEnemy;
            char m_sDamageNumbersEffectEnemy[0x_]; // 0x_            
            // m_sDamageNumbersEffectPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDamageNumbersEffectPlayer;
            char m_sDamageNumbersEffectPlayer[0x_]; // 0x_            
            // m_sDamageNumbersEffectCriticalStrike has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDamageNumbersEffectCriticalStrike;
            char m_sDamageNumbersEffectCriticalStrike[0x_]; // 0x_            
            // m_sCollisionIndicatorEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sCollisionIndicatorEffect;
            char m_sCollisionIndicatorEffect[0x_]; // 0x_            
            Vector m_vCollisionIndicatorColorPlayer; // 0x_            
            Vector m_vCollisionIndicatorColorEnemy; // 0x_            
            // m_sPhysicalWeaknessEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sPhysicalWeaknessEffect;
            char m_sPhysicalWeaknessEffect[0x_]; // 0x_            
            // m_sGenericStunEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sGenericStunEffect;
            char m_sGenericStunEffect[0x_]; // 0x_            
            Color m_cEliteGlowColor; // 0x_            
            float m_flLevelUpDelay; // 0x_            
            float m_flLevelUpKnockbackRadius; // 0x_            
            float m_flLevelUpKnockbackDistance; // 0x_            
            // m_sLevelUpEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sLevelUpEffect;
            char m_sLevelUpEffect[0x_]; // 0x_            
            // m_sLevelUpKnockbackEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sLevelUpKnockbackEffect;
            char m_sLevelUpKnockbackEffect[0x_]; // 0x_            
            // m_sPlayerHitEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sPlayerHitEffect;
            char m_sPlayerHitEffect[0x_]; // 0x_            
            // m_vecSeperationLayerData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsGameModeDefinition_SeparationLayerData> m_vecSeperationLayerData;
            char m_vecSeperationLayerData[0x_]; // 0x_            
            source2sdk::client::CSurvivorsLootTable m_luckyLootTable; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_unGameModeID) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_vCameraOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flEnemyRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flEnemyRadiusVariance) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flEnemyDespawnBuffer) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flEnemyDespawnTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_sLevelName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flRequiredExperienceBase) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flRequiredExperienceExponent) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_TimeBasedLightingEnvironments) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_sDifficultyName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flPlayerReviveTimer) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_sReviveEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_nMaxActiveSlots) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_nMaxPassiveSlots) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_nLevelUpChoices) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_nMaxXPPickupsInWorld) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flKnockbackDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flSeperationVelocityInfluence) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flSeperationVelocityInterpolationSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flPlayerPositionHistoryBufferDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flExistingItemGenerationWeight) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flNewItemGenerationWeight) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flPassiveItemGenerationWeight) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flFirstFloorTimeLimit) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flEliteRoomTriggerChannelTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flEliteRoomTriggerRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_nInitialItemSpawns) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_nInitialMagnetSpawns) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_vecEliteRoomUnlockTimes) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_sEliteRoomChannelEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_sEliteRoomDirectionalArrowEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_vecEliteRoomChoices) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_sHealthBarEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_sAttackIndicatorParticleEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_sDamageNumbersEffectEnemy) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_sDamageNumbersEffectPlayer) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_sDamageNumbersEffectCriticalStrike) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_sCollisionIndicatorEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_vCollisionIndicatorColorPlayer) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_vCollisionIndicatorColorEnemy) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_sPhysicalWeaknessEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_sGenericStunEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_cEliteGlowColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flLevelUpDelay) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flLevelUpKnockbackRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_flLevelUpKnockbackDistance) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_sLevelUpEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_sLevelUpKnockbackEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_sPlayerHitEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_vecSeperationLayerData) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameModeDefinition, m_luckyLootTable) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsGameModeDefinition) == 0x_);
    };
};

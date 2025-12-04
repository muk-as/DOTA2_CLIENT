#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsEnemyEventDefinition.hpp"
#include "source2sdk/client/CSurvivorsSpawnerDefinition.hpp"
#include "source2sdk/client/SurvivorsPowerUpID_t.hpp"

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
        class CSurvivorsDifficultyDefinition
        {
        public:
            CUtlString m_sLocDifficultyName; // 0x_            
            CUtlString m_sLocDifficultyDescription; // 0x_            
            CUtlString m_sLocDifficultyUpgradeText; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flPlayerMaxHPMultiplier; // 0x_            
            float m_flPlayerHPRegenerationMultiplier; // 0x_            
            float m_flEnemyHealthMultiplier; // 0x_            
            float m_flEnemyDamageMultiplier; // 0x_            
            float m_flEnemyMovementSpeedMultiplier; // 0x_            
            float m_flEnemyTurnRateMultiplier; // 0x_            
            float m_flEnemySpawnCountMuliplier; // 0x_            
            float m_flEnemyTouchMovementSlowDuration; // 0x_            
            float m_flXPDropChanceMultiplier; // 0x_            
            float m_flXPLevelUpRequirementMultiplier; // 0x_            
            float m_flAdditionalFirstFloorTime; // 0x_            
            bool m_bEnableMeteorModifier; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecAdditionalEnemySpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsSpawnerDefinition> m_vecAdditionalEnemySpawners;
            char m_vecAdditionalEnemySpawners[0x_]; // 0x_            
            // m_vecAdditionalEnemyEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsEnemyEventDefinition> m_vecAdditionalEnemyEvents;
            char m_vecAdditionalEnemyEvents[0x_]; // 0x_            
            // m_vecAdditionalStartingPowerUps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SurvivorsPowerUpID_t> m_vecAdditionalStartingPowerUps;
            char m_vecAdditionalStartingPowerUps[0x_]; // 0x_            
            // m_vecOverrideImperiaEnrageHealthThresholds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecOverrideImperiaEnrageHealthThresholds;
            char m_vecOverrideImperiaEnrageHealthThresholds[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_sLocDifficultyName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_sLocDifficultyDescription) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_sLocDifficultyUpgradeText) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flPlayerMaxHPMultiplier) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flPlayerHPRegenerationMultiplier) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flEnemyHealthMultiplier) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flEnemyDamageMultiplier) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flEnemyMovementSpeedMultiplier) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flEnemyTurnRateMultiplier) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flEnemySpawnCountMuliplier) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flEnemyTouchMovementSlowDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flXPDropChanceMultiplier) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flXPLevelUpRequirementMultiplier) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flAdditionalFirstFloorTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_bEnableMeteorModifier) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_vecAdditionalEnemySpawners) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_vecAdditionalEnemyEvents) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_vecAdditionalStartingPowerUps) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_vecOverrideImperiaEnrageHealthThresholds) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsDifficultyDefinition) == 0x_);
    };
};

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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xb0
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsDifficultyDefinition
        {
        public:
            CUtlString m_sLocDifficultyName; // 0x0            
            CUtlString m_sLocDifficultyDescription; // 0x8            
            CUtlString m_sLocDifficultyUpgradeText; // 0x10            
            uint8_t _pad0018[0x8]; // 0x18
            float m_flPlayerMaxHPMultiplier; // 0x20            
            float m_flPlayerHPRegenerationMultiplier; // 0x24            
            float m_flEnemyHealthMultiplier; // 0x28            
            float m_flEnemyDamageMultiplier; // 0x2c            
            float m_flEnemyMovementSpeedMultiplier; // 0x30            
            float m_flEnemyTurnRateMultiplier; // 0x34            
            float m_flEnemySpawnCountMuliplier; // 0x38            
            float m_flEnemyTouchMovementSlowDuration; // 0x3c            
            float m_flXPDropChanceMultiplier; // 0x40            
            float m_flXPLevelUpRequirementMultiplier; // 0x44            
            float m_flAdditionalFirstFloorTime; // 0x48            
            bool m_bEnableMeteorModifier; // 0x4c            
            uint8_t _pad004d[0x3]; // 0x4d
            // m_vecAdditionalEnemySpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsSpawnerDefinition> m_vecAdditionalEnemySpawners;
            char m_vecAdditionalEnemySpawners[0x18]; // 0x50            
            // m_vecAdditionalEnemyEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsEnemyEventDefinition> m_vecAdditionalEnemyEvents;
            char m_vecAdditionalEnemyEvents[0x18]; // 0x68            
            // m_vecAdditionalStartingPowerUps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SurvivorsPowerUpID_t> m_vecAdditionalStartingPowerUps;
            char m_vecAdditionalStartingPowerUps[0x18]; // 0x80            
            // m_vecOverrideImperiaEnrageHealthThresholds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecOverrideImperiaEnrageHealthThresholds;
            char m_vecOverrideImperiaEnrageHealthThresholds[0x18]; // 0x98            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_sLocDifficultyName) == 0x0);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_sLocDifficultyDescription) == 0x8);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_sLocDifficultyUpgradeText) == 0x10);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flPlayerMaxHPMultiplier) == 0x20);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flPlayerHPRegenerationMultiplier) == 0x24);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flEnemyHealthMultiplier) == 0x28);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flEnemyDamageMultiplier) == 0x2c);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flEnemyMovementSpeedMultiplier) == 0x30);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flEnemyTurnRateMultiplier) == 0x34);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flEnemySpawnCountMuliplier) == 0x38);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flEnemyTouchMovementSlowDuration) == 0x3c);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flXPDropChanceMultiplier) == 0x40);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flXPLevelUpRequirementMultiplier) == 0x44);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_flAdditionalFirstFloorTime) == 0x48);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_bEnableMeteorModifier) == 0x4c);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_vecAdditionalEnemySpawners) == 0x50);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_vecAdditionalEnemyEvents) == 0x68);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_vecAdditionalStartingPowerUps) == 0x80);
        static_assert(offsetof(source2sdk::client::CSurvivorsDifficultyDefinition, m_vecOverrideImperiaEnrageHealthThresholds) == 0x98);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsDifficultyDefinition) == 0xb0);
    };
};

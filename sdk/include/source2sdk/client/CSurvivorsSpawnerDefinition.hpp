#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ESurvivorsEnemySpawnBehavior.hpp"
#include "source2sdk/client/ESurvivorsEnemySpawnPositionsLayer.hpp"
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
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsSpawnerDefinition
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sEnemyName; // 0x_            
            CUtlString m_sEnemyDisplayName; // 0x_            
            std::int32_t m_nMinimumEnemyCount; // 0x_            
            std::int32_t m_nMaxSpawnCountPerInterval; // 0x_            
            std::int32_t m_nOverflowEnemySpawnCount; // 0x_            
            float m_flSpawnInterval; // 0x_            
            source2sdk::client::ESurvivorsEnemySpawnBehavior m_eSpawnBehavior; // 0x_            
            float m_flFixedDirectionSpawnDistanceVariance; // 0x_            
            bool m_bIsPersistant; // 0x_            
            bool m_bResetSpawnIntervalOnKill; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flSpawnChance; // 0x_            
            // m_sSpawnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sSpawnParticle;
            char m_sSpawnParticle[0x_]; // 0x_            
            Vector2D m_flSpawnOvalRadius; // 0x_            
            CUtlString m_sSpawnInfoTargetName; // 0x_            
            CUtlString m_sMinimapIconClass; // 0x_            
            float m_flPerpendicularWallSpacing; // 0x_            
            bool m_bIgnoreDifficultySpawnMultiplier; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ESurvivorsEnemySpawnPositionsLayer m_eSpawnPositionsLayer; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_sEnemyName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_sEnemyDisplayName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_nMinimumEnemyCount) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_nMaxSpawnCountPerInterval) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_nOverflowEnemySpawnCount) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_flSpawnInterval) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_eSpawnBehavior) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_flFixedDirectionSpawnDistanceVariance) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_bIsPersistant) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_bResetSpawnIntervalOnKill) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_flSpawnChance) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_sSpawnParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_flSpawnOvalRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_sSpawnInfoTargetName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_sMinimapIconClass) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_flPerpendicularWallSpacing) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_bIgnoreDifficultySpawnMultiplier) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawnerDefinition, m_eSpawnPositionsLayer) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsSpawnerDefinition) == 0x_);
    };
};

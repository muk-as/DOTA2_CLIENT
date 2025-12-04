#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ESurvivorsEnemySpawnBehavior.hpp"
#include "source2sdk/client/ESurvivorsEnemySpawnPositionsLayer.hpp"
#include "source2sdk/client/SurvivorsEnemyID_t.hpp"
#include "source2sdk/client/SurvivorsUnitID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsSpawner
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_vecSpawnedUnitIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SurvivorsUnitID_t> m_vecSpawnedUnitIDs;
            char m_vecSpawnedUnitIDs[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::SurvivorsEnemyID_t m_unEnemyID; // 0x_            
            std::int32_t m_nMinimumEnemyCount; // 0x_            
            std::int32_t m_nMaxSpawnCountPerInterval; // 0x_            
            std::int32_t m_nOverflowEnemySpawnCount; // 0x_            
            source2sdk::client::ESurvivorsEnemySpawnBehavior m_eSpawnBehavior; // 0x_            
            float m_flFixedDirectionSpawnDistanceVariance; // 0x_            
            Vector2D m_flSpawnOvalRadius; // 0x_            
            CUtlString m_sSpawnInfoTargetName; // 0x_            
            // m_vecOccupiedPositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecOccupiedPositions;
            char m_vecOccupiedPositions[0x_]; // 0x_            
            float m_flPerpendicularWallSpacing; // 0x_            
            Vector m_vSpawnerOrigin; // 0x_            
            bool m_bSpawningComplete; // 0x_            
            bool m_bIsPersistant; // 0x_            
            bool m_bResetSpawnIntervalOnKill; // 0x_            
            bool m_bIsActive; // 0x_            
            float m_flDuration; // 0x_            
            float m_flSpawnIntervalTimer; // 0x_            
            float m_flSpawnInterval; // 0x_            
            float m_flSpawnChance; // 0x_            
            source2sdk::client::ESurvivorsEnemySpawnPositionsLayer m_eSpawnPositionsLayer; // 0x_            
            // m_sSpawnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sSpawnParticle;
            char m_sSpawnParticle[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_vecSpawnedUnitIDs) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_unEnemyID) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_nMinimumEnemyCount) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_nMaxSpawnCountPerInterval) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_nOverflowEnemySpawnCount) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_eSpawnBehavior) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_flFixedDirectionSpawnDistanceVariance) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_flSpawnOvalRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_sSpawnInfoTargetName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_vecOccupiedPositions) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_flPerpendicularWallSpacing) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_vSpawnerOrigin) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_bSpawningComplete) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_bIsPersistant) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_bResetSpawnIntervalOnKill) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_bIsActive) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_flDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_flSpawnIntervalTimer) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_flSpawnInterval) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_flSpawnChance) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_eSpawnPositionsLayer) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_sSpawnParticle) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsSpawner) == 0x_);
    };
};

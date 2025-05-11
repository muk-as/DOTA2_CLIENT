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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x178
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsSpawner
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            // m_vecSpawnedUnitIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SurvivorsUnitID_t> m_vecSpawnedUnitIDs;
            char m_vecSpawnedUnitIDs[0x18]; // 0x10            
            uint8_t _pad0028[0x8]; // 0x28
            source2sdk::client::SurvivorsEnemyID_t m_unEnemyID; // 0x30            
            std::int32_t m_nMinimumEnemyCount; // 0x34            
            std::int32_t m_nMaxSpawnCountPerInterval; // 0x38            
            std::int32_t m_nOverflowEnemySpawnCount; // 0x3c            
            source2sdk::client::ESurvivorsEnemySpawnBehavior m_eSpawnBehavior; // 0x40            
            float m_flFixedDirectionSpawnDistanceVariance; // 0x44            
            Vector2D m_flSpawnOvalRadius; // 0x48            
            CUtlString m_sSpawnInfoTargetName; // 0x50            
            // m_vecOccupiedPositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecOccupiedPositions;
            char m_vecOccupiedPositions[0x18]; // 0x58            
            float m_flPerpendicularWallSpacing; // 0x70            
            Vector m_vSpawnerOrigin; // 0x74            
            bool m_bSpawningComplete; // 0x80            
            bool m_bIsPersistant; // 0x81            
            bool m_bResetSpawnIntervalOnKill; // 0x82            
            bool m_bIsActive; // 0x83            
            float m_flDuration; // 0x84            
            float m_flSpawnIntervalTimer; // 0x88            
            float m_flSpawnInterval; // 0x8c            
            float m_flSpawnChance; // 0x90            
            source2sdk::client::ESurvivorsEnemySpawnPositionsLayer m_eSpawnPositionsLayer; // 0x94            
            // m_sSpawnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sSpawnParticle;
            char m_sSpawnParticle[0xe0]; // 0x98            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_vecSpawnedUnitIDs) == 0x10);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_unEnemyID) == 0x30);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_nMinimumEnemyCount) == 0x34);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_nMaxSpawnCountPerInterval) == 0x38);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_nOverflowEnemySpawnCount) == 0x3c);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_eSpawnBehavior) == 0x40);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_flFixedDirectionSpawnDistanceVariance) == 0x44);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_flSpawnOvalRadius) == 0x48);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_sSpawnInfoTargetName) == 0x50);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_vecOccupiedPositions) == 0x58);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_flPerpendicularWallSpacing) == 0x70);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_vSpawnerOrigin) == 0x74);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_bSpawningComplete) == 0x80);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_bIsPersistant) == 0x81);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_bResetSpawnIntervalOnKill) == 0x82);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_bIsActive) == 0x83);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_flDuration) == 0x84);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_flSpawnIntervalTimer) == 0x88);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_flSpawnInterval) == 0x8c);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_flSpawnChance) == 0x90);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_eSpawnPositionsLayer) == 0x94);
        static_assert(offsetof(source2sdk::client::CSurvivorsSpawner, m_sSpawnParticle) == 0x98);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsSpawner) == 0x178);
    };
};

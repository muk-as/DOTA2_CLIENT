#pragma once
#include "source2sdk/client/ESurvivorsEnemySpawnBehavior.hpp"
#include "source2sdk/client/ESurvivorsEnemySpawnPositionsLayer.hpp"
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
    // Size: 0x148
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsSpawnerDefinition
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        CUtlString m_sEnemyName; // 0x10        
        CUtlString m_sEnemyDisplayName; // 0x18        
        int32_t m_nMinimumEnemyCount; // 0x20        
        int32_t m_nMaxSpawnCountPerInterval; // 0x24        
        int32_t m_nOverflowEnemySpawnCount; // 0x28        
        float m_flSpawnInterval; // 0x2c        
        client::ESurvivorsEnemySpawnBehavior m_eSpawnBehavior; // 0x30        
        float m_flFixedDirectionSpawnDistanceVariance; // 0x34        
        bool m_bIsPersistant; // 0x38        
        bool m_bResetSpawnIntervalOnKill; // 0x39        
        [[maybe_unused]] std::uint8_t pad_0x3a[0x2]; // 0x3a
        float m_flSpawnChance; // 0x3c        
        // m_sSpawnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sSpawnParticle;
        char m_sSpawnParticle[0xe0]; // 0x40        
        Vector2D m_flSpawnOvalRadius; // 0x120        
        CUtlString m_sSpawnInfoTargetName; // 0x128        
        CUtlString m_sMinimapIconClass; // 0x130        
        float m_flPerpendicularWallSpacing; // 0x138        
        bool m_bIgnoreDifficultySpawnMultiplier; // 0x13c        
        [[maybe_unused]] std::uint8_t pad_0x13d[0x7]; // 0x13d
        client::ESurvivorsEnemySpawnPositionsLayer m_eSpawnPositionsLayer; // 0x144        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_sEnemyName) == 0x10);
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_sEnemyDisplayName) == 0x18);
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_nMinimumEnemyCount) == 0x20);
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_nMaxSpawnCountPerInterval) == 0x24);
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_nOverflowEnemySpawnCount) == 0x28);
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_flSpawnInterval) == 0x2c);
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_eSpawnBehavior) == 0x30);
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_flFixedDirectionSpawnDistanceVariance) == 0x34);
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_bIsPersistant) == 0x38);
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_bResetSpawnIntervalOnKill) == 0x39);
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_flSpawnChance) == 0x3c);
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_sSpawnParticle) == 0x40);
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_flSpawnOvalRadius) == 0x120);
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_sSpawnInfoTargetName) == 0x128);
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_sMinimapIconClass) == 0x130);
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_flPerpendicularWallSpacing) == 0x138);
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_bIgnoreDifficultySpawnMultiplier) == 0x13c);
    static_assert(offsetof(CSurvivorsSpawnerDefinition, m_eSpawnPositionsLayer) == 0x144);
    
    static_assert(sizeof(CSurvivorsSpawnerDefinition) == 0x148);
};

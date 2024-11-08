#pragma once
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
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsEnemyEventDefinition
    {
    public:
        CUtlString m_sSpawnerName; // 0x0        
        int32_t m_nMinimumEnemyCountOverride; // 0x8        
        int32_t m_nMaxSpawnCountPerIntervalOverride; // 0xc        
        int32_t m_nOverflowEnemySpawnCountOverride; // 0x10        
        float m_flSpawnIntervalOverride; // 0x14        
        float m_flStartTime; // 0x18        
        float m_flEndTime; // 0x1c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsEnemyEventDefinition, m_sSpawnerName) == 0x0);
    static_assert(offsetof(CSurvivorsEnemyEventDefinition, m_nMinimumEnemyCountOverride) == 0x8);
    static_assert(offsetof(CSurvivorsEnemyEventDefinition, m_nMaxSpawnCountPerIntervalOverride) == 0xc);
    static_assert(offsetof(CSurvivorsEnemyEventDefinition, m_nOverflowEnemySpawnCountOverride) == 0x10);
    static_assert(offsetof(CSurvivorsEnemyEventDefinition, m_flSpawnIntervalOverride) == 0x14);
    static_assert(offsetof(CSurvivorsEnemyEventDefinition, m_flStartTime) == 0x18);
    static_assert(offsetof(CSurvivorsEnemyEventDefinition, m_flEndTime) == 0x1c);
    
    static_assert(sizeof(CSurvivorsEnemyEventDefinition) == 0x20);
};

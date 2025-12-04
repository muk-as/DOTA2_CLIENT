#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        class CSurvivorsEnemyEventDefinition
        {
        public:
            CUtlString m_sSpawnerName; // 0x_            
            std::int32_t m_nMinimumEnemyCountOverride; // 0x_            
            std::int32_t m_nMaxSpawnCountPerIntervalOverride; // 0x_            
            std::int32_t m_nOverflowEnemySpawnCountOverride; // 0x_            
            float m_flSpawnIntervalOverride; // 0x_            
            float m_flStartTime; // 0x_            
            float m_flEndTime; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyEventDefinition, m_sSpawnerName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyEventDefinition, m_nMinimumEnemyCountOverride) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyEventDefinition, m_nMaxSpawnCountPerIntervalOverride) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyEventDefinition, m_nOverflowEnemySpawnCountOverride) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyEventDefinition, m_flSpawnIntervalOverride) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyEventDefinition, m_flStartTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyEventDefinition, m_flEndTime) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsEnemyEventDefinition) == 0x_);
    };
};

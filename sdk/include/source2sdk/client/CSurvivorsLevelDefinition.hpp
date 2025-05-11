#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsEnemyEventDefinition.hpp"
#include "source2sdk/client/SurvivorsLevelID_t.hpp"

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
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsLevelDefinition
        {
        public:
            source2sdk::client::SurvivorsLevelID_t m_unLevelID; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // m_vecEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsEnemyEventDefinition> m_vecEvents;
            char m_vecEvents[0x18]; // 0x8            
            // m_vecBossEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsEnemyEventDefinition> m_vecBossEvents;
            char m_vecBossEvents[0x18]; // 0x20            
            Vector2D m_vMapBounds; // 0x38            
            Vector2D m_vEntityBounds; // 0x40            
            uint8_t _pad0048[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsLevelDefinition, m_unLevelID) == 0x0);
        static_assert(offsetof(source2sdk::client::CSurvivorsLevelDefinition, m_vecEvents) == 0x8);
        static_assert(offsetof(source2sdk::client::CSurvivorsLevelDefinition, m_vecBossEvents) == 0x20);
        static_assert(offsetof(source2sdk::client::CSurvivorsLevelDefinition, m_vMapBounds) == 0x38);
        static_assert(offsetof(source2sdk::client::CSurvivorsLevelDefinition, m_vEntityBounds) == 0x40);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsLevelDefinition) == 0x50);
    };
};

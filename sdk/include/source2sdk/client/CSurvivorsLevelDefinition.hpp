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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsLevelDefinition
        {
        public:
            source2sdk::client::SurvivorsLevelID_t m_unLevelID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsEnemyEventDefinition> m_vecEvents;
            char m_vecEvents[0x_]; // 0x_            
            // m_vecBossEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsEnemyEventDefinition> m_vecBossEvents;
            char m_vecBossEvents[0x_]; // 0x_            
            Vector2D m_vMapBounds; // 0x_            
            Vector2D m_vEntityBounds; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsLevelDefinition, m_unLevelID) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsLevelDefinition, m_vecEvents) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsLevelDefinition, m_vecBossEvents) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsLevelDefinition, m_vMapBounds) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsLevelDefinition, m_vEntityBounds) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsLevelDefinition) == 0x_);
    };
};

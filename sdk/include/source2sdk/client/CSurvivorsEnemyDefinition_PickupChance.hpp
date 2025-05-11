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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSurvivorsEnemyDefinition_PickupChance
        {
        public:
            CUtlString m_sPickupName; // 0x0            
            float m_flChance; // 0x8            
            std::int32_t m_nExperienceReward; // 0xc            
            uint8_t _pad0010[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_PickupChance, m_sPickupName) == 0x0);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_PickupChance, m_flChance) == 0x8);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_PickupChance, m_nExperienceReward) == 0xc);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsEnemyDefinition_PickupChance) == 0x18);
    };
};

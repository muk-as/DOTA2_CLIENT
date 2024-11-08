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
    // Size: 0x18
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSurvivorsEnemyDefinition__PickupChance
    {
    public:
        CUtlString m_sPickupName; // 0x0        
        float m_flChance; // 0x8        
        int32_t m_nExperienceReward; // 0xc        
        [[maybe_unused]] std::uint8_t pad_0x10[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsEnemyDefinition__PickupChance, m_sPickupName) == 0x0);
    static_assert(offsetof(CSurvivorsEnemyDefinition__PickupChance, m_flChance) == 0x8);
    static_assert(offsetof(CSurvivorsEnemyDefinition__PickupChance, m_nExperienceReward) == 0xc);
    
    static_assert(sizeof(CSurvivorsEnemyDefinition__PickupChance) == 0x18);
};

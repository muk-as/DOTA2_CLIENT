#pragma once
#include "source2sdk/client/CSurvivorsPowerUpDefinition_AreaAttack_Circle.hpp"
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
    // Standard-layout class: false
    // Size: 0x870
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsPowerUpDefinition_CounterHelix : public client::CSurvivorsPowerUpDefinition_AreaAttack_Circle
    {
    public:
        float m_flChanceToCounter; // 0x868        
        float m_flDelayBetweenCounters; // 0x86c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsPowerUpDefinition_CounterHelix because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsPowerUpDefinition_CounterHelix) == 0x870);
};

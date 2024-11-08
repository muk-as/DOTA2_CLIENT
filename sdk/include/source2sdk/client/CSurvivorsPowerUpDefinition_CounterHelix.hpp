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
    // Size: 0x878
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsPowerUpDefinition_CounterHelix : public client::CSurvivorsPowerUpDefinition_AreaAttack_Circle
    {
    public:
        float m_flChanceToCounter; // 0x870        
        [[maybe_unused]] std::uint8_t pad_0x874[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsPowerUpDefinition_CounterHelix because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsPowerUpDefinition_CounterHelix) == 0x878);
};

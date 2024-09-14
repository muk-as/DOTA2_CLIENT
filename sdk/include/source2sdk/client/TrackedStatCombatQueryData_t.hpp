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
    // Size: 0x8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct TrackedStatCombatQueryData_t
    {
    public:
        // metadata: MPropertyDescription "the combat query file"
        CUtlString strCombatQueryPath; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(TrackedStatCombatQueryData_t, strCombatQueryPath) == 0x0);
    
    static_assert(sizeof(TrackedStatCombatQueryData_t) == 0x8);
};

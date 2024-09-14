#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct CreatureStateData_t
    {
    public:
        char* pszName; // 0x0        
        float flAggression; // 0x8        
        float flAvoidance; // 0xc        
        float flSupport; // 0x10        
        float flRoamDistance; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CreatureStateData_t, pszName) == 0x0);
    static_assert(offsetof(CreatureStateData_t, flAggression) == 0x8);
    static_assert(offsetof(CreatureStateData_t, flAvoidance) == 0xc);
    static_assert(offsetof(CreatureStateData_t, flSupport) == 0x10);
    static_assert(offsetof(CreatureStateData_t, flRoamDistance) == 0x14);
    
    static_assert(sizeof(CreatureStateData_t) == 0x18);
};

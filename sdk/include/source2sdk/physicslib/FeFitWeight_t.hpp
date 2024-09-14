#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeFitWeight_t
    {
    public:
        float flWeight; // 0x0        
        uint16_t nNode; // 0x4        
        uint16_t nDummy; // 0x6        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeFitWeight_t, flWeight) == 0x0);
    static_assert(offsetof(FeFitWeight_t, nNode) == 0x4);
    static_assert(offsetof(FeFitWeight_t, nDummy) == 0x6);
    
    static_assert(sizeof(FeFitWeight_t) == 0x8);
};

#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CollisionGroupContext_t
    {
    public:
        int32_t m_nCollisionGroupNumber; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CollisionGroupContext_t, m_nCollisionGroupNumber) == 0x0);
    
    static_assert(sizeof(CollisionGroupContext_t) == 0x4);
};

#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class PARTICLE_WORLD_HANDLE__
    {
    public:
        int32_t unused; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PARTICLE_WORLD_HANDLE__, unused) == 0x0);
    
    static_assert(sizeof(PARTICLE_WORLD_HANDLE__) == 0x4);
};

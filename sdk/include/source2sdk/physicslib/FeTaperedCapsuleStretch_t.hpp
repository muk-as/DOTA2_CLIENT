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
    // Size: 0x10
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeTaperedCapsuleStretch_t
    {
    public:
        uint16_t nNode[2]; // 0x0        
        uint16_t nCollisionMask; // 0x4        
        // metadata: MPropertySuppressField
        uint16_t nDummy; // 0x6        
        float flRadius[2]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeTaperedCapsuleStretch_t, nNode) == 0x0);
    static_assert(offsetof(FeTaperedCapsuleStretch_t, nCollisionMask) == 0x4);
    static_assert(offsetof(FeTaperedCapsuleStretch_t, nDummy) == 0x6);
    static_assert(offsetof(FeTaperedCapsuleStretch_t, flRadius) == 0x8);
    
    static_assert(sizeof(FeTaperedCapsuleStretch_t) == 0x10);
};
